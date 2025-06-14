class Solution:
    def findKthNumber(self, n: int, k: int) -> int:
        # starting down a trie node
        e = floor(log10(n))+1  # max depth of leafs (= # of digits in n)
        num = 1  # starting node digit
        level = 0  # staring node depth
        ans = 0  # prefix (and final answer)
        while k > 0:
            current = 10*ans + num
            prefix_n = n//(10**(e-level-1))  # top (level) digits of n
            # one path exceeded n, reduce depth of leaf
            if current == prefix_n+1:
                e -= 1
            count = 0 # sum of total count for all numbers under this node
            for i in range(e-level): # from current node to the leaf
                # limit count by n on full depth on critical path
                if i == (e-level-1) and prefix_n == current:
                    count +=n % (10**i) + 1 # +1 is for ending in all zero e.g. x000
                else:
                    count += 10**i  # x0-x9, x00-x99,... etc
            if k > count:  # if total count fit in k, move node to the right
                k -= count
                num += 1
            else:  # if total count doesn't fit, count current node (k=k-1) and record answer, then move to child node
                k -= 1
                ans = current
                level += 1
                num = 0
        return ans

        
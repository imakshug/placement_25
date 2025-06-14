class Solution:
    def minMaxDifference(self, num: int) -> int:
        num_str = str(num)

        # Create max_num by replacing the first non-9 digit with 9
        for c in num_str:
            if c != '9':
                max_num = int(num_str.replace(c, '9'))
                break
        else:
            max_num = int(num_str)

        # Create min_num by replacing the first digit with 0
        first_char = num_str[0]
        min_num = int(num_str.replace(first_char, '0'))

        return max_num - min_num

# Example usage:
solution = Solution()
result = solution.minMaxDifference(123456)
print(result)  # Output: 823456 -  23 456 = 800000

class Solution:
    def minMaxDifference(self, num: int) -> int:
        num_str = str(num)
        max_digit = max(num_str)
        min_digit = min(num_str)

        # Create the maximum number by replacing the minimum digit with the maximum digit
        max_num = int(num_str.replace(min_digit, max_digit))
        
        # Create the minimum number by replacing the maximum digit with '0'
        min_num = int(num_str.replace(max_digit, '0'))

        return max_num - min_num
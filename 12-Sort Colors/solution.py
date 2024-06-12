class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count = [0, 0, 0]

        for i in nums:
            if i == 0:
                count[0] += 1
            elif i == 1:
                count[1] += 1
            else:
                count[2] += 1
        
        for i in range(1, len(count)):
            count[i] += count[i - 1]

        count = [0] + count[:-1]

        ans = [0] * len(nums)

        for i in range(len(nums)):
            ans[count[nums[i]]] = nums[i]
            count[nums[i]] += 1
        
        for i in range(len(ans)):
            nums[i] = ans[i]
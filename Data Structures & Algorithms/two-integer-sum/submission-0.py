class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        comps = {}
        for i in range(len(nums)):
            nr = target - nums[i]
            if nr in comps:
                return [comps[nr], i]
            else: comps[nums[i]] = i    
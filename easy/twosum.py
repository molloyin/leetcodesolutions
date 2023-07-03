class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        # convert nums to hashmap, value:index
        # loop through nums, check if target - nums[i] is in the map
        #       Note: could improve by initialzing map in enum loop

        nums_map = {}
        for i in range(len(nums)):
            nums_map[nums[i]] = i
        
        for index, num in enumerate(nums):
            offset = target - num
            if offset in nums_map and index != nums_map[offset]: # check if offset is in the map and not the same index
                return [index, nums_map[offset]]

        return None

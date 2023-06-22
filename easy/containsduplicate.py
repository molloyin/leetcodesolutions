class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # add element to set, if element already exists return true
        # time O(n), space O(n)

        duplicate_checker = set()
        for element in nums:
            if element in duplicate_checker:
                return True
            duplicate_checker.add(element)
        return False





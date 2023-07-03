class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        # store freqs of each element in dict, descending sort + convert to tuples,
        # return top k elems

        element_freqs = {}
        highest_freqs = []

        for num in nums:
            element_freqs[num] = element_freqs.get(num, 0) + 1
        
        sorted_freqs = sorted(element_freqs.items(), key=lambda x: x[1], reverse=True)
        for i in range(k):
            highest_freqs.append(sorted_freqs[i][0])

        return highest_freqs

    # Note: lucked into top 7% of solutions 

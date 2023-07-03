from collections import defaultdict

class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        """
        for each index create map char:count, each unique map state (s) 
        is added to a meta map s:list, where list is each string which 
        shares a state. O(nwords * avchars) reduces to O(n)
               Note: can't hash a dictionary, so char:count will have to  
                     be an array
        """

        group_anagrams = defaultdict(list)     # s:list

        for str in strs:
            state = [0] * 26    # init arr to count each char in str
            for char in str:
                state[ord(char) - ord("a")] += 1
            group_anagrams[tuple(state)].append(str)

        return  group_anagrams.values()

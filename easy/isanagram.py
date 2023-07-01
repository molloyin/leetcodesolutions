class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        # need to verify s and t are identical lists where order
        # doesn't matter--create hashmap for both, key is char, value
        # is noccurrences. Compare hashmaps (O(n), fastest as O(1) indexing)
        # could improve memory by quicksorting and comparing, losing speed

        if len(s) != len(t):
            return False

        charS = {}
        charT = {}
        
        for i in range(len(s)):
            charS[s[i]] = charS.get(s[i], 0) + 1    # increment occurences
            charT[t[i]] = charT.get(t[i], 0) + 1   

        return charS == charT

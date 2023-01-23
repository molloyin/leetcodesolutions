class Solution {
public:
    bool canConstruct(string ransom_note, string magazine) {
        // brute-force:     loop through magazine constructing ransomNote as you go... worst case O(n^2)
        // erase char from magazine and ransomnote when match detected.
        // brute-force++:   use .find() to search 'magazine' instead of 2nd for-loop 
        for (int i = 0; i < ransom_note.size(); i++) {
            int match_index = magazine.find(ransom_note[i]);
            if (match_index == string::npos) {
                return false;
            }
            magazine.erase(match_index, 1);
        }

        return true;
    }
};

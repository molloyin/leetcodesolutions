/*
find all int from [1, n] that don't appear in the first index of each nested vector; judge candidates
or each candidate, check if every other number trusts them

solution beats 72% in runtime and 48% in memory
*/
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        set<int> range;
        set<int> citizens;
        set<int> judge_candidates;

        for (int i = 1; i <= n; i++) {
            range.insert(i);
        }
        for (int i = 0; i < trust.size(); i++) {
            citizens.insert(trust[i][0]);
        }

        if (n == 1) {
            return 1;
        }
        // if every citizen trust someone, no judge | remove empty towns
        if (citizens.size() == n || trust.size() == 0) {
            return -1;
        }

        // find every int from [1, n] not found in citizens, store in judge_candidates
        std::set_difference(range.begin(), range.end(), citizens.begin(), citizens.end(), std::inserter(judge_candidates, judge_candidates.begin()));

        // for every judge candidate, iterate through vector, check every citizen trusts judge
        for (auto c : judge_candidates) {
            set<int> copy;
            copy.insert(citizens.begin(), citizens.end());
            // insert all other judge candidates, make sure they're evaluated
            for (auto jc : judge_candidates) {
                if (jc != c) {
                    copy.insert(jc);
                }
            }
            for (int i = 0; i < trust.size(); i++) {
                set<int>::iterator it = copy.find(trust[i][0]);
                if (it != copy.end() && trust[i][1] == c) {
                    copy.erase(it);
                }
            }
            if (copy.size() == 0) {
                return c;
            }
        }

        return -1;
    }
};

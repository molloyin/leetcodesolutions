class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // sum each row (j) update richest in real time
        vector<vector<int>>::const_iterator row;
        vector<int>::const_iterator col;
        int maxWealth = 0;

        for (row = accounts.begin(); row != accounts.end(); ++row) {
            int currentCustomerWealth = 0;
            for (col = row->begin(); col != row->end(); ++col) {
                currentCustomerWealth += *col;
            }
            if (currentCustomerWealth > maxWealth) {
                maxWealth = currentCustomerWealth;
            }
        }

        return maxWealth;
    }
};

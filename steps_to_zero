// sexy recursive implementation of high intelligence, 0ms performance
class Solution {
public:
    int count = 0;
    int numberOfSteps(int num) {
        if (num != 0) {
            if (num % 2 == 0) {
                numberOfSteps(num / 2);
            }
            else {
                numberOfSteps(--num);
            }
        }

        return count++;
    }
};

// sexy trash code, 0ms performance
class Solution {
public:
    // while not 0, perform relevant operations and modify count
    int numberOfSteps(int num) {
        int count = 0;

        while (num != 0) {
            if (num % 2 == 0) { // possible performance increase: combining the "is even" check and the divide by 2
                num /= 2;
                count++;
                continue;
            }
            num--;
            count++;
        }

        return count;
    }
};

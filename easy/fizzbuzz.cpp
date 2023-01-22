// I've pwned fizzbuzz... officially a genius!! :D ( top 1% of runtime, but only beats 39% of memory usage...)
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int fizz_cond = 3;
        int buzz_cond = 5;
        vector<string> fizz_buzz_output;
        for (int i = 1; i <= n; i++) {
            if (i % fizz_cond == 0 && i % buzz_cond == 0)   { fizz_buzz_output.push_back("FizzBuzz"); }
            else if (i % fizz_cond == 0)                    { fizz_buzz_output.push_back("Fizz"); }
            else if (i % buzz_cond == 0)                    { fizz_buzz_output.push_back("Buzz"); }
            else                                            { fizz_buzz_output.push_back(to_string(i)); }
        } 

        return fizz_buzz_output;
    }
};

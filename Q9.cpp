#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string compare;
        int i, length, time;

        if (x < 0) {
            return false;
        }

        compare = to_string(x);
        length = compare.length();
        time = length / 2;

        for (i = 0; i < length; i++) {
            if (compare[i] != compare[length - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
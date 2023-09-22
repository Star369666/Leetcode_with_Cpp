#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> roman;
        vector<int> nums = { 1,5,10,50,100,500,1000,4,9,40,90,400,900 };
        vector<string> romans = { "I","V","X","L","C","D","M","IV","IX","XL","XC","CD","CM" };
        int i, size;
        int count = 0;
        string pointer;

        for (i = 0; i < nums.size(); i++) {
            roman[romans[i]] = nums[i];
        }

        i = 0;
        size = s.size();
        for (pointer = s[i]; i < size; i++) {
            pointer = s[i];

            if (pointer == "I" || pointer == "X" || pointer == "C") {
                if (roman.count(pointer + s[i + 1])) {
                    pointer = pointer + s[i + 1];
                    i++;
                }
            }
            count += roman[pointer];
        }

        return count;
    }
};
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> answer = {};
		unordered_map<int, int> hash;
		int i, size, find_it;

		size = nums.size();
		for (i = 0; i < size; i++) {
			find_it = target - nums[i];
			if (hash.count(find_it)) {
				answer = { hash[find_it],i };
				return answer;
			}
			hash[nums[i]] = i;
		}

		return answer;
	}
};
#include <vector>

#include "CMakeProject1.h"

void Solution::BackTrack(vector<int> track, vector<bool> usedNums, const vector<int>& nums) {
	if (track.size() == nums.size()) {
		result.push_back(track);
		return;
	}
	for (uint32_t i = 0; i < nums.size(); i++) {
		if (usedNums[i] == true) {
			continue;
		}
		track.push_back(nums[i]);
		usedNums[i] = true;
		BackTrack(track, usedNums, nums);
		track.pop_back();
		usedNums[i] = false;
	}
}

vector<vector<int>> Solution::permute(vector<int>& nums) {
	vector<int> track;
	vector<bool> usedNums(nums.size(), false);
	BackTrack(track, usedNums, nums);
	return result;
}
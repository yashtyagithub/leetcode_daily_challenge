class Solution {
	vector<int> original;
	int n;

public:
  Solution(vector<int>& nums) {
		original = nums;
		n = original.size();
	}
	
	vector<int> reset() {
		return original;
	}
	
	vector<int> shuffle() {
			vector<int> shuffle=original;
			int last=n;
			for(int i = n-1; i>=0; i--) {
				int j = rand()%last;
				swap(shuffle[i], shuffle[j]);
				last--;
			}
			return shuffle;
	}
};

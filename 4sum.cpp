class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;

        if(nums.size()<4) return ans;

        sort(nums.begin(), nums.end());

        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){

                int x = target - (nums[i] + nums[j]);
                int lo = j+1;
                int hi = n-1;

                while(lo<hi){

                    int two_sum = nums[lo] + nums[hi];

                    if(two_sum < x) lo++;

                    else if(two_sum > x) hi--;

                    else{
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[lo];
                        quad[3]=nums[hi];
                        ans.push_back(quad);


                        while(lo<hi && nums[lo]==quad[2]) lo++;

                        while(lo<hi && nums[hi]==quad[3]) hi--;
                    }
                }
                while(j+1 < n && nums[j+1] == nums[j]) j++;

            }
            while(i+1 < n && nums[i+1] == nums[i]) i++;
        }
        return ans;
    }
};

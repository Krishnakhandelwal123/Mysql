class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0;
        int equal=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                less++;
            }
            else if(nums[i]==target){
                equal++;
            }
        }
        if(equal==0){
            return {};
        }

        if(equal==1){
            return {less};
        }
        else{
            vector<int>ans;
            ans.push_back(less);
            for(int i=1;i<equal;i++){
               ans.push_back(less+1);
               less++;
            }
            return ans;
        }
        return {};
    }
};
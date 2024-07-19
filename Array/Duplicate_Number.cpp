class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector <int>  uniq_nums;
        uniq_nums=nums;
        sort(uniq_nums.begin(),uniq_nums.end());
        for (int i=0;i<uniq_nums.size();i++){
            if(uniq_nums[i]==uniq_nums[i+1]){
                return uniq_nums[i];
            }

        }
        return 0;}
};

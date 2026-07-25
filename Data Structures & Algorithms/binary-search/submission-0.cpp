class Solution {
public:
    int bs(int l,int r,vector<int>& nums,int t){
        if(l>r) return -1;
        int m = l + (r-l) / 2;

        if(nums[m]==t) return m;

        return ((nums[m]<t) ? bs(m+1,r,nums,t) : bs(l,m-1,nums,t));
    }
    int search(vector<int>& nums, int target) {
        return bs(0,nums.size()-1,nums,target);
    }
};

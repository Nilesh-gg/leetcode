class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int count=1;
        while(j!=nums.size()){
            if(nums[j-1]==nums[j]){
                j++;
                continue;
            }
            else{
                nums[i+1]=nums[j];
                i++;
                j++;
                count++;
                continue;
            }
            
        }
        return count;
        
    }
};
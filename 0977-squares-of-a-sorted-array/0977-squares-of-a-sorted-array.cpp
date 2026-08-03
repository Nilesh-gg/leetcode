class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> pos;
        vector<int> neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]*nums[i]);
            }
            else{
                pos.push_back(nums[i]*nums[i]);
            }
        }
        reverse(neg.begin(),neg.end());
        int a=0;
        int b=0;
        while(a<neg.size() && b<pos.size()){
            if(neg[a]<pos[b]){
                
                nums[a+b]=neg[a];
                a++;
            }
            else{
                
                nums[a+b]=pos[b];
                b++;
            }
        }
        while (a < neg.size()) {
    nums[a + b] = neg[a];
    a++;
}

while (b < pos.size()) {
    nums[a + b] = pos[b];
    b++;
}
        return nums;
    }
};
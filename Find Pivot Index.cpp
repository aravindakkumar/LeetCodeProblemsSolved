class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0; i < nums.size(); i++){
            int left = 0;
            int right = 0;
            
            int m=0;
            while(m < i){
                left += nums[m];
                m++;
            }
            int n=i+1;
            while(n <= nums.size()-1){
                right += nums[n];
                n++;
            }
            
            if(left == right) return i;
        }
        
        return -1;
    }
};

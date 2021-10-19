class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        if(nums.empty() || nums.size()<=1)
            return;
        
        int index1=0, index2=0;
        
        int i=0;
        
        int n = nums.size();
        
        for(i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                index1=i-1;
                break;
                }
           }
        
        if(index1>=0)
        {
          for(i=n-1;i>=0;i--)
          {
            if(nums[i]>nums[index1])
            {
                index2=i;
                swap(nums, index1, index2);
                break;
                }
           }    
            }
        else
        {
            index1 = -1;
             }
        
            reverse(nums, index1+1, n-1);
        
        
        
        
    }
    
    void swap (vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
          }
    
     void reverse (vector<int>& nums, int i, int j){
        int temp = 0;
        
        while(i<j)
        {
          swap(nums, i,j);
            i++;
            j--;
            }
     }
    
    
};
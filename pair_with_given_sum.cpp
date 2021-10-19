class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        
       unordered_map<int, int> m;
        
        for(int i=0; i<n; i++)
        {
        m[arr[i]]++;
        }
        
        int t_count = 0;
        
        for(int i=0;i<n;i++)
        {
            t_count += m[k-arr[i]];
            
            if(k-arr[i] == arr[i])
            t_count--;
        }
        
        return t_count/2;
        
        
    }
};
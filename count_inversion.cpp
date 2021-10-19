long long int merge(long long  arr[], long long  temp[], int left, int mid, int right)
{
    
    int i,j,k;
    long long int inv_count = 0;
    
     i= left;
     j = mid;
     k = left;
    
    while((i<=mid-1) && (j<=right))
    {
        if(arr[i]<=arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            
            inv_count = inv_count + (mid-i);
        }
    }
    
    while(i<=mid-1)
    {
        temp[k++] = arr[i++];
    }
    
    while(j<=right)
    {
        temp[k++] = arr[j++];
    }
    
    for(i=left;i<=right;i++)
    {
        arr[i] = temp[i];
    }
    
    return inv_count;
}

long long int mergeSort(long long arr[], long long temp[], int left , int right)
{
    
    int mid;
    long long int inv_count = 0;
    
    
    if(right>left)
    {
         mid = (left+right)/2;
        
        inv_count += mergeSort(arr, temp, left, mid);
        
        inv_count += mergeSort(arr, temp, mid+1, right);
        
        
        inv_count += merge(arr, temp, left, mid+1, right);
    }
    
    return inv_count;
    
    
}



long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    
    long long  temp[N];
    
    
    long long int count = mergeSort(arr, temp, 0, N-1);


return count;
   
}
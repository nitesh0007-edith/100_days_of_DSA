void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i=0;
        while(i<n)
        {
           int left=i;
           int right=min(i+k-1,n-1);
        
         while(left<right)
        {
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
        i=i+k;
        }
        
    }

int equilibriumPoint(long long a[], int n) {
        // Your code here
        if(n==1)
        {
            return 1;
        }
        for(int i=0;i<n;i++)
        {
            int left=0,right=0;
        
            for(int j=0;j<i;j++)
            {
                left+=a[j];
            }
            for(int j=i+1;j<n;j++)
            {
                right+=a[j];
            }
            if(left==right)
            {
                return i+1;
            }
        }
        return -1;
    }

int equilibriumPoint(long long a[], int n) {
        // Your code here
        if(n==1)
        {
            return 1;
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            total+=a[i];
        }
        int right=0;
        for(int i=n-1;i>=0;i--)
        {
            if(right==total-(a[i]+right))
            {
                return i+1;
            }
            right+=a[i];
        }
        return -1;
    }

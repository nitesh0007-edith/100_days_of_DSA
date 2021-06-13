    int minAdjDiff(int arr[], int n){    
        // Your code here
        int minimum=abs(arr[1]-arr[0]);
        for(int i=2;i<n;i++)
        {
            minimum=min(minimum,abs(arr[i]-arr[i-1]));
        }
        minimum=min(minimum,abs(arr[n-1]-arr[0]));
        
        return minimum;
        
    }

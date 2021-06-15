    def equilibriumPoint(self,A, N):
        # Your code here
        if(N==1):
            return 1
        total=sum(A)
        right=0
        for i in range(N-1,-1,-1):
            if (right==total-(A[i]+right)):
                return i+1
            right+=A[i]
        return -1

def leaders(self, A, N):
        #Code here
        l=[]
        curr_lead=A[N-1]
        l.append(curr_lead)
        for i in range(N-2,-1,-1):
            if curr_lead<=A[i]:
                curr_lead=A[i]
                l.append(curr_lead)
        
        return l[::-1]

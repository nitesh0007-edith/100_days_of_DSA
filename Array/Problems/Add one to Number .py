def plusOne(self, A):
        ans=""
        s=list(map(str,A))
        for i in s:
            ans+=i
        j=list(str(int(ans)+1))
        return j

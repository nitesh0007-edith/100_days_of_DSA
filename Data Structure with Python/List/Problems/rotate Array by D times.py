class Solution:
    #Function to rotate an array by d times in counter-clockwise direction. 
    def rotateArr(self,A,D,N):
        self.reverse(A,0,D-1)
        self.reverse(A,D,N-1)
        self.reverse(A,0,N-1)
        
    def reverse(self,A,start,end):
        while(start<end):
            A[start],A[end]=A[end],A[start]
            start+=1
            end-=1

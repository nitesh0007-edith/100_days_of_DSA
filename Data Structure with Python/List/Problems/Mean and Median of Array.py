class Solution:
    ##Complete the below codes
    #Function to find median of the array elements.
    def median(self,A,N):
        
        A.sort()
        ##Your code here
        #If median is fraction then convert the median to integer and return
        if N%2!=0:
            med=N/2
            med=int(med)
            return A[med]
        else:
            med1=math.floor((N-1)/2)
            med1=int(med1)
            med2=N/2
            med2=int(med2)
            sum=A[med1] + A[med2]
            sum=int(sum)
            med=int(sum/2)
            return med

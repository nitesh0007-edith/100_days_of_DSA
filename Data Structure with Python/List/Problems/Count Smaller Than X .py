def smallerThanX(self,arr,n,x):
        #return required ans
        #code here
        count=0
        for i in arr:
            if(i<x):
                count=count+1
        return count

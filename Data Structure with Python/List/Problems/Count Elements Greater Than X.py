def greaterThanX(self,arr,n,x):
        #return required result
        count=0
        for i in arr:
            if i>x:
                count+=1
        return count

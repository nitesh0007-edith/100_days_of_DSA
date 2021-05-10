def immediateGreater(arr,n,x):
        #return required ans
        if max(arr) < x:
            return -1
        immgre=max(arr)
        for i in arr:
            if i > x:
                immgre=min(immgre,i)
        return immgre

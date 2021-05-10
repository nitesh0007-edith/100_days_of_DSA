def immediateSmaller(arr,n,x):
        immediatesmaller=-1
        for i in arr:
            if i < x:
                immediatesmaller=max(immediatesmaller,i)
        return immediatesmaller

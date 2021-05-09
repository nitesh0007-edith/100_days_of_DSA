def deleteFromArray(arr,n,idx):
    #code here
    for i in range(idx+1,n):
        arr[i-1]=arr[i]
    arr[n-1]=0

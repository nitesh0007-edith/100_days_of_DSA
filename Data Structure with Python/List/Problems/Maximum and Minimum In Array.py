def maximumElement(arr,n):
    #return required result
    
    #code here
    if n<=1:
        return arr[0]
    else:
        max=arr[0]
        for i in range(1,n):
            if arr[i] > max:
                max=arr[i]
        return max


def minimumElement(arr,n):
    #return required result
    if n<=1:
        return arr[0]
    else:
        min=arr[0]
        for i in range(1,n):
            if arr[i] < min:
                min=arr[i]
        return min

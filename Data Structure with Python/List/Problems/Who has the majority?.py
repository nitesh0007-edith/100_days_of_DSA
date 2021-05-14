#who has the majority?
def majorityWins(arr, n, x, y):
        # code here
        xcount=0
        ycount=0
        for i in arr:
            if i == x:
                xcount+=1
            elif i == y:
                ycount+=1
        if xcount > ycount:
            return x
        elif xcount==ycount:
            return min(x,y)
        else:
            return y

count = 0
j = 100
ratio = float(count*100)//j
ans = 0

while True:
    if(float(count*100)//j>ratio):
        ratio = float(count*100)//j
        ans = count

    if ((count))>=10**9:
        break
    a = str(j)
    first = 0
    flag = False
    high = len(a)-1
    while first<high:
        if a[first]<a[first+1] :
            first += 1
        elif a[high]<a[high-1]:
            high -= 1
        else:
            break
    if first == high and first != 0 and high != len(a)-1:
        flag = True
        count += 1
        # print(a,count,j,count//j)
    # print(a)
    if flag == False:
        first = 0
        high = len(a)-1
        while first<high:
            if a[first]>a[first+1]:
                first += 1
            elif a[high]>a[high-1]:
                high -= 1
            else:
                break
        if first == high and first != 0 and high != len(a)-1:
            # print(a,count,j,count//j)
            count += 1
        
        # print(count,float((count*100)//j))
    j += 1
print(ratio,ans)
# print(count,j)
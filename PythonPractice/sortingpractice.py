
answer = True
i = 0
sort = ['j']
while 'q' != sort[len(sort)-1]:
    sort.append(input("Enter array or q to quit"))
    print(sort[len(sort)-1])

del sort[0], sort[len(sort)-1]

#sort = [['B', 11],['A', 10],['B', 1],['A', 5]]#this part works
n = len(sort)
swap =1
while swap:
    swap = 0
    for i in range(n-1):
        if(sort[i][0]>sort[i+1][0]):
            temp = sort[i]
            sort[i] = sort[i+1]
            sort[i+1]= temp
            swap += 1
print(sort)
#sorted by a and b
startb = 0
while sort[startb][0] == 'A':
    startb+=1

swap = 1
while swap:
    swap = 0
    for i in range(startb-1):
        if(sort[i][1]>sort[i+1][1]):
            temp = sort[i]
            sort[i] = sort[i+1]
            sort[i+1]= temp
            swap += 1
    for i in range(startb, n-1):
        if(sort[i][1]>sort[i+1][1]):
            temp = sort[i]
            sort[i] = sort[i+1]
            sort[i+1]= temp
            swap += 1
print(sort)
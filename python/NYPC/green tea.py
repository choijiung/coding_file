peoplenum = 3
people1 = 2
people2 = 3
people3 = 1
cangive = [1, 2, 4]
peoplelist = [people1, people2, people3]

max = max(peoplelist)
maxindex = peoplelist.index(max)

min = min(peoplelist)
minindex = peoplelist.index(min)

listmiddle = [people1, people2, people3]
del listmiddle[maxindex]
minindex = listmiddle.index(min)
del listmiddle[minindex]
mdd = listmiddle[0]

peoplemul1 = max - min
peoplemul2 =  max - mdd
peoplemul3 = mdd - min

while people1 != people2 != people3:
    if peoplemul1 > cangive[0]:
        if peoplemul1 > cangive[1]:
            if peoplemul1 == cangive[2]:
                min = min + cangive[2]
            else:
                min = min + cangive[1]
        else:
            min = min + cangive[1]
    else:
        min = min + cangive[0]
    mdd = mdd + cangive[1]
print(max)
print(min)
print(mdd)

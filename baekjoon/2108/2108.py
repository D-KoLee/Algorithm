import sys
from collections import Counter
n=int(sys.stdin.readline())
number=[]

for i in range(n):
    number.append(int(sys.stdin.readline()))

#산술평균
print(round(sum(number)/n))  #반올림함수 round

#중앙값
number.sort()   #오름차순
print(number[n//2])

#최빈값
a=Counter(number).most_common()
print(a)

#범위
print(max(number)-min(number))
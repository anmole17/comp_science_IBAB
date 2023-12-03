# sort into ascending
for i in range(0, len(numarr)):
    for j in range(i+1, len(numarr)):
        if numarr[i] >= numarr[j]:
            temp = numarr[i]
            numarr[i] = numarr[j]
            numarr[j] = temp
# find mean
sum=0
for i in numarr:
	sum=sum+i
mean= sum/len(numarr)

# find mode
dict={}
for i in numarr:
	if i in dict:
		dict[i]=dict[i]+1
	else:
		dict[i]=1

mode=""
cnt=0;
for x in dict:
	if dict[x]>cnt:
		mode=x
		cnt=dict[x] 

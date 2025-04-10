d1={"A":10,"B":20,"C":30}
d2={"A":60,"B":70,"C":80}
d3={}

for key in d1:
    d3[key]={d1[key]+d2[key]}
print(d3)

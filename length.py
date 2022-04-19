str=input("enter a string")
v=0
s=0
c=0
d=0

for char in str:
    if char in "[@_!#$%^&*()<>?/\|}{~:]":
        s=s+1
    

    elif char in "aeiouAEIOU":
        v=v+1
 
    elif char in "1234567890":
        d=d+1
         
    else:
        c=c+1
     
print("number of special character:",s)      
print("number of vowels:",v)          
print("number of digit:",d)
print("number of consonants:",c)

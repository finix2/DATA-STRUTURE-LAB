num = int(input("Enter any number : "))

for i in range(2,num):
    if (num % i) == 0:
        print(num, "is NOT a prime number")
        break
else:
    print(num, "is a PRIME number")

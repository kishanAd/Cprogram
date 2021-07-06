cache={}
def fibonacci(num):
    if num in cache:
        return cache[num]
    if num==1:
        return 1
    elif num==2:
        return 2

    elif num>2:
        result= fibonacci(num-1)+fibonacci(num-2)
    cache[num]=result
    return result
count=0
for i in range(1,11):

    print(i,fibonacci(i))

print(count)

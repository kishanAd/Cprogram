def checkarmstrong(num):
    a=num
    y=len(str(num))
    sum_of_number=0
    while (num>0):
        sum_of_number+=(num%10)**y
        num=num//10
    print(sum_of_number)
    if a==sum_of_number:
        print(a,"is a armstrong")
    else:
        print(a,"is not an armstrong number")
checkarmstrong(153)
checkarmstrong(1634)
checkarmstrong(1758)
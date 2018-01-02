while True:
    print('enter num then operater then num\n + addition\n -subtraction\n division\n * multiplication\nq to quit\n')
    var1 = input('enter num\n')
    if var1 == "q":
        break
    oper = input('enter operand\n')
    var2 = input('enter num\n')
    
    var1 = int(var1)
    var2 = int(var2)
    if oper == '+':
        print(var1+var2)
    elif oper == '-':
        print(var1-var2)
    elif oper == '*':
        print(var1*var2)
    elif oper == '/':
        print(var1/var2)

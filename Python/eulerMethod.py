from sympy import *

def euler(function, initial_x, initial_y, final_x, n, accuracy):
    def f_x(x, y):
        f_x = eval(function)
        return f_x

    x = initial_x
    y = initial_y

    h = round((final_x - initial_x) / n, accuracy + 1)

    while true:
        old_x = x
        old_y = y
        y = round(old_y + h*f_x(old_x, old_y), accuracy + 1)

        x = round(x + h, accuracy + 1)
        if(x == final_x):
            break

    print(f"The required solution is {y}")



function = str(input("Enter the function f'(x, y): "))
accuracy = int(input("Enter the accuracy of the decimal digits: ")) 
n = int(input("Enter the number of subintervals: ")) 
initial_x = float(input("Enter the initial approximation of x: "))
initial_y = float(input("Enter the initial approximation of y: "))
final_x = float(input("Enter the final approximation of x: "))

euler(function, initial_x, initial_y, final_x, n, accuracy)

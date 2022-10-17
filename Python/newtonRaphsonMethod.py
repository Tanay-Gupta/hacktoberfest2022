from sympy import *
from prettytable import PrettyTable
import math

def newtonRaphsonSingle(function, derivativeF_wrt_x, a, accuracy):
    def f(x):
        f = eval(function)
        return f

    def F_x(x):
        F_x = eval(derivativeF_wrt_x)
        return F_x

    n = 0

    tolerance = 0.5 / (10**(accuracy))
    print(f"The tolerance is {tolerance}.")

    table = PrettyTable(["No.", "a", "x"])
    
    while true:
        f_a = f(a)
        function_a = round(f_a, accuracy + 1)

        i = a - (function_a/F_x(a))
        x = round(i, accuracy + 1)

        f_x = f(x)
        function_x = round(f_x, accuracy + 1)
        n = n + 1

        table.add_row([n, a, x])
        if(function_x < tolerance):
            break

        a = x

    print(table)
    print(f"The required root is {x} after {n} iterations.")


functionF = str(input("Enter the function f(x) for x: "))
accuracy = int(input("Enter the accuracy of the decimal digits: "))
a = float(input("Enter the first initial approximation of x: "))

x = symbols('x')
derivativeF_wrt_x = str(diff(functionF, x)) # = ∂F/∂x
newtonRaphsonSingle(functionF, derivativeF_wrt_x, a, accuracy)

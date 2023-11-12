import math
import cmath

a = float(input("Digite o valor de a: "))
b = float(input("Digite o valor de b: "))
c = float(input("Digite o valor de c: "))
print("------------------------------------")

delta = b**2 - 4*a*c  # Cálculo de delta

print(f'Esse é delta: {delta}')
print("------------------------------------")

if delta >= 0:
    xl = (-b + (delta**(1/2))) / (2*a)
    xll = (-b - (delta**(1/2))) / (2*a)
    
    print(f'Esse é xl: {xl}')
    print(f'Esse é xll: {xll}')
    print("------------------------------------")
else:
    # Cálculo de raízes complexas usando cmath
    xl = (-b + cmath.sqrt(delta)) / (2*a)
    xll = (-b - cmath.sqrt(delta)) / (2*a)
    
    print(f'Esse é xl: {xl}')
    print(f'Esse é xll: {xll}')
    print("------------------------------------")

xv = (-b/(2*a))
yv = (-delta/(4*a))

print(f'Esse é o x do vertice {xv}')
print(f'Esse é o y do vertice {yv}')
print("-------------------------------------")
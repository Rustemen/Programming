a = int(input("Введите число 1: "))
b = int(input("Введите число 2: "))

# Обмен без дополнительной переменной
a, b = b, a

print("a =",a)
print("b =",b)

# Обмен с дополнительной переменной
temp = a
a = b
b = temp

print("a = ", a)
print("b = ", b)

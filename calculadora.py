# -*- coding: utf-8 -*-
"""Calculadora.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1XCY28UYQWG0I2hXyU2UrCBw-mwm9jMBN
"""

operacion = input("Introduce la operacion que desea realizar: (Suma, Resta, Multiplicacion, Division, Porcentaje)")

resultado = 0

num1 = float(input("Introduce el primer numero: "))
num2 = float(input("Introduce el segundo numero: "))

if operacion == "Suma":
  resultado = num1 + num2
elif operacion == "Resta":
  resultado = num1 - num2
elif operacion == "Multiplicacion":
  resultado = num1 * num2
elif operacion == "Division":
  resultado = num1 / num2
elif operacion == "Porcentaje":
  resultado = num2 * num1 /100



print("El resultado es ",resultado)
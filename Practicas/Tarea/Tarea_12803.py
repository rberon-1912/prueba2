#leer una serie de numeros terminada en 0 e imprimir el promedio
i = True
sum_numeros = 0
cantidad_num = 1
promedio_num = 0
while i :
    numeros = int(input('ingresa numeros, si quieres que termine pon un 0 '))
    if numeros == 0 and cantidad_num == 1:
        promedio_num = sum_numeros / cantidad_num
        print(f'este es el promedio de los numeros ingresados {promedio_num}')
        i = False
    elif numeros == 0:
        cantidad_num = cantidad_num - 1
        promedio_num = sum_numeros / cantidad_num
        print(f'este es el promedio de los numeros ingresados {promedio_num}')
        i = False
    else: 
        sum_numeros = sum_numeros + numeros 
        cantidad_num = cantidad_num +1
  
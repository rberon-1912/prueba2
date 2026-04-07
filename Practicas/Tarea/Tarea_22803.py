
numeros_pares = []
numeros_impares = []
numeros_0 = []
i = True
while i:
    serie_num = []
    numeros = int(input('ingrese numeros, para terminar la serie escriba -1 '))
    if numeros != -1:
        
       serie_num.append(numeros)
       for num in serie_num:
            if num % 2 == 0 and num != 0:
                numeros_pares.append(num)
            elif num == 0:
                numeros_0.append(num)
            else:
                numeros_impares.append(num)
    else:
        i= False
        
cantidad_par = len(numeros_pares)
cantidad_0 = len(numeros_0)
cantidad_impar = len(numeros_impares)
print(f'la cantidad de pares= {cantidad_par} la cantidad de impares= {cantidad_impar} la cantidad de 0s = {cantidad_0}')
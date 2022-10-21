def busca(num, lista):
   
    l = 0
    r = len(lista) - 1

    achou = False
    while l <= r:
        m = (l + r) // 2
        if lista[m] == num:
            achou = True
            break
        elif lista[m] > num:
            r = m - 1
        elif lista[m] < num:
            l = m + 1
    return achou


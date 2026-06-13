a = (col1t, col2t, col3t, col4t, col1b, col2b, col3b, col4b, row1l, row2l, row3l, row4l,
        row1r, row2r, row3r, row4r)

for i in range(len(a)):
    if i//4 == 0:
        numero_entrada = a[i]
        col  = matriz[i][0]
        count_inc = 0;
        pivot = -1
        for index_columna in range(1,len(col)):
            if pivot == -1:
                pivot = col[0] 
            if  pivot < col[index_columna]:
                count_inc++
                pivot = col[index_columna]
        if count_inc = numero_entrada - 1:
            continue
        else:
            return False
            




         
    elif i//4 == 1;
        compruebo por abajo
    elif i//4 == 2
        compruebo izquierda
    elif i//4 == 3
        compruebo derecha

    return True

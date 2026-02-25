# Representacion grafica de `int** matriz`

Ejemplo visual para una matriz dinamica con `F = 3` filas y `C = 4` columnas.

```mermaid
flowchart TB
    A["matriz (int**)"]

    A --> R0["matriz[0] (int*)"]
    A --> R1["matriz[1] (int*)"]
    A --> R2["matriz[2] (int*)"]

    R0 --> V00["matriz[0][0]"]
    R0 --> V01["matriz[0][1]"]
    R0 --> V02["matriz[0][2]"]
    R0 --> V03["matriz[0][3]"]

    R1 --> V10["matriz[1][0]"]
    R1 --> V11["matriz[1][1]"]
    R1 --> V12["matriz[1][2]"]
    R1 --> V13["matriz[1][3]"]

    R2 --> V20["matriz[2][0]"]
    R2 --> V21["matriz[2][1]"]
    R2 --> V22["matriz[2][2]"]
    R2 --> V23["matriz[2][3]"]
```

`new int*[filas]` crea el arreglo de punteros a filas.  
`new int[columnas]` dentro del `for` crea las columnas de cada fila.

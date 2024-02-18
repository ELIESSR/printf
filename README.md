
Estos son los identificadores de formato que necesito recodificar:

| Identificador | Tipo                            |
|---------------|---------------------------------|
| %             | Tipo                            |
| %c            | Caracter                        |
| %s            | Cadena de caracteres           |
| %p            | Puntero                         |
| %d            | Entero decimal firmado         |
| %i            | Entero                          |
| %u            | Entero sin signo               |
| %x            | Entero hexadecimal (minúsculas)|
| %X            | Entero hexadecimal (mayúsculas)|
| %%            | Solo el %                       |


Y estos son los indicadores de Flags:

| Flags | Descripción                                                                   |
|---------|------------------------------------------------------------------------------|
| ?       | Indeterminado (no está claro qué hace esta bandera)                         |
| num     | Número entre % y el identificador que indica la anchura mínima del campo    |
| '-'     | Justificar a la izquierda                                                    |
| '0'     | Rellenar el campo con ceros en lugar de espacios en blanco                   |
| '.'     | Precisión                                                                     |
| '*'     | Indica que la anchura máxima o mínima del campo se pasará como parámetro    |

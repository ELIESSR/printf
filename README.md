ft_printf
---
Introducción
---
La versatilidad de la función printf en C representa un gran ejercicio de programación para nosotros. Este proyecto tiene una dificultad moderada y te permitirá descubrir las funciones variádicas en C. La clave para un ft_printf exitoso es un código bien estructurado y fácilmente extensible.

La función printf() es una función de salida de formato en C y otros lenguajes de programación que admite una amplia variedad de opciones de formateo para imprimir datos en la consola o en otros flujos de salida. Es una función de la biblioteca estándar de C, que se encuentra en la cabecera <stdio.h>.La función printf() es una función de salida de formato en C y otros lenguajes de programación que admite una amplia variedad de opciones de formateo para imprimir datos en la consola o en otros flujos de salida. Es una función de la biblioteca estándar de C, que se encuentra en la cabecera <stdio.h>.

En primer lugar, debemos entender el subject y las banderas de printf. Para ello, es esencial comprender los identificadores de formato y las banderas asociadas con la función printf en C. Estos identificadores y banderas nos permiten controlar el formato y la presentación de la salida de printf de manera precisa.

---

**Identificadores de Formato**

Los identificadores de formato son caracteres especiales que indican a la función printf qué tipo de dato se va a imprimir y cómo debe formatearse. Aquí tienes una lista de los identificadores de formato comunes que necesitamos recodificar:

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

Estos identificadores determinan cómo se formateará y mostrará cada tipo de dato en la salida de printf.

---

**Indicadores de Flags**

Los indicadores de flags son caracteres adicionales que se pueden usar junto con los identificadores de formato para controlar aspectos específicos del formato de salida. Aquí tienes una lista de los indicadores de flags comunes que necesitamos entender:

| Flags | Descripción                                                                   |
|-------|------------------------------------------------------------------------------|
| ?     | Indeterminado (no está claro qué hace esta bandera)                         |
| num   | Número entre % y el identificador que indica la anchura mínima del campo    |
| '-'   | Justificar a la izquierda                                                    |
| '0'   | Rellenar el campo con ceros en lugar de espacios en blanco                   |
| '.'   | Precisión                                                                     |
| '*'   | Indica que la anchura máxima o mínima del campo se pasará como parámetro    |

Estos flags permiten controlar la justificación, el relleno, la precisión y la anchura del campo en la salida de printf.

---

Entender estos identificadores de formato y flags es fundamental para trabajar con printf de manera efectiva y comprender cómo se puede personalizar la salida según las necesidades del proyecto.

---
Continuando con el análisis de las funciones que utilice para llevar a cavo el proyecto que fueron :[`format_specifier()`][formato] y [`ft_printf()`][printf]:

Estas funciones simplifican la función `printf()` en C, ofreciendo una manera más eficiente de imprimir valores formateados en la salida estándar según un formato predefinido.

`format_specifier()` interpreta los especificadores de formato en una cadena y realiza las operaciones necesarias para imprimir el valor correspondiente. Por ejemplo, `%d` imprime un número entero, `%s` imprime una cadena de caracteres, etc. Esta función es utilizada internamente por `ft_printf()` para manejar los especificadores de formato.

Por otro lado, `ft_printf()` es la interfaz principal para imprimir cadenas de caracteres formateadas. Recibe una cadena de formato y los datos a imprimir, identifica los especificadores (marcados por `%`) y llama a `format_specifier()` para imprimir el valor correspondiente.

Es importante destacar que estas funciones utilizan otras funciones auxiliares, como `ft_putchar()`, `ft_putstr()`, `ft_putnbr()`, `ft_putunbr()` y `hexa_re()` para manejar diferentes tipos de formatos.

En resumen, estas funciones proporcionan una manera efectiva y eficiente de imprimir valores formateados en C, lo que resulta útil en aplicaciones de consola y programas donde la presentación de la información es esencial. También se proporciona un conjunto de pruebas para verificar su funcionamiento. Puedes encontrar las pruebas [aquí][main]

[formato] : https://github.com/ELIESSR/printf/blob/master/format_printf.c "Enlace oculto"
[printf] :  https://github.com/ELIESSR/printf/blob/master/ft_printf.c "Enlace oculto"
[main]: https://github.com/ELIESSR/printf/blob/master/main.c "Enlace oculto"

Este proyecto presenta una excelente oportunidad para explorar y comprender las funciones variádicas en C, al mismo tiempo que fomenta la creación de un código bien estructurado y fácilmente extensible.

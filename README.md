Introducción
---
La versatilidad de la función printf en C representa un gran ejercicio de programación para nosotros. Este proyecto tiene una dificultad moderada y te permitirá descubrir las funciones variádicas en C. La clave para un ft_printf exitoso es un código bien estructurado y fácilmente extensible.

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
Continuando con el análisis de las funciones `format_specifier()` y `ft_printf()`:

Estas funciones representan una valiosa simplificación de la función `printf()` en C, ofreciendo un enfoque más eficiente y versátil para imprimir valores formateados en la salida estándar según un formato predefinido.

La función `format_specifier()` desempeña un papel esencial en el proceso de impresión de valores formateados. Su principal función consiste en interpretar los especificadores de formato dentro de una cadena de formato y realizar las operaciones necesarias para imprimir el valor correspondiente. Por ejemplo, si la cadena de formato contiene `%d`, `format_specifier()` imprimirá un número entero; si contiene `%s`, imprimirá una cadena de caracteres. Esta función actúa como un componente interno clave utilizado por `ft_printf()` para manejar cada especificador de formato encontrado en la cadena de formato.

Por otro lado, `ft_printf()` sirve como la interfaz principal para imprimir cadenas de caracteres formateadas. Recibe como argumento una cadena de formato que contiene los especificadores de formato y los datos a imprimir. Al recorrer la cadena de formato, `ft_printf()` identifica los especificadores (marcados por `%`) y llama a `format_specifier()` para procesar e imprimir el valor correspondiente. En situaciones donde no se encuentran especificadores, `ft_printf()` imprime los caracteres de la cadena de formato de manera estándar.

Es importante destacar que estas funciones utilizan otras funciones auxiliares para manejar cada tipo de formato. Por ejemplo, `ft_putchar()` se utiliza para imprimir caracteres individuales, `ft_putstr()` se utiliza para imprimir cadenas de caracteres, `ft_putnbr()` se utiliza para imprimir números enteros, `ft_putunbr()` se utiliza para imprimir números enteros sin signo y `hexa_re()` se utiliza para imprimir números en formato hexadecimal.

En resumen, estas funciones proporcionan una solución efectiva y eficiente para la impresión de valores formateados en C. Su capacidad para interpretar y manejar especificadores de formato ofrece una salida de datos flexible y legible, lo que resulta particularmente útil en aplicaciones de consola y programas donde la presentación adecuada de la información es fundamental. Además, para probar su funcionamiento, se proporciona un conjunto de pruebas. Puedes encontrar el conjunto de pruebas [aquí]([https://www.example.com](https://github.com/ELIESSR/printf/blob/master/main.c)).

Este proyecto presenta una excelente oportunidad para explorar y comprender las funciones variádicas en C, al mismo tiempo que fomenta la creación de un código bien estructurado y fácilmente extensible.

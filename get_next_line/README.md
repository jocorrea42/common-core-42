# get_nex_line
El objetivo de este proyecto es simple: programar una función que devuelva una línea leída de un file descriptor.
### Indice
* [Que es get_next_line?](#que-es-get_next_line)
* [Que utilizamos?](#que-utilizamos)
* [Como funciona?](#como-funciona)
* [Como utilizamos la función?](#como-utilizamos-la-función)

### Que es get_next_line?
get_next_line es un projecto de [42][1] donde creamos una función capaz de leer, linea por linea, un archivo cada vez que
se llame a la funcion.

<b>El prototipo de la función debe ser la siguiente:</b>

```C
char	*get_next_line(int fd)
```

### Que utilizamos?
En nuestro get_next_line tenemos solo las siguentes funciones de librerias externas autorizadas:

| Función  | Descripción														 			|
|-------|-----------------------------------------------------------------------------------|
| malloc | Solicitar un bloque de memoria del tamaño suministrado como parámetro.     													|
| free | Desasigna un bloque de memoria que se había asignado previamente mediante una llamada. 											|
| read |  Lee el contenido del archivo del sistema seleccionado.               									|


### Como funciona?

como he comentado a esta función le envias el file descriptor para leer linea por linea, por ejemplo, si tenemos un archivo
llamado `textoprueba.txt` y tengo el siguiente contenido:  

	linea1  
 	linea2  
  	linea3

Cada vez que llamemos a la función (utilizando el **F**ile**D**escriptor de `textoprueba.txt`)imprimirá una linea:
```C
printf(%s,get_next_line(int fd);
printf(%s,get_next_line(int fd);
printf(%s,get_next_line(int fd);
printf(%s,get_next_line(int fd);
```
Output:

	linea1  //lee la primera linea
	linea2  //lee la segunda linea
	linea3  //lee la tercera linea
	(null)  //devuelve NULL por que ha llegado al final del archivo (EOF)

### Como utilizamos la función?

Para utilizarlo primero debes saber la ruta de la funcion y utilizar el archivo .h de esta función. Luego añadirlo en el
encabezado de tu programa:

```C
#include "./<carpeta_de_get_next_line>/get_next_line.h"
```

y eso ya estaría listo para usar!
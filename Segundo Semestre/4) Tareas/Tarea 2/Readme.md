# Tarea N°2

<div align="center" id="Sistema de Inventario">
</div>

<p align="center">
  <a href="" target="_blank" rel="noreferrer"><img src="https://github.com/Not-Minimal/Algoritmos/blob/main/Segundo%20Semestre/4)%20Tareas/Tarea%202/Portada.png" alt="my banner"></a>
</p>

## Algoritmos de programación

La nueva división de tecnología de la empresa Akme ha planificado abrir su primera tienda
especializada, por lo que solicita al departamento TI una aplicación para la gestión y control de su
stock de productos que cumpla con los siguientes requerimientos:

- Debe contar con un login para el acceso del usuario.
- Debe poder agregar un producto, actualizar un producto, listar los productos y eliminar un producto (CRUD).
- Debe poder realizar una búsqueda por la marca del producto.
- Debe contar con un menú para poder realizar las operaciones mencionadas.
- Debe indicar la cantidad de existencias de cada producto.

## Consideraciones

1. Los productos de la empresa son: teclado, mouse, monitor, notebook y pc de escritorio.
2. El pc de escritorio debe estar compuesto por una torre, un mouse, un teclado y un monitor.
3. Debe crear estructuras para almacenar los datos que se indican:
    - Teclado: Identificador, marca, modelo, idioma.
    - Mouse: Identificador, marca, modelo.
    - Monitor: Identificador, marca, modelo, tamaño.
    - Notebook: Identificador, marca, modelo, cantidad de RAM, procesador, tamaño de pantalla.
    - PC de escritorio: Identificador, marca, modelo, cantidad de RAM, procesador, teclado(estructura), mouse(estructura), monitor(estructura).
    - Usuario: Identificador, nombre de usuario, contraseña, nombres, apellido paterno, apellido materno.
4. La búsqueda debe ser mediante una función recursiva.
5. Debe agregar al menos 3 productos precargados de cada tipo.
6. Debe agregar al menos un usuario precargado.

**Sistema Inventario**
### **Login: (Máximo 3 Intentos)**
- Usuario: Admin
- Contraseña: 123
### **Menú**
- Agregar Productos(Si no existe el archivo lo crea)
- Listar Productos(Si no existe el archivo, cierra el programa)
- Actualizar Productos(Si no existe el archivo, cierra el programa)
- Eliminar Productos(Si no existe el archivo, cierra el programa)
- Ver Stock Productos
- Reiniciar Stock(Elimina todo registro(Archivos.txt))
- Buscar por Marca
- Salir
- Default: Ingresar opción válida. 
### **Uso de funciones**
FILE \*nombre: 

Accede al archivo mediante puntero.

Fopen: 

r: Abre un archivo existente para lectura.

w: Crea un nuevo archivo para escritura (si ya existe, se pierden los datos preexistentes).

a: Abre el archivo para añadir datos al final (se conservan datos existentes), o crea el archivo si no existía.

Fclose: 

Cierra el archivo abierto previamente con Fopen 

fflush(stdin): 

Limpiar la basura que se pueda generar.

fprintf: 

Escribe texto en un fichero siguiendo un cierto código de formato.


fread: 

La sintaxis de fread es la siguiente: size\_t fread(void \*ptr, size\_t size, size\_t n, FILE \*stream); 

Aquí ptr es un array donde se van a almacenar los datos que se van a leer. size indica el tamaño de cada elemento del array. n especifica el número de elementos que se van a leer. Stream es un puntero a un fichero que ha tenido que haber sido abierto previamente.

fwrite: 

La sintaxis de fwrite es la siguiente: size\_t fwrite(const void \*ptr, size\_t size, size\_t n, FILE \*stream); 

ptr hace referencia a un array con los datos que se van a escribir al fichero abierto apuntado por stream. size indica el tamaño de cada elemento del array. n especifica el número de elementos que se van a escribir. Stream es un puntero a un fichero que ha tenido que haber sido abierto previamente.

strcpy:

La función strcpy recibe dos parámetros, primero la string donde se va a copiar el contenido, y segundo la string del cual será copiado su contenido. Ahí mostramos la variable nombre, para comprobar que se ha copiado correctamente.

remove: 

Elimina el archivo creado, por lo que ya no es accesible. 

stderr: 

Utilizado para registrar mensajes de error o depuración durante el tiempo de ejecución.

exit(0): 

Cierra el programa.
### **Observaciones**
- El programa se creó usando la función scanf, por lo tanto tener en cuenta que solo toma la primera palabra ingresada en caso de un char 
### **Problemas**
- Variables globales inician en 0 luego de cerrar el programa y dejar estructuras guardadas.
- No se hizo la búsqueda de manera recursiva.


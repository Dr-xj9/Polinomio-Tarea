# Descripción

El programa calcula las raíces reales de un polinomio de grado 2 de la forma: ax<sup>2</sup>+bx+c.

## Funcionamiento del programa

El programa recibe 3 números correspondientes a los coeficientes del polinomio de grado 2 y hace los siguientes pasos:

1. Obtiene el valor del discriminante con la operación: <strong>b<sup>2</sup>- 4ac</strong>.

2. Obtener Raíces reales.
    - Si el valor del discriminante es mayor que 0, hay dos raíces reales distintas. Se obtienen utilizando la fórmula general, aplicando suma y resta <strong>-b+-sqrt(discriminante)/(2a).</strong>
    - Si el discriminante es igual a 0, hay una raíz real y se obtiene con <strong>-b/(2a)</strong> (ya que no importa si hacemos suma o resta de 0).

3. Si el discriminante es menor que 0, no hay raíces reales.

## ¿Cómo usarlo?

Para compilar y ejecutar correctamente el programa, asegúrate de tener los siguientes requisitos:

### Requisitos

- CMake.
- MinGW g++. Si aún no lo tiene, lo puede encontrar en el repositorio:     https://github.com/skeeto/w64devkit/releases Descomprima los archivos en el directorio de su elección.
- Git.

### Importante
Es necesario establecer la ruta donde instaló MinGW (la carpeta ```bin```) en la variable de entorno del sistema ```PATH``` si no lo ha hecho previamente.

Para configurar la variable PATH:
- Busca "Variables de entorno del sistema" en el menú de inicio de Windows.
- En "Variables del sistema", selecciona la variable Path y haz clic en "Editar".

- Agrega la ruta a la carpeta bin de tu instalación de MinGW (por ejemplo, C:\ ..\w64devkit\bin).

Es posible que requiera permisos de administrador.

Por último, asegurese de seleccionar la opción ```add CMake to PATH enviroment variable``` cuando ejecute el instalador de CMake, si no lo has hecho.

### Compilación

1. Abre una consola de linea de comandos en Windows y clone este repositorio con:
```bash
git clone https://github.com/Dr-xj9/Polinomio-Tarea.git
```

2. Crea un directorio para la construcción del programa.
Puedes crearlo usando las siguientes instrucciones.
```bash
mkdir build 
cd build     
```

3. Ejecutar CMake especificando el generador ```MinGW Makefiles```:
```bash
cmake .. -G="MinGW Makefiles"
``` 

4. Ahora puedes compilar el proyecto:
```bash
cmake --build .
```

### Ejecución
Para ejecutar el programa (en el mismo directorio ```build```) tendrás el ejecutable ```findroots.exe```,que usarás desde terminal con los tres coeficientes del polinomio como argumentos.
```bash
findroots.exe a b c
```
Donde a, b y c son los coeficientes del polinomio de grado 2.
La salida mostrará algo como esto:
```bash
findroots.exe 1 -5 6
{3, 2}
```
## Posibles errores
Si al ejecutar ```cmake .. -G="MinGW Makefiles"``` se muestra un error como el siguiente:
```bash
CMake Error: CMake was unable to find a build program corresponding to "MinGW Makefiles".  CMAKE_MAKE_PROGRAM is not set.  You probably need to select a different build tool.
CMake Error: CMAKE_C_COMPILER not set, after EnableLanguage
CMake Error: CMAKE_CXX_COMPILER not set, after EnableLanguage
-- Configuring incomplete, errors occurred!
```
Esto puede deberse a que no se ha configurado la ruta a la carpeta bin de MinGW en la variable de entorno del sistema PATH. Es necesario configurarla antes de ejecutar CMake. Puedes cerrar la terminal y volver a entrar en el directorio correspondiente una vez que lo hayas configurado.

Otro posible error es como el siguiente:
```bash
stod: undefined
```
Esto se debe a diferencias del compilador o sus versiones por lo que es necesario incluir explicitamente la librería string al código.
```bash
#include<string>
```
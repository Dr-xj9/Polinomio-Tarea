# Descripción

El programa calcula las raíces reales de un polinomio de grado 2 de la forma: ax<sup>2</sup>+bx+c.

## Funcionamiento del programa

El programa recibe 3 números correspondientes a los coeficientes del polinomio de grado 2 y hace los siguientes pasos:

1. Obtiene el valor del discriminante con la operación: <strong>b<sup>2</sup>- 4ac</strong>.

2. Obtener Raíces reales.
    
    - Si el valor del discriminante es mayor que 0, hay dos raíces reales distintas. Se obtienen utilizando la fórmula general, aplicando suma y resta.
    - Si el discriminante es igual a 0, hay una raíz real.

3. Si el discriminante es menor que 0, no hay raíces reales.

## ¿Cómo usarlo?

Para compilar y ejecutar correctamente el programa se necesita lo siguiente:

### Requisitos

- CMake instalado y configurado en el sistema.
- MinGW g++. Si aún no lo tiene lo puede encontrar en el repositorio:     https://github.com/skeeto/w64devkit/releases
- Git (si aún no lo tiene).

### Importante
- Es necesario establecer la ruta donde instaló MinGW (la carpeta ```bin```) en la variable de entorno del sistema ```PATH``` si no lo ha hecho previamente. Para hacer esto busque en Windows "variables de entorno del sistema", y de click en la opción variables de entorno.
- Además seleccionar la opción ```add CMake to PATH enviroment variable``` de CMake cuando ejecute el instalador de CMake, si no lo ha hecho.

### Compilación

1. Abra una consola de linea de comandos en Windows y clone este repositorio con:
```bash
git clone https://github.com/Dr-xj9/Polinomio-Tarea.git
```

2. Crea un directorio para la construcción del programa.
puede crearlo usando las siguientes instrucciones.
```bash
mkdir build 
cd build     
```

3. Ejecutar CMake especificando el generador ```MinGW Makefiles```:
```bash
cmake .. -G="MinGW Makefiles"
``` 

4. Ahora puede compilar el proyecto:
```bash
cmake --build .
```

### Ejecución
Para ejecutar el programa (en el mismo directorio ```build```) tendrás el ejecutable ```findroots.exe```, mismo que usarás desde línea de comando con los tres coeficientes del polinomio como argumentos.
```bash
findroots.exe a b c
```
Donde a, b y c son los coeficientes del polinomio de grado 2.
La salida mostrará algo como esto:
```bash
findroots.exe 1 -5 6
{3, 2}
```
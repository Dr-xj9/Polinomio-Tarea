# Descripción

El programa calcula las raíces reales de un polinomio de grado 2 de la forma: ax<sup>2</sup>+bx+c.

## Funcionamiento del programa

El programa recibe 3 números correspondientes a los coeficientes del polinomio de grado 2 y hace los siguientes pasos:

1. Obtiene el valor del discriminante con la operación: <strong>b<sup>2</sup>- 4ac</strong>.

2. Obtener Raíces reales.
    
    - Si el valor del discriminante es mayor que 0, hay dos raíces reales distintas. Se obtienen utilizando la fórmula general, aplicando suma y resta.
    -  Si el discriminante es igual a 0, hay una raíz real.

3. Si el discriminante es menor que 0, no hay raíces reales.

## ¿Cómo usarlo?

Para compilar y ejecutar correctamente el programa se necesita lo siguiente:

### Requisitos

- CMake instalado y configurado en el sistema.
- Compilador de C++ (MinGW g++ o MSVS)

### Importante
Es necesario establecer la ruta donde instaló el compilador y la ruta de CMake en la variable del sistema ```PATH``` si no lo ha hecho previamente.

### Compilación

1. Clonar este repositorio.

2. Crea un directorio para la construcción del programa.
puede crearlo usando una linea de comando con la siguiente instrucción.
```bash
mkdir build  #Crear el directorio
cd build     #Cambiar de directorio
```

3. Ejecutar CMake para generar los archivos de construcción:

Si tiene mas de un compilador puede ser necesario especificarlo al ejecutar CMake, para esto usamos la opción ```-G```, donde especifica el generador para compilar el proyecto.

- Si usa el compilador MinGW g++:
```bash
cmake .. -G = "MinGW Makefiles"
```

- Si usa el compilador Microsoft Visual Studio:
```bash
cmake .. -G = "Visual Studio 16 2019"
```

4. Compila el proyecto
```bash
cmake --build .
```

### Ejecución
Para ejecutar el programa (en el mismo directorio ```build```) tendrás el ejecutable ```findroots.exe```, mismo que usarás desde línea de comando con los tres coeficientes del polinomio como argumentos.
```bash
findroots.exe a b c
```
Donde a, b y c son los coeficientes del polinomio de grado 2.


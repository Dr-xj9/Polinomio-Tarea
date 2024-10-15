#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(double a, double b, double c) {
    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        double r1 = (-b + sqrt(discriminante)) / (2 * a);
        double r2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "{" << r1 << ", " << r2 << "}" << endl;
    } 
	else if (discriminante == 0) {
        double r1 = -b / (2 * a);
        cout << "{" << r1 << "}" << endl;
    } 
	else {
        cout << "{}" << endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Por favor ingresa 3 numeros como argumentos ... " << endl;
        return 1;
    }
    double a = stod(argv[1]);
    double b = stod(argv[2]);
    double c = stod(argv[3]);

    calcularRaices(a, b, c);
    return 0;
}

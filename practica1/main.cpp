#include <iostream>
using namespace std;

int ejercicio_1 (){
    int A, B;
    // Solicitar al usuario que ingrese los números A y B
    cout << "Ingrese el numero A: "<<endl;
    cin >> A;
    cout << "Ingrese el numero B: "<<endl;
    cin >> B;
    // Calcular el residuo de la división A/B
    int residuo = A % B;
    // Imprimir el resultado
    cout << "El residuo de la division " << A << "/" << B << " es: " << residuo << endl;
    return 0;
}
int ejercicio_3() {
    int A, B;
    // Solicitar al usuario que ingrese los números A y B
    cout << "Ingrese el numero A: ";
    cin >> A;
    cout << "Ingrese el numero B: ";
    cin >> B;
    // Determinar el mayor de los dos números
    int mayor;
    if (A > B) {
        mayor = A;
    } else {
        mayor = B;
    }
    // Imprimir el resultado
    cout << "El mayor es " << mayor << endl;
    return 0;
}
int ejercicio_5() {
    int A, B;
    cout << "Ingrese el numero A: ";
    cin >> A;
    cout << "Ingrese el numero B: ";
    cin >> B;
    int resultado = A / B;
    if (A % B * 2 >= B) {
        resultado += 1;
    }
    cout << A << "/" << B << "=" << resultado << endl;
    return 0;
}
int ejercicio_7() {
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;
    int suma = 0;
    for (int i = 0; i <= N; ++i) {
        suma += i;
    }
    cout << "La sumatoria desde 0 hasta " << N << " es: " << suma << endl;
    return 0;
}
int ejercicio_9() {
    double N;
    const double PI = 3.1416;
    cout << "Ingrese el radio del circulo (N): ";
    cin >> N;
    double perimetro = 2 * PI * N;
    double area = PI * N * N;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;
    return 0;
}
int ejercicio_11() {
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;
    cout << "Tabla de multiplicar de " << N << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << N << " x " << i << " = " << N * i << endl;
    }
    return 0;
}
int ejercicio_13() {
    //ejercicio 13
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;
    cout << "Los divisores de " << N << " son:" << endl;
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
int ejercicio_15() {
    // ejercicio 15
    int numero;
    int suma = 0;
    cout << "Ingrese numeros continuamente. Ingrese 0 para terminar:" << endl;
    do {
        cout << "Ingrese un numero: ";
        cin >> numero;
        suma += numero;
    } while (numero != 0);
    cout << "El resultado de la sumatoria es: " << suma <<endl;
    return 0;
}
int ejercicio_17() {
    //ejercicio 17
    int numero;
    int mayor = -999999999; // toca que sea muy grande
    cout << "Ingrese numeros continuamente. Ingrese 0 para terminar:" << endl;
    do {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero > mayor && numero != 0) {
            mayor = numero;
        }
    } while (numero != 0);
    if (mayor != -999999999) {
        cout << "El numero mayor fue: " << mayor << endl;
    } else {
        cout << "No se ingresaron números." << endl;
    }
    return 0;
}
int ejercicio_19() {
    //ejercicio 19
    int N;
    bool es_primo = true;
    cout << "Ingrese un número N: ";
    cin >> N;
    if (N <= 1) {
        es_primo = false;
    } else {
        //Si en algún momento se encuentra un divisor de N, un número que divide a N sin dejar residuo
        for (int i = 2; i * i <= N; ++i) {
            if (N % i == 0) {
                es_primo = false;
                break;
            }
        }
    }
    if (es_primo) {
        cout << N << " es un número primo." << endl;
    } else {
        cout << N << " no es un número primo." << endl;
    }
    return 0;
}
int main()
{
    //ejercicio_1();
    //ejercicio_3();
    //ejercicio_5();
    //ejercicio_7();
    //ejercicio_9();
    //ejercicio_11();
    //ejercicio_13();
    //ejercicio_15();
    //ejercicio_17();
    ejercicio_19();
    return 0;
}

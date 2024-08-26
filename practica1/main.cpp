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
    cout << "Ingrese un numero N: ";
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
        cout << N << " es un numero primo." << endl;
    } else {
        cout << N << " no es un numero primo." << endl;
    }
    return 0;
}

int ejercicio_21() {
    char C;
    cout << "Ingrese un caracter: ";
    cin >> C;
    if ((C >= 'a' && C <= 'z') || (C >= 'A' && C <= 'Z')) { // Verificar si es una letra
        if (C >= 'a' && C <= 'z') {
            cout << "Letra convertida: " << (char)(C - 'a' + 'A') << endl; // Convertir a mayúscula
        } else {
            cout << "Letra convertida: " << (char)(C - 'A' + 'a') <<endl; // Convertir a minúscula
        }
    } else {
        cout << "El caracter ingresado no es una letra." << endl;
    }
    return 0;
}
int ejercicio_23() {
    int A, B;
    //ejercicio 23
    cout << "Ingrese dos numeros A y B: ";
    cin >> A >> B;
    int maximo, minimo;
    if (A > B) {
        maximo = A;
        minimo = B;
    } else {
        maximo = B;
        minimo = A;
    }
    int i = maximo;
    while (true) {
        if (i % minimo == 0) { // Verifica si i es divisible por el mínimo
            cout << "El MCM de " << A << " y " << B << " es: " << i << endl;
            break;
        }
        i += maximo; // Incrementa i por el máximo, ya que el MCM es un múltiplo del máximo
    }
    return 0;
}

int ejercicio_25() {
    //ejercicio 25
    int N;
    int contador = 0;
    cout << "Ingrese un numero N: ";
    cin >> N;
    while (N != 0) {
        N = N / 10; // Dividir el número por 10 para eliminar el último dígito
        contador++;
    }
    cout << "La cantidad de digitos de N es: " << contador <<endl;
    return 0;
}
int ejercicio_27() {
    //ejercicio 27
    char operador;
    double num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    double resultado;
    // Realizar la operación según el operador ingresado
    switch (operador) {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            resultado = num1 / num2;
        } else {
            cout << "Error: No se puede dividir por cero." << endl;
            return 1; // Salir del programa con código de error
        }
        break;
    default:
        cout << "Operador no valido." <<endl;
        return 1; // Salir del programa con código de error
    }
    // Imprimir el resultado de la operación
    cout << num1 << operador << num2 << "=" << resultado <<endl;
    return 0;
}

int ejercicio_29() {
    //ejercicio 29
    cout << "Piensa en un numero entre 0 y 100." <<endl;
    cout << "Cuando estes listo, ingresa uno de los siguientes simbolos:" <<endl;
    cout << "   '>' si el numero que has pensado es mayor al que el programa te muestra." <<endl;
    cout << "   '<' si el numero que has pensado es menor al que el programa te muestra." << endl;
    cout << "   '=' si el numero que has pensado es igual al que el programa te muestra." << endl;
    cout << "Presiona Enter despues de ingresar el simbolo." << endl;

    int min = 0;
    int max = 100;
    int guess;
    char symbol;
    while (true) {
        guess = (min + max) / 2;
        cout << " Es " << guess << " tu numero? Ingresa '>', '<' o '=': ";
        cin >> symbol;
        if (symbol == '>') {
            min = guess + 1;
        } else if (symbol == '<') {
            max = guess - 1;
        } else if (symbol == '=') {
            cout << "He adivinado tu numero! Es " << guess << "." << endl;
            break;
        } else {
            cout << "Por favor, ingresa un simbolo valido ('>', '<' o '=')." <<endl;
        }
    }
    return 0;
}
int problema_1() {
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    // Convertir a minúscula si es mayúscula
    if (caracter >= 'A' && caracter <= 'Z') {
        caracter += 'a' - 'A';
    }
    // Evaluar si es una letra
    if ((caracter >= 'a' && caracter <= 'z')) {
        // Evaluar si es una vocal
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            cout << caracter << " es una vocal." << endl;
        } else {
            cout << caracter << " es una letra." << endl;
        }
    } else {
        cout << "no es una letra  o vocal." << endl;
    }
    return 0;
}

int problema_3() {
    //problema 3
    int mes, dia;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el dia: ";
    cin >> dia;
    // Verificar si el mes es válido
    if(mes<1|| mes >= 13){
        cout << mes << " es un mes invalido." << endl;
        return 0;
    }
    // Verificar si el día es válido para el mes dado
    bool dia_valido;
    if (mes == 2) {
        // Febrero tiene 28 días en un año no bisiesto
        dia_valido = (dia >= 1 && dia <= 28);
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        // Abril, Junio, Septiembre, Noviembre tienen 30 días
        dia_valido = (dia >= 1 && dia <= 30);
    } else {
        // Los demás meses tienen 31 días
        dia_valido = (dia >= 1 && dia <= 31);
    }
    // Si el día no es válido, imprimir mensaje y terminar el programa
    if (!dia_valido && mes!=2) {
        cout << dia << "/" << mes << " es una fecha invalida." << endl;
        return 0;
    }
    // Si el día es 29 de febrero, verificar si es válido en un año bisiesto
    if (mes == 2 && dia == 29) {
        cout << dia << "/" << mes << " es valida en ";
        // Verificar si el año actual (2024) es bisiesto
        bool es_bisiesto = ((2024 % 4 == 0 && 2024 % 100 != 0) || (2024 % 400 == 0));
        if (es_bisiesto) {
            cout << "bisiesto." << endl;
        } else {
            cout << "posiblemente bisiesto." << endl;
        }
    } else {
        // Si no es 29 de febrero, simplemente imprimir que es una fecha válida
        cout << dia << "/" << mes << " es una fecha valida." << endl;
    }

    return 0;
}

int problema_5() {
    //problema 5
    int tamano;
    do {
        cout << "Ingrese un numero impar para el tamano del patron: ";
        cin >> tamano;
    } while (tamano % 2 == 0);
    int mitad = tamano / 2 + 1; // Mitad del patrón
    // la parte superior del patrón
    for (int i = 1; i <= mitad; ++i) {
        // Imprimir espacios en blanco
        for (int j = 1; j <= mitad - i; ++j) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    // la parte inferior
    for (int i = mitad - 1; i >= 1; --i) {
        // Imprimir espacios
        for (int j = 1; j <= mitad - i; ++j) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
int problema_7() {
    //problema 7
    int n;
    cout << "Ingrese un numero n: ";
    cin >> n;
    // Inicializamos el primer numero, segundola y la suma de los números pares
    int fib1=1, fib2=1, suma=0;
    // Generamos la serie de Fibonacci hasta alcanzar el número n
    while (fib2 < n) {
        // Si el número de Fibonacci actual es par, lo sumamos
        if (fib2 % 2 == 0) {
            suma += fib2;
        }
        int fib_next = fib1 + fib2;
        // Actualizamos fib1 y fib2 para la siguiente iteración
        fib1 = fib2;
        fib2 = fib_next;
    }
    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}

int problema_9() {
    //problema 9
    int N, suma=0;
    cout << "Ingrese un numero entero N: ";
    cin >> N;
    int numero=N;
    while (numero > 0) {
        // Obtenemos el último dígito
        int digito = numero % 10;
        // Elevamos el dígito a sí mismo y lo sumamos
        int potencia = 1;
        for (int i = 0; i < digito; ++i) {
            potencia *= digito;
        }
        suma += potencia;
        // Eliminamos el último dígito
        numero /= 10;
    }
    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}

int problema_11() {
    //problema 11
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    int resultado = 1;

    for (int i = 2; i <= numero; ++i) {
        int a = resultado;
        int b = i;
        // Calcula el máximo común divisor utilizando el algoritmo de Euclides
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        // Calcula el mínimo común múltiplo
        resultado = (resultado * i) / a;
    }
    cout << "El minimo comun multiplo es: " << resultado << endl;
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
    //ejercicio_19();
    //ejercicio_21();
    //ejercicio_23();
    //ejercicio_25();
    //ejercicio_27();
    //ejercicio_29();
    //problema_1();
    //problema_3();
    //problema_5();
    //problema_7();depurar
    //problema_9();depurar
    //problema_11();depurar
    return 0;
}

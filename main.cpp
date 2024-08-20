/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

/**
int main() {
    //ejercicio 1
    int A, B;
    // Solicitar al usuario que ingrese los números A y B
    std::cout << "Ingrese el número A: ";
    std::cin >> A;
    std::cout << "Ingrese el número B: ";
    std::cin >> B;
    // Calcular el residuo de la división A/B
    int residuo = A % B;
    // Imprimir el resultado
    std::cout << "El residuo de la division " << A << "/" << B << " es: " << residuo << std::endl;
    return 0;
}
***/
/**
using namespace std;
int main()
{
    //Ejercicio 2
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;
    if (N % 2 == 0) {
        cout << N << " es par" << endl;
    } else {
        cout << N << " es impar" << endl;
    }
    if (N==0){
        cout<<"El cero cumple con la condicional para ser número par.";
    }

    return 0;
}
***/
/**
int main() {
    int A, B;
    //ejercccio 3
    // Solicitar al usuario que ingrese los números A y B
    std::cout << "Ingrese el número A: ";
    std::cin >> A;
    
    std::cout << "Ingrese el número B: ";
    std::cin >> B;
    // Determinar el mayor de los dos números
    int mayor;
    if (A > B) {
        mayor = A;
    } else {
        mayor = B;
    }
    // Imprimir el resultado
    std::cout << "El mayor es " << mayor << std::endl;
    return 0;
}
***/
/**
using namespace std;
int main()
{
    //Ejercicio 4
    int A, B;
    cout<< "Ingrese un número: ";
    cin >> A;
    cout<< "Ingrese otro  número: ";
    cin>> B;

    if (A>B){
        cout<< B << " es menor."<< endl;}
    if (A==B){
        cout<< A << " es igual a " << B << endl;}
    if (A<B){
        cout<< A << " es menor."<< endl;}

    return 0;
}
 ***/
/**
int main() {
    int A, B;
    //ejercicio 5
    std::cout << "Ingrese el número A: ";
    std::cin >> A;
    std::cout << "Ingrese el número B: ";
    std::cin >> B;

    int resultado = A / B;
    if (A % B * 2 >= B) {
        resultado += 1;
    }
    std::cout << A << "/" << B << "=" << resultado << std::endl;
    return 0;
}
**/
/**
#include <iostream>
using namespace std;

int main()
{
    //Ejericio 6
    int A;
    int B, potencia;
    cout << "Ingrese un número A: ";
    cin >> A;
    cout << "Ingrese otro número B: ";
    cin >> B;
    if (B==0){
        potencia=0;
    }
    for (potencia=1;B>0;B=B-1){
        potencia=A*potencia;
    }


    cout<< "El resultado es: " << potencia << endl;

    return 0;
}
 **/
/**
int main() {
    //ejercicio 7
    int N;
    std::cout << "Ingrese un número N: ";
    std::cin >> N;
    int suma = 0;
    for (int i = 0; i <= N; ++i) {
        suma += i;
    }
    std::cout << "La sumatoria desde 0 hasta " << N << " es: " << suma << std::endl;
    return 0;
}
***/
/**
using namespace std;
int main()
{
    //Ejercicio 8
    int A, B, factorial;
    cout << "Ingrese un número A: ";
    cin >> A;
    factorial=1;
    while (A>0){
        factorial=A*factorial;
        A=A-1;
    }


    cout<< "El resultado es: " << factorial << endl;

    return 0;
}
 ***/
/**
int main() {
    //ejercicio 9
    double N;
    const double PI = 3.1416;
    
    std::cout << "Ingrese el radio del círculo (N): ";
    std::cin >> N;

    double perimetro = 2 * PI * N;
    double area = PI * N * N;
    std::cout << "Perímetro: " << perimetro << std::endl;
    std::cout << "Área: " << area << std::endl;
    return 0;
}
**/
/**
using namespace std;
int main()
{
    //Ejercicio 10
    int N, i;
    cout << "Ingrese un número N: ";
    cin >> N;
    cout << "Los multiplos de " << N << "son: " << endl;
    for (i=N;i<100;i+=N){
    cout << i << endl;
    }
    return 0;
}
**/
/**
int main() {
    //ejercicio 11
    int N;
    std::cout << "Ingrese un número N: ";
    std::cin >> N;
    std::cout << "Tabla de multiplicar de " << N << ":" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << N << " x " << i << " = " << N * i << std::endl;
    }
    return 0;
}
**/
/**
using namespace std;
int main()
{
    //Ejercicio 12
    int N, i, resul, b;
    cout << "Ingrese un número N: ";
    cin >> N;
    cout << "Los multiplos de " << N << "son: " << endl;
    for (i=1;i<=5;++i){
        b=i;
        for (resul=1;b>0;b=b-1){
            resul=N*resul;
        }
        cout << N <<"^"<< i <<"="<<resul<< endl;
    }
    return 0;
}

**/
/**
int main() {
    //ejercicio 13
    int N;
    std::cout << "Ingrese un número N: ";
    std::cin >> N;
    std::cout << "Los divisores de " << N << " son:" << std::endl;
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
**/
/**
using namespace std;
int main()
{
    //Ejercicio 14
    int A;
    int B, potencia;
    for(A=1,B=50;A<=50,B>=1;A=A+1,B=B-1){
        cout << A <<"  "<< B << endl;
    }

    return 0;
}

**/
/**
int main() {
    // ejercicio 15
    int numero;
    int suma = 0;
    std::cout << "Ingrese números continuamente. Ingrese 0 para terminar:" << std::endl;
    do {
        std::cout << "Ingrese un número: ";
        std::cin >> numero;
        suma += numero;
    } while (numero != 0);
    std::cout << "El resultado de la sumatoria es: " << suma <<std::endl;
    return 0;
}
**/
/**
using namespace std;
int main() {
    //Ejercicio 16
    int N, sum, cont, promedio;
    N=1;
    while (N!=0){
    cout << "Ingrese un numero N: ";
    cin >> N;
    sum += N;
    cont++;
    }
    promedio=sum/cont;
   if(float(sum)/cont-promedio>= 0.5)promedio=promedio+1;
    cout << "El promedio de los números ingresados es: "<< promedio << endl;
    return 0;
}
**/
/**
int main() {
    //ejercicio 17
    int numero;
    int mayor = -999999999; // toca que sea muy grande 
    std::cout << "Ingrese números continuamente. Ingrese 0 para terminar:" << std::endl;
    do {
        std::cout << "Ingrese un número: ";
        std::cin >> numero;
        if (numero > mayor && numero != 0) {
            mayor = numero;
        }
    } while (numero != 0);
    if (mayor != -999999999) {
        std::cout << "El numero mayor fue: " << mayor << std::endl;
    } else {
        std::cout << "No se ingresaron números." << std::endl;
    }
    return 0;
}
**/
/**
using namespace std;
int main() {
    //Ejercicio 18
    int N, i;
    cout << "Ingrese un numero N: ";
    cin >> N;
    bool esCuadradoPerfecto = false;

    for (int i = 1; i * i <= N; ++i) {
        if (i * i == N) {
            esCuadradoPerfecto = true;
            break;
        }
    }
    if (esCuadradoPerfecto) {
        cout << N << " Es un cuadrado perfecto." << endl;
    } else {
        cout << N << " NO es un cuadrado perfecto." << endl;
    }

    return 0;
}
**/
/**
int main() {
    //ejercicio 19
    int N;
    bool es_primo = true;
    std::cout << "Ingrese un número N: ";
    std::cin >> N;
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
        std::cout << N << " es un número primo." << std::endl;
    } else {
        std::cout << N << " no es un número primo." << std::endl;
    }
    return 0;
}
**/
/**
using namespace std;
int main() {
    //Ejercicio 20
    int n, invertir, a;
    cout<<"Ingrese un numero: ";
    cin>> a;
    n=a;
    while(n>0){
        invertir= invertir+ n%10;
        invertir= invertir *10;
        n=n/10;
    }
    if (invertir/10==a){
    cout<<"El numero "<<a<<" es palindromo. ";}
    else{
        cout<<"El numero "<<a<< " no es palindromo. ";
    }
    return 0;
}
**/
/**
int main() {
    //ejercicio 21
    char C;
    std::cout << "Ingrese un carácter: ";
    std::cin >> C;
    if ((C >= 'a' && C <= 'z') || (C >= 'A' && C <= 'Z')) { // Verificar si es una letra
        if (C >= 'a' && C <= 'z') { 
            std::cout << "Letra convertida: " << (char)(C - 'a' + 'A') << std::endl; // Convertir a mayúscula
        } else {
            std::cout << "Letra convertida: " << (char)(C - 'A' + 'a') << std::endl; // Convertir a minúscula
        }
    } else {
        std::cout << "El carácter ingresado no es una letra." << std::endl;
    }
    return 0;
}
**/
/**
using namespace std;
int main()
{
    //Ejercicio 22
    int A, B, horas, minutos, segundos;
    cout<< "Ingrese una cantidad entera de segundos: ";
    cin>> A;
    horas=A/3600;
    minutos=(A%3600)/60;
    segundos=(A%3600)%60;
    cout <<" "<< horas << ':'<< minutos <<":" << segundos << endl;

    return 0;

}
**/
/**
int main() {
    int A, B;
    //ejercicio 23
    std::cout << "Ingrese dos números A y B: ";
    std::cin >> A >> B;
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
            std::cout << "El MCM de " << A << " y " << B << " es: " << i << std::endl;
            break;
        }
        i += maximo; // Incrementa i por el máximo, ya que el MCM es un múltiplo del máximo
    }
    return 0;
}
**/
/**
using namespace std;
int main()
{
    //Ejercicio 24
    int N, i, j;
    cout << "Ingrese el tamaño del cuadro deseado: " << endl;
    cin >> N;
    for (i=0; i< N; ++i){
        for (j=0; j<N; ++j){
            if (i==0 || i== N-1 || j==0 || j==N-1){
                cout<< "+";
            }
            else {
                cout<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}
**/
/**  
int main() {
    //ejercicio 25
    int N;
    int contador = 0;
    std::cout << "Ingrese un número N: ";
    std::cin >> N;
    while (N != 0) {
        N = N / 10; // Dividir el número por 10 para eliminar el último dígito
        contador++; 
    }
    std::cout << "La cantidad de dígitos de N es: " << contador << std::endl;
    return 0;
}
**/
/**
using namespace std;

int main()
{
    //Ejercicio 26
    int a,b,c;
    cout<< "Ingrese un numero a: "<< endl;
    cin>> a;
    cout<< "Ingrese un numero b: "<< endl;
    cin>> b;
    cout<< "Ingrese un numero c: "<< endl;
    cin>> c;
    if ((a+b>c) && (b+c>a) &&  (a+c>b)){
        if (a==b && b==c){
        cout<< "Se forma un triangulo equilatero." << endl;}
        else if (a==b!=c || b==c!= a || a==c!= b){
            cout << "Se forma un triangulo isosceles." << endl;}
        else {
            cout << "Se forma un triangulo escaleno." << endl;
        }
        }

    else{
        cout << "No se puede formar un triangulo." << endl;
    }
    return 0;
}
**/
/**
int main() {
    //ejercicio 27
    char operador;
    double num1, num2;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el operador (+, -, *, /): ";
    std::cin >> operador;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
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
                std::cout << "Error: No se puede dividir por cero." << std::endl;
                return 1; // Salir del programa con código de error
            }
            break;
        default:
            std::cout << "Operador no válido." << std::endl;
            return 1; // Salir del programa con código de error
    }
    // Imprimir el resultado de la operación
    std::cout << num1 << operador << num2 << "=" << resultado << std::endl;
    return 0;
}
**/
/**
using namespace std;

int main() {
    //Ejercicio 28

    int N;

    cout << "Ingrese el numero de elementos para la aproximacion de pi: ";
    cin >> N;
    double aproximacionPi = 0.0;
    int denominador = 1;
    bool sumar = true;

    for (int i = 0; i < N; ++i) {
        if (sumar) {
            aproximacionPi += 4.0 / denominador;
        } else {
            aproximacionPi -= 4.0 / denominador;
        }

        denominador += 2;
        sumar = !sumar;
    }
    cout << "pi es aproximadamente: " << aproximacionPi << endl;

    return 0;
}
 **/
/**
int main() {
    //ejercicio 29
    std::cout << "Piensa en un número entre 0 y 100." << std::endl;
    std::cout << "Cuando estés listo, ingresa uno de los siguientes símbolos:" << std::endl;
    std::cout << "   '>' si el número que has pensado es mayor al que el programa te muestra." << std::endl;
    std::cout << "   '<' si el número que has pensado es menor al que el programa te muestra." << std::endl;
    std::cout << "   '=' si el número que has pensado es igual al que el programa te muestra." << std::endl;
    std::cout << "Presiona Enter después de ingresar el símbolo." << std::endl;

    int min = 0;
    int max = 100;
    int guess;
    char symbol;

    while (true) {
        guess = (min + max) / 2;
        std::cout << "¿Es " << guess << " tu número? Ingresa '>', '<' o '=': ";
        std::cin >> symbol;
        if (symbol == '>') {
            min = guess + 1;
        } else if (symbol == '<') {
            max = guess - 1;
        } else if (symbol == '=') {
            std::cout << "¡He adivinado tu número! Es " << guess << "." << std::endl;
            break;
        } else {
            std::cout << "Por favor, ingresa un símbolo válido ('>', '<' o '=')." << std::endl;
        }
    }
    return 0;
}
**/
/**
#include <cstdlib>
using namespace std;

int main() {
    //Ejercicio 30
    int B, random, cont;
    random= rand()%100;
    while (random!= B){
    cout << "Ingrese un numero B: ";
    cin >> B;
        if (B<random) {
            cout << " El numero ingresado es menor." << endl;
             }
        else if (B>random) {
            cout << " El numero ingresado es mayor." << endl;
            }
        cont++;
        }
    cout << "El numero ingresado es el correcto. Numero de intentos: " <<cont <<endl;

    return 0;
}
**/
//problemas mas, mas y mas grandes               (se supone )
/**
int main() {
    //problema 1
    char caracter;
    std::cout << "Ingrese un carácter: ";
    std::cin >> caracter;
    // Convertir a minúscula si es mayúscula
    if (caracter >= 'A' && caracter <= 'Z') {
        caracter += 'a' - 'A';
    }
    // Evaluar si es una letra
    if ((caracter >= 'a' && caracter <= 'z')) {
        // Evaluar si es una vocal
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            std::cout << caracter << " es una vocal." << std::endl;
        } else {
            std::cout << caracter << " es una letra." << std::endl;
        }
    } else {
        std::cout << "no es una letra  o vocal." << std::endl;
    }
    return 0;
}
**/
/**
using namespace std;

int main()
{
    //Problema 2
    int valores;
    cout << "Ingrese el valor a cambiar: " << endl;
    cin >> valores;
    cout<< "50000 : "<< valores/50000<< endl;
    valores=valores - 50000*(valores/50000);
    cout<< "20000 : "<< valores/20000<< endl;
    valores=valores - 20000*(valores/20000);
    cout<< "10000 : "<< valores/10000<< endl;
    valores=valores - 10000*(valores/10000);
    cout<< "5000 : "<< valores/5000<< endl;
    valores=valores - 5000*(valores/5000);
    cout<< "2000 : "<< valores/2000<< endl;
    valores=valores - 2000*(valores/2000);
    cout<< "1000 : "<< valores/1000<< endl;
    valores=valores - 1000*(valores/1000);
    cout<< "500 : "<< valores/500<< endl;
    valores=valores - 500*(valores/500);
    cout<< "200 : "<< valores/200<< endl;
    valores=valores - 200*(valores/200);
    cout<< "100 : "<< valores/100<< endl;
    valores=valores - 100*(valores/100);
    cout<< "50 : "<< valores/50<< endl;
    valores=valores - 50*(valores/50);
    cout<< "El faltantes es: "<<valores<<endl;


    return 0;
}
**/
/**
int main() {
    //problema 3
    int mes, dia;

    std::cout << "Ingrese el mes (1-12): ";
    std::cin >> mes;

    std::cout << "Ingrese el día: ";
    std::cin >> dia;

    // Verificar si el mes es válido
    if (mes < 1 || mes > 12) {
        std::cout << mes << " es un mes inválido." << std::endl;
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
        std::cout << dia << "/" << mes << " es una fecha inválida." << std::endl;
        return 0;
    }
    // Si el día es 29 de febrero, verificar si es válido en un año bisiesto
    if (mes == 2 && dia == 29) {
        std::cout << dia << "/" << mes << " es válida en ";
        // Verificar si el año actual (2024) es bisiesto
        bool es_bisiesto = ((2024 % 4 == 0 && 2024 % 100 != 0) || (2024 % 400 == 0));
        if (es_bisiesto) {
            std::cout << "bisiesto." << std::endl;
        } else {
            std::cout << "posiblemente bisiesto." << std::endl;
        }
    } else {
        // Si no es 29 de febrero, simplemente imprimir que es una fecha válida
        std::cout << dia << "/" << mes << " es una fecha válida." << std::endl;
    }

    return 0;
}
**/

/**
using namespace std;
int main()
{
    //Problema 4
    int horainicial, m, horasuma, horas, n, minutos;
    cout<< "Ingrese la hora en formato de 24 horas (0000): ";
    cin>> horainicial;
    if (horainicial%100>=60 && horainicial>2400 && horainicial>0){
        cout<< "Formato de hora incorrecta."<<endl<<"Ingrese la hora en formato de 24 horas (0000): ";
        cin>> horainicial;
    }
    cout<< "Ingrese la horas a sumar en formato de horas y minutos (000): ";
    cin>> horasuma;
    horas=(horainicial-horainicial%100)/100+(horasuma-horasuma%100)/100+((horainicial%100+horasuma%100)/60);
    minutos=(horainicial%100+horasuma%100);
    if(minutos>60){
        minutos-=60;
    }
    if (horas>24){
        horas=horas-24;
    }
    cout<< "La hora es: "<<horas<<minutos<<endl;

}
**/
/**
int main() {
    //problema 5 
    int tamano;
    do {
        std::cout << "Ingrese un número impar para el tamaño del patrón: ";
        std::cin >> tamano;
    } while (tamano % 2 == 0); 
    int mitad = tamano / 2 + 1; // Mitad del patrón
    // la parte superior del patrón
    for (int i = 1; i <= mitad; ++i) {
        // Imprimir espacios en blanco
        for (int j = 1; j <= mitad - i; ++j) {
            std::cout << " ";
        }
        // Imprimir asteriscos
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    // la parte inferior 
    for (int i = mitad - 1; i >= 1; --i) {
        // Imprimir espacios 
        for (int j = 1; j <= mitad - i; ++j) {
            std::cout << " ";
        }
        // Imprimir asteriscos
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
**/
/**
using namespace std;

int main()
{
    //Problema 6
    int N, denominador, factorial;
    cout<<"Ingrese el numero de datos para la aproximacion.";
    cin>> N;
    double aproximacioneu= 1.0;
    denominador=1;
    factorial=1;
    while (denominador<N){
        factorial=denominador*factorial;
        aproximacioneu += 1.0 / factorial;
        denominador=denominador+1;
        }
    cout << "Euler es aproximadamente: " << aproximacioneu << endl;

    return 0;
}
**/
/**
int main() {
    //problema 7
    int n;
    std::cout << "Ingrese un número n: ";
    std::cin >> n;
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
    std::cout << "El resultado de la suma es: " << suma << std::endl;
    return 0;
}
**/
/**
using namespace std;
int main()
{
    //Problema 8
    int a, b, c, i;
    cout<<"Ingrese un numero a: ";
    cin>> a;
    cout<<"Ingrese un numero b: ";
    cin>> b;
    cout<<"Ingrese un numero c: ";
    cin>> c;
    int suma=0;
    for (i=1;i<c;++i){
        if (i%a==0||i%b==0){
            suma+=i;
            cout<<" "<<i<<" +";
        }
    }
    cout<<" 0 = "<<suma<<endl;
    return 0;
}
**/
/**
int main() {
    //problema 9
    int N, suma=0;
    std::cout << "Ingrese un número entero N: ";
    std::cin >> N;
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
    std::cout << "El resultado de la suma es: " << suma << std::endl;
    return 0;
}
**/
/**
using namespace std;
int main() {
    //Problema 10
    int n, num, cont;
    bool primo;
    cout<<"Ingrese un numero. ";
    cin>>n;
    primo=true;
    while(cont != n){
        num+=1;
        if (num <= 1) {
            primo=false;
        }
        else{primo=true;}
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                primo=false;
            }
            else{primo=true;}
        }
        if (primo==true){
            cont+=1;
        }
    }
    cout<<"El primo numero "<< n<< " es: "<<num;

    return 0;
}
**/
/**
int main() {
    //problema 11
    int numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;
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
    std::cout << "El minimo comun multiplo es: " << resultado << std::endl;
    return 0;
}
**/
/**
#include <iostream>
using namespace std;

int main() {
    //Problema 12
    int n, random, cont;
    cout<<"Ingrese un numero: ";
    cin>> n;
    for(int i=n-1;i>0;--i){
        if (n%i==0){
        cout<<"El mayor factor primo de "<<n<<" es: "<<i;
        break;}
    }
    return 0;
}
**/
/**
int main() {
    //problema 13
    int limite;
    std::cout << "Ingrese un numero: ";
    std::cin >> limite;

    int suma = 0;
    //mira si es primo
    for (int i = 2; i < limite; ++i) {
        bool esPrimo = true;
        //descartar los numero que no son primos del limite
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }
        //sumar lo numero primos encontados
        if (esPrimo) {
            suma += i;
        }
    }
    std::cout << "El resultado de la suma es: " << suma << std::endl;
    return 0;
}
**/
/**
using namespace std;

int main() {
    //Problema 14
    int mayorPalindromo = 0;
    int num1, num2;

    for (int i = 999; i >= 100; --i) {
        for (int j = i; j >= 100; --j) {
            int producto = i * j;
            int numeroInvertido = 0;
            int temp = producto;
            while (temp > 0) {
                numeroInvertido = numeroInvertido * 10 + temp % 10;
                temp /= 10;
            }
            if (producto == numeroInvertido && producto > mayorPalindromo) {
                mayorPalindromo = producto;
                num1 = i;
                num2 = j;
            }
        }
    }

    cout << num1 << "*" << num2 << "=" << mayorPalindromo << endl;

    return 0;
}
**/
/**
int main() {
    //problema 15
    int n;
    std::cout << "Ingrese el tamaño de la espiral (número impar): ";
    std::cin >> n;
    while (n % 2 == 0) {
        std::cerr << "Error: El número ingresado debe ser impar: " << std::endl;
        std::cin>> n;
    }
    int suma = 1; // Comenzamos con el número 1 en la esquina superior izquierda
    int valor = 1; // Valor a incrementar en cada paso
    // Sumamos los valores en las cuatro esquinas de cada capa de la espiral
    for (int i = 3; i <= n; i += 2) {
        for (int j = 0; j < 4; ++j) {
            valor += (i - 1); // Aumentamos el valor en el tamaño de la capa menos 1
            suma += valor;
        }
    }
    std::cout << "En una espiral de " << n << "x" << n << ", la suma es: " << suma << std::endl;
    return 0;
}
**/
/**
using namespace std;

int main() {
    //Problema 16

    int k, n, terminos, semilla, semillanueva, terminosnuevos;
    cout<<"Ingrese un numero k: ";
    cin>>k;
    semilla=k-1;
    while (semilla>0){
        n=semilla;
        while (n>1){

            if(n%2==0){
                n= n/2;
                ++terminos;
            }
            else {
                n= 3*n+1;
                ++terminos;
            }
        }
        if(terminos>terminosnuevos){
        terminosnuevos=terminos;
        semillanueva=semilla;
        }
        terminos=1;
        semilla-=1;
    }
    n=semillanueva;
    cout<<"Semilla "<<semillanueva<<" : ";
    cout<<semillanueva;
    while (n>1){
            cout<<",";
            if(n%2==0){
                n= n/2;
                ++terminos;
                cout<<n;
            }
            else {
                n= 3*n+1;
                ++terminos;
                cout<<n;
            }
    }
    cout<<endl<<"Numero de terminos: "<<terminosnuevos<<endl;
    return 0;
}
**/
/**
int main() {
    //problema 17
    int k;
    std::cout << "Ingrese el número k: ";
    std::cin >> k;
    int n = 1;
    int triangular = 1;
    while (true) {
        int conteoDivisores = 0;
        //cuenta los divisores
        for (int i = 1; i <= triangular; ++i) {
            if (triangular % i == 0) {
                conteoDivisores++;
            }
        }
        if (conteoDivisores > k) {
            std::cout << "El numero es: " << triangular << " que tiene " << conteoDivisores << " divisores." << std::endl;
            break;
        }
        n++;
        triangular = n * (n + 1) / 2;
    }
    return 0;
}
**/




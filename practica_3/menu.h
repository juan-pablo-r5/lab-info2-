#ifndef MENU_H
#define MENU_H
#include <vector>
#include "codificacion.h"
#include <string>

int NumeroLineasArchivo(string nombreArchivo);

bool comprobarLectura( string nombredelarchivo);
string leerUnaLinea(int numero_linea_deseada, string nombreArchivo);
string ponerCeros(string lineaBinString, int n);
bool verificacionAdministrador(string nombreArchivo, int semilla_de_codificacion, int longitud);
void EscribirContraseñasobreArchivo(string line, string nombreArchivo);
bool esNumero(string str);
int numeroLegal();
string CrearArhcivo(int& n, int &longitud, vector<int>& longitud_cedula, vector<int>& longitd_clave, vector<int>& longitud_saldo);
void ComprobacionDeArchivo(string& nombre_del_archivo, bool& bandera, int &semilla, int& longitud, vector<int>& longitud_cedula, vector<int>& longitd_clave, vector<int>& longitud_saldo);
bool VerificarNumeroPositivo( int numero);
bool cedulaRepetida(string nombre_del_archivo, string cedula_a_verificar);
void CrearUsuario(string nombre_archivo, int& semilla, vector<int>& longitud_cedula, vector<int>& longitd_clave, vector<int>& longitud_saldo);
string ValidarCedula_o_Saldo(string nombre);
bool ValidacionUsuario(string nombre_del_archivo, int semilla, int& numero_de_linea_cedula, vector<int>longitud, int& contador);
char VerificarTamaño();
bool VerificarSaldoRetirar(int& saldo_entero, int numero_linea_deseada, string nombreArchivo, int semilla, int longitud, long long int cantidad_a_retirar);
bool VerificarSaldo(int& saldo_entero, int numero_linea_deseada, string nombreArchivo, int semilla, int longitud);
string EncriptarNuevosValores(int valor, int semilla);
void ActualizarSaldo(int valorSaldo, string nombreArchivo, int linea_a_cambiar, int semilla, vector<int>&vectorsaldo, int posicion);


#endif // MENU_H

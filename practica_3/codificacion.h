#ifndef CODIFICACION_H
#define CODIFICACION_H
#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
using namespace std;

void aplicarReglasInv(string &grupo, string &grupoAnterior);
void decodificarM1(string &cadena, int n);
string decodificarM2(string cadena, int n);
string convBinInt(string linea);
void convIntBin(char *linea, int ent);
void aplicarReglas(string &grupo, string &grupoAnterior);
string codificarM2(string &cadena, int n);
void codificarM1(string &cadena, int n);
string quitarCeros(string linea, int cantidad_bytes);


#endif // CODIFICACION_H

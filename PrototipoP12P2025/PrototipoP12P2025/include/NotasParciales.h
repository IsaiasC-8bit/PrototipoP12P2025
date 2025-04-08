#ifndef NOTASPARCIALES_H
#define NOTASPARCIALES_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;
//declaracion de constantes de las notas;
#define NUMERO_ALUMNOS 5
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100

class NotasParciales
{
    public:
        NotasParciales();
        void llamadaCiclo();
        //metodo de asginacion de notas al azar
        int busquedaAleatoreos(int min, int max);
        //matrices de facultades
        void llenarMatriz(float matriz_facultad[NUMERO_ALUMNOS][NUMERO_NOTAS+1]);
        void imprimirMatrizLinea();
        float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS+1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA],string nombreFacultad);
    private:



};

#endif // NOTASPARCIALES_H

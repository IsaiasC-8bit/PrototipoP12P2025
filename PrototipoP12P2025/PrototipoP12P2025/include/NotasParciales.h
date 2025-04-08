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
        //constructor para los private
        NotasParciales(float matriz_facultad_1, float matriz_facultad_2, float matriz_facultad_3);
        //getters y setter para las variables privadas
        float getmatriz_facultad_1();
        void setmatriz_facultad_3(float matriz_facultad_1);

        float getmatriz_facultad_2();
        void setmatriz_facultad_2(float matriz_facultad_2);

        float getmatriz_facultad_3();
        void setmatriz_facultad_3(float matriz_facultad_3);
        void llamadaCiclo();
        //metodo de asginacion de notas al azar
        int busquedaAleatoreos(int min, int max);
        //matrices de facultades
        void llenarMatriz(float matriz_facultad[NUMERO_ALUMNOS][NUMERO_NOTAS+1])
        void imprimirMatrizLinea();
        float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS+1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA],string nombreFacultad);
    private:
        //Declaracion de matrices de univesidad
        float matriz_facultad_1[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
        float matriz_facultad_2[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
        float matriz_facultad_3[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];

};

#endif // NOTASPARCIALES_H

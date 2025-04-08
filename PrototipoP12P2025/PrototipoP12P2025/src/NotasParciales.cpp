#include "NotasParciales.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;
NotasParciales::NotasParciales(float matriz_facultad_1, float matriz_facultad_2, float matriz_facultad_3)
{
    this->matriz_facultad_1=matriz_facultad_1;
    this->matriz_facultad_2=matriz_facultad_2;
    this->matriz_facultad_3=matriz_facultad_3;
}


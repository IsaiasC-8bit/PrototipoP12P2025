#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "NotasParciales.h"
using namespace std;

int main()
{
    cout << "Notas de la Universidad"<<endl;
    srand(getpid()); //Inicar el rand
    NotasParciales notas;
    notas.llamadaCiclo();
    return 0;


}

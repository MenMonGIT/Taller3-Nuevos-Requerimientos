#include <string>
#include <iostream>
#include "Solicitante.h"
using namespace std;
Solicitante::Solicitante(){/*este es el constructor main*/}
int Solicitante::RegistrarSolicitante(string identificacion, string tipoDeSangre ){
    cout<<"Bienvenido al sistema de registro para donantes"<<endl;
    cout<<"Digite su numero de identificacion: ";
    cin>>this->identificacion;
    cout<<"Digite su tipo sanguineo:";
//aqui va la implementacion para registro de solicitante
    return 0;
}
string Solicitante::MostrarSolicitantes(string listaSolicitantes){


    //aqui va la implementacion  para mostrar los solicitantes registrados
    return "o";
}

/*
//zona de setters
setId();
SetTipoSanguineo();
//zona de geters
getTipoSanguineo();
*/

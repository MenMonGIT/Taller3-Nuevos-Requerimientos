#include <string>
#include <iostream>
#include "Solicitante.h"
#include "Utils.h"
using namespace std;
Solicitante::Solicitante(){/*este es el constructor main*/}

int Solicitante::RegistrarSolicitante(string identificacion, string tipoDeSangre ){
    string sangre;
    cout<<"Bienvenido al sistema de registro para donantes"<<endl;
    cout<<"Digite su nombre: ";
    cin>>this->nombre;
    cout<<"Digite su numero de identificacion: ";
    cin>>this->identificacion;
    cout<<"Digite su tipo sanguineo: ";
    Utils utilidad1;
    cin>>sangre;
    this->tipoDeSangre=utilidad1.getValidatedBloodType(sangre);
    //espacio para generar el resultado en un .txt
    
    //
    cout<<"Solicitud creada"<<endl;

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

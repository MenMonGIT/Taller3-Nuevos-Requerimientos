#ifndef "SOLICITANTE_H"
#define "SOLICITANTE_H"
#include <string>

class Solicitante{
    private:
        string identificacion;
        string tipoDeSangre;
    public:
        Solicitante();
        std::int RegistrarSolicitante(string identificacion, string tipoDeSangre );
        string MostrarSolicitantes(string listaSolicitantes);
        //zona de setters
        setId();
        SetTipoSanguineo();
        //zona de geters
        getTipoSanguineo();


};





#endif //SOLICITANTE_H
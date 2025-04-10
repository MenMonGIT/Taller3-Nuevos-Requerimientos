#ifndef SOLICITANTE_H
#define SOLICITANTE_H
#include <string>

class Solicitante{
    private:
        std::string identificacion;
        std::string tipoDeSangre;
    public:
        Solicitante();
        int RegistrarSolicitante(std::string identificacion, std::string tipoDeSangre );
        std::string MostrarSolicitantes(std::string listaSolicitantes);
        //zona de setters
        void setId();
        void SetTipoSanguineo();
        //zona de geters
        std::string getTipoSanguineo();


};





#endif //SOLICITANTE_H
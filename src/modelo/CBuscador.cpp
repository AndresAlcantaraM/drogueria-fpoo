/*
    Proyecto: Drogueria - FPOO - Universidad del Valle
    Módulo: Búsqueda (GRUPO 6)

    ESTE ARCHIVO ES TUYO: reemplaza los STUB por la implementación real.
*/
#include "CBuscador.h"
using namespace std;

CBuscador::CBuscador(const CInventario& inventario_) : inventario(inventario_) {
}

/**
 * @brief Busca un medicamento por su id.
 * @param id Identificador único.
 * @return Puntero a medicamento o nullptr. 
 */
const CMedicamento* CBuscador::porId(int id) const{
    const vector<CMedicamento>& medicamentos = inventario.getMedicamentos();
    for(size_t i = 0; i < medicamentos.size(); i++){
        if(medicamentos[i].getId() == id){
            return &medicamentos[i];
        }
    }
    return nullptr;
}

vector<CMedicamento> CBuscador::porNombre(string texto) const{
    // STUB (Grupo 6): implementar
    return vector<CMedicamento>();
}

vector<CMedicamento> CBuscador::porRangoPrecio(float minimo, float maximo) const{
    // STUB (Grupo 6): implementar
    return vector<CMedicamento>();
}

vector<CMedicamento> CBuscador::conPocoStock(int umbral) const{
    // STUB (Grupo 6): implementar
    return vector<CMedicamento>();
}

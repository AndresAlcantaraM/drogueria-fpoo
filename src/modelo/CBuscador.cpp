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
 * @brief Busca un medicamento por id.
 * @param id entero.
 * @return Puntero al medicamento.
 */
const CMedicamento* CBuscador::porId(int id) const{
    const vector<CMedicamento>& medicamentos = inventario.getMedicamentos();

    for(size_t i = 1; i < medicamentos.size(); i++){
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

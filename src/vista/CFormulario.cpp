/*
    Proyecto: Drogueria - FPOO - Universidad del Valle
    Módulo: Formularios de captura (GRUPO 2)

    ESTE ARCHIVO ES TUYO: reemplaza los STUB por la implementación real.
*/
#include "CFormulario.h"
using namespace std;

CFormulario::CFormulario(CValidador& validador_, ostream& salida_) : validador(validador_), salida(salida_) {
}

CMedicamento CFormulario::pedirMedicamento(){
    // STUB (Grupo 2): implementar
    return CMedicamento(0, "", 0, 0, 0, 0);
}

/**
 * @brief Pide al usuario el id de un medicamento.
 * @details
 * Le delega la lectura al CValidador, indicando que el id debe ser un número entre 1 y 1000.
 * @return El id ingresado por el usuario.
 */
int CFormulario::pedirId(){
    return validador.leerEntero("Id del medicamento: ", 1, 1000);
}

int CFormulario::pedirCantidad(){
    // STUB (Grupo 2): implementar
    return 0;
}

string CFormulario::pedirFecha(){
    // STUB (Grupo 2): implementar
    return "";
}

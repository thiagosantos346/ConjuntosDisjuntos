//
// Created by ts on 09/06/19.
//

#include "Elemento.h"

char Elemento::getValue() const {
    return value;
}

void Elemento::setValue(char value) {
    Elemento::value = value;
}

char Elemento::getRepresentante() const {
    return representante;
}

void Elemento::setRepresentante(char representante) {
    Elemento::representante = representante;
}

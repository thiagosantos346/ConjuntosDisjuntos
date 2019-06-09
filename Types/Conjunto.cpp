//
// Created by ts on 09/06/19.
//

#include "Conjunto.h"

char Conjunto::getRepresentante() const {
    return representante;
}

void Conjunto::setRepresentante(char representante) {
    Conjunto::representante = representante;
}

void Conjunto::addElemento(const Elemento &novoElemento) {

    if(this->elementos.empty() == true){
        setRepresentante(novoElemento.getValue());
        setVasio(false);

    }

    if( novoElemento.getRepresentante() == this->getRepresentante() ){
       elementos.push_back(novoElemento);
    }

}

const list<Elemento> &Conjunto::getElementos() const {
    return elementos;
}

Conjunto * Conjunto::getThis() {

    return this;

}

bool Conjunto::isVasio() const {
    return vasio;
}

void Conjunto::setVasio(bool vasio) {
    Conjunto::vasio = vasio;
}

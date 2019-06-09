//
// Created by ts on 09/06/19.
//

#include "UnionFind.h"
#include <iostream>

using namespace std;



char UnionFind::findSet(char value) {
    list<Conjunto> ::iterator itConjunto;
    for(itConjunto = this->conjuntos.begin(); itConjunto != this->conjuntos.end(); ++itConjunto){
        list<Elemento> cpElementos = itConjunto->getElementos();
        list<Elemento>::iterator itElementos;
        for(itElementos = cpElementos.begin() ; itElementos != cpElementos.end(); ++itElementos){
            if( itElementos->getValue() == value ){
                return itElementos->getRepresentante();
            }
        }
    }
    return '\0';
}


void UnionFind::makeSet(char value) {

    bool existe =( this->findSet(value) != '\0');

    if( existe == false ){

        Conjunto ctemp;
        Elemento etemp;

        etemp.setValue(value);
        etemp.setRepresentante(etemp.getValue());

        ctemp.addElemento(etemp);

        this->conjuntos.push_back(ctemp);

    }else{
        cout<<"Já existe..."<<endl;
    }

}

void UnionFind::unionSet(Conjunto *Dest, Conjunto *Src) {

    Src->setVasio(true);
    Dest->setVasio(false);

    if(Dest->getRepresentante() != Src->getRepresentante()){

        list<Elemento>::iterator itElementos;
        list<Elemento> cpElementos = Src->getElementos();

        for(itElementos = cpElementos.begin(); itElementos != cpElementos.end(); ++ itElementos){

            itElementos->setRepresentante(Dest->getRepresentante());
            Dest->addElemento(*itElementos);

        }


    }

}

Conjunto * UnionFind::getConjunto(char representante) {

    list<Conjunto> ::iterator itConjunto;
    for(itConjunto = this->conjuntos.begin(); itConjunto != this->conjuntos.end(); ++itConjunto){



        if(itConjunto->getRepresentante() == representante){

            Conjunto *conjunto = itConjunto->getThis();

            return conjunto;

        }

    }
    return (Conjunto *)nullptr;

}

void UnionFind::listarRepresentantes() {

    list<Conjunto> ::iterator itConjunto;
    for(itConjunto = this->conjuntos.begin(); itConjunto != this->conjuntos.end(); ++itConjunto){

        cout<< itConjunto->getRepresentante()<<endl;

    }


}

void UnionFind::listarItensConjunto(char representante) {

    list<Conjunto> ::iterator itConjunto;
    for(itConjunto = this->conjuntos.begin(); itConjunto != this->conjuntos.end(); ++itConjunto) {

        list<Elemento>::iterator itElementos;

        list<Elemento> cpElementos = itConjunto->getElementos();

        for(itElementos = cpElementos.begin(); itElementos != cpElementos.end(); ++itElementos) {

            if(itConjunto->getRepresentante() == representante && itConjunto->isVasio() == false)
                cout << itElementos->getValue() << endl;

        }

    }


}


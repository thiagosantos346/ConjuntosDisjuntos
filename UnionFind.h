//
// Created by ts on 09/06/19.
//

#ifndef CONJUNTOSDISJUNTOS_UNIONFIND_H
#define CONJUNTOSDISJUNTOS_UNIONFIND_H

#include <iterator>
#include <list>
#include "Types/Conjunto.h";

using namespace std;

class UnionFind {
    private:
        list<Conjunto> conjuntos;
public:
    Conjunto * getConjunto(char representante);
public:

        void listarRepresentantes();
        void listarItensConjunto(char representante);
        char findSet(char value);
        void makeSet(char value);
        void unionSet(Conjunto *Dest, Conjunto *Src);
};


#endif //CONJUNTOSDISJUNTOS_UNIONFIND_H

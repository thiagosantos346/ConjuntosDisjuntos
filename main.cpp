#include <iostream>
#include "UnionFind.h"

int main() {

    UnionFind unionFind;
    Conjunto *cpSrc;
    Conjunto *cpDest;

    unionFind.makeSet('a');
    unionFind.makeSet('b');
    unionFind.makeSet('c');
    unionFind.makeSet('d');

    unionFind.makeSet('f');
    unionFind.makeSet('g');
    unionFind.makeSet('h');
    unionFind.makeSet('i');


    cpDest = unionFind.getConjunto('a');
    cpSrc = unionFind.getConjunto('b');

    unionFind.unionSet( cpDest, cpSrc);

    cpSrc = unionFind.getConjunto('c');


    unionFind.unionSet( cpDest, cpSrc);

    cpSrc = unionFind.getConjunto('d');


    unionFind.unionSet( cpDest, cpSrc);



    unionFind.listarItensConjunto(unionFind.findSet('c'));

    cpDest = unionFind.getConjunto('f');
    cpSrc = unionFind.getConjunto('g');

    unionFind.unionSet( cpDest, cpSrc);

    cpSrc = unionFind.getConjunto('h');


    unionFind.unionSet( cpDest, cpSrc);

    cpSrc = unionFind.getConjunto('i');


    unionFind.unionSet( cpDest, cpSrc);



    unionFind.listarItensConjunto(unionFind.findSet('i'));

    return 0;
}
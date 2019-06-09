//
// Created by ts on 09/06/19.
//

#ifndef CONJUNTOSDISJUNTOS_ELEMENTO_H
#define CONJUNTOSDISJUNTOS_ELEMENTO_H


class Elemento {
private:
    char value;
    char representante;

public:
    char getValue() const;

    void setValue(char value);

    char getRepresentante() const;

    void setRepresentante(char representante);

};


#endif //CONJUNTOSDISJUNTOS_ELEMENTO_H

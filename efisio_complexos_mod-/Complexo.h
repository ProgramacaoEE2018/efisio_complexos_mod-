/*
 * Complexo.h
 *
 *  Created on: 8 de mai de 2018
 *      Author: efisi

 */

//Criação de classe

#ifndef COMPLEXO_H_
#define COMPLEXO_H_
#include <math.h>

class Complexo
{
    private:
        float real;
        float im;
    public:

        Complexo(float,float);
        float Modulo();

        Complexo Conjugado();
        Complexo Soma (Complexo);
        Complexo Diferenca (Complexo);
        Complexo Produto (Complexo);
        Complexo Divisao (Complexo);
};











#endif /* COMPLEXO_H_ */

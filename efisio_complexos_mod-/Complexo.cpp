/*
 * Complexo.cpp
 *
 *  Created on: 8 de mai de 2018
 *      Author: efisi
 */

//Definindo as operações

#include "Complexo.h"
#include <iostream>
#include <stdio.h>
#include <math.h>


Complexo::Complexo(float r, float i): real(r),im(i){}
//{
//    real = r;
//    im = i;
//}

//1.Forma Cartesiana z1=x1+i*y1 e z2=x2+i*y2, onde i=sqrt(-1)

//2.Módulo
float Complexo::Modulo(){
    return sqrt((real*real+im*im));
}

//4.Conjugado
Complexo Complexo::Conjugado(){
    return Complexo(real, -im);
}

//5.Soma
Complexo Complexo::Soma(Complexo z2){
    return Complexo(real+z2.real, im+z2.im);
}

//6.Diferença.
Complexo Complexo::Diferenca(Complexo z2){
    return Complexo(real-z2.real, im-z2.im);
}

//7.Produto
Complexo Complexo::Produto(Complexo z2){
    return Complexo(real*z2.real-im*z2.im, real*z2.im+im*z2.real);
}

//8.Divisão
Complexo Complexo::Divisao(Complexo z2){
    return Complexo((real*z2.real+im*z2.im)/(z2.Modulo()*z2.Modulo()),(im*z2.real-real*z2.im)/(z2.Modulo()*z2.Modulo()));
}





#include "Allie.h"
#include <iostream>
#include <vector>
#include <string>

int Allie::getPv(){
    return pv;
}

int Allie::getAttaque(){
    return attaque;
}

void Allie::setPv(int _pv){
    pv += _pv;
}

Allie::Allie(int _pv, int _attaque){
    pv = _pv;
    attaque =_attaque;
}
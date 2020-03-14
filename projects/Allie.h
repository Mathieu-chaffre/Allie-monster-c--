#ifndef STRING_H
#define STRING_H
#include <string>
class Allie{

    private: 
    int pv;
    int attaque;
    

    public:
    int getPv();
    int getAttaque();
    void setPv(int _pv);
    Allie();
    Allie(int _pv, int _attaque);


};
#endif
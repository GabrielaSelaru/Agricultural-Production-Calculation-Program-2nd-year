#ifndef ORZ_H_INCLUDED
#define ORZ_H_INCLUDED
#include "floarea_soarelui.h"

class Orz:public Interfata{
    int pret;
    float tone;
    int suprafata;
public:
    Orz();
    Orz(float,int,int);
    ~Orz();
    void afisare();
    float venit();
    float venit_suprafata();
    void modif(int);
    void randament();
    void modif_tone();
    void modif_pret();
};


#endif // ORZ_H_INCLUDED

#ifndef FLOAREA_SOARELUI_H_INCLUDED
#define FLOAREA_SOARELUI_H_INCLUDED
#include "porumb.h"

class Floarea_soarelui:public Interfata{
    float tone;
    int pret;
    int suprafata;
public:
    Floarea_soarelui();
    Floarea_soarelui(float,int,int);
    ~Floarea_soarelui();
    void afisare();
    float venit();
    float venit_suprafata();
    void modif(int);
    void randament();
    void modif_tone();
    void modif_pret();
};


#endif // FLOAREA_SOARELUI_H_INCLUDED

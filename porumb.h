#ifndef PORUMB_H_INCLUDED
#define PORUMB_H_INCLUDED
#include "grau.h"

class Porumb:public Interfata{
    float tone;
    int pret;
    int suprafata;
public:
    Porumb();
    Porumb(float,int,int);
    ~Porumb();
    void afisare();
    float venit();
    float venit_suprafata();
    void modif(int);
    void randament();
    void modif_tone();
    void modif_pret();
};

#endif // PORUMB_H_INCLUDED

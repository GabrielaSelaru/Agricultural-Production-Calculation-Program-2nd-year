#ifndef GRAU_H_INCLUDED
#define GRAU_H_INCLUDED
#include "interfata.h"

class Grau : public Interfata{
private:
    float tone;
    int pret;
    int suprafata;
public:
    Grau();
    Grau(float,int,int);
    ~Grau();
    void afisare();
    float venit();
    float venit_suprafata();
    void modif(int);
    void randament();
    void modif_tone();
    void modif_pret();
};





#endif // GRAU_H_INCLUDED

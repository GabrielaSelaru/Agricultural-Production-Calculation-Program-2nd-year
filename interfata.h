#ifndef INTERFATA_H_INCLUDED
#define INTERFATA_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;

class Interfata{

public:
    virtual ~Interfata()=0;
    virtual float venit()=0;
    virtual void afisare()=0;
    virtual float venit_suprafata()=0;
    virtual void modif(int)=0;  //modfica suprafata
    virtual void randament()=0;
    virtual void modif_tone()=0;
    virtual void modif_pret()=0;
};

#endif // INTERFATA_H_INCLUDED

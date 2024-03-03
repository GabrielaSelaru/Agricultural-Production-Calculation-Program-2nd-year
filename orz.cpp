#include "orz.h"

Orz::Orz(){
    tone=0;
    pret=0;
    suprafata=0;
}

Orz::Orz(float t,int p,int s){
    tone=t;
    pret=p;
    suprafata=s;
}

Orz::~Orz(){}

float Orz::venit(){
    return tone*pret;
}

void Orz::afisare(){
    cout<<"pret orz/tona="<<pret<<endl;
    cout<<"tone orz="<<tone<<endl;
    cout<<"suprafata orz="<<suprafata<<" ha"<<endl;
}

float Orz::venit_suprafata(){
    return suprafata*Orz::venit();
}


void Orz::modif(int s){
    this->suprafata=s;
}

void Orz::randament(){
    cout<<"randament orz="<<Orz::venit_suprafata()/suprafata<<endl;
}

void Orz::modif_tone(){
    float t=(this->tone*30)/100;
    this->tone=this->tone+t;
}

void Orz::modif_pret(){
    float p=(this->pret*40)/100;
    this->pret=this->pret-p;
}

#include "porumb.h"

Porumb::Porumb(){
    tone=0;
    pret=0;
    suprafata=0;
}

Porumb::Porumb(float t,int p,int s){
    tone=t;
    pret=p;
    suprafata=s;
}

Porumb::~Porumb(){}

float Porumb::venit(){
    return tone*pret;
}

void Porumb::afisare(){
    cout<<"pret porumb/tona="<<pret<<endl;
    cout<<"tone porumb="<<tone<<endl;
    cout<<"suprafata porumb="<<suprafata<<" ha"<<endl;
}

float Porumb::venit_suprafata(){
    return suprafata*Porumb::venit();
}


void Porumb::modif(int s){
    this->suprafata=s;
}

void Porumb::randament(){
    cout<<"randament porumb="<<Porumb::venit_suprafata()/suprafata<<endl;
}

void Porumb::modif_tone(){
    float t=(this->tone*30)/100;
    this->tone=this->tone+t;
}

void Porumb::modif_pret(){
    float p=(this->pret*40)/100;
    this->pret=this->pret-p;
}


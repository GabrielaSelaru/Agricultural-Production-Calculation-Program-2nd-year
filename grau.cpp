#include "grau.h"

Grau::Grau(){
    tone=0;
    pret=0;
    suprafata=0;
}

Grau::Grau(float t,int p,int s){
    tone=t;
    pret=p;
    suprafata=s;
}

Grau::~Grau(){}

float Grau::venit(){
    return tone*pret;
}

void Grau::afisare(){
    cout<<"pret grau/tona="<<pret<<endl;
    cout<<"tone grau="<<tone<<endl;
    cout<<"suprafata="<<suprafata<<" ha"<<endl;
}

float Grau::venit_suprafata(){
    return suprafata*Grau::venit();
}

void Grau::modif(int s){
    this->suprafata=s;
}

void Grau::randament(){
    cout<<"randament grau="<<Grau::venit_suprafata()/suprafata<<endl;
}

void Grau::modif_tone(){
    float t=(this->tone*30)/100;
    this->tone=this->tone+t;
}

void Grau::modif_pret(){
    float p=(this->pret*40)/100;
    this->pret=this->pret-p;
}

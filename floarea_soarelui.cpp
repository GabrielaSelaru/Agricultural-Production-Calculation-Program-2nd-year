#include "floarea_soarelui.h"

Floarea_soarelui::Floarea_soarelui(){
    tone=0;
    pret=0;
    suprafata=0;
}

Floarea_soarelui::Floarea_soarelui(float t,int p,int s){
    tone=t;
    pret=p;
    suprafata=s;
}

Floarea_soarelui::~Floarea_soarelui(){}

float Floarea_soarelui::venit(){

    return tone*pret;
}

void Floarea_soarelui::afisare(){
    cout<<"pret floarea soarelui/tona="<<pret<<endl;
    cout<<"tone floarea soarelui="<<tone<<endl;
    cout<<"suprafata floarea soarelui="<<suprafata<<" ha"<<endl;
}

float Floarea_soarelui::venit_suprafata(){
    return suprafata*Floarea_soarelui::venit();
}

void Floarea_soarelui::modif(int s){
    this->suprafata=s;
}

void Floarea_soarelui::randament(){
    cout<<"randament floarea soarelui="<<Floarea_soarelui::venit_suprafata()/suprafata<<endl;
}

void Floarea_soarelui::modif_tone(){
    float t=(this->tone*30)/100;
    this->tone=this->tone+t;
}

void Floarea_soarelui::modif_pret(){
    float p=(this->pret*40)/100;
    this->pret=this->pret-p;
}

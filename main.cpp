#include "orz.h"


int main()
{
   Interfata **v;
   v=new Interfata*[4];

   Grau g;

   v[0]=new Grau(3,2000,400);
   v[1]=new Porumb(5,1300,400);
   v[2]=new Floarea_soarelui(2.5,3200,200);

    int i;

   //40% grau+40% porumb+20% floarea soarelui
   float venit=0;
   for(i=0;i<3;i++)
    venit=venit+v[i]->venit_suprafata();

    cout<<"venit="<<venit<<endl<<endl;


    //venit optim
   float max1=0,max2=0;    //se putea face cu sortare, dar ideea cu 2 maxime mi a venit prima:)
   int p=-1,q=-1,t=0;
   for(i=0;i<3;i++){
    t=t+i;
    if(v[i]->venit()>max1){
        max2=max1;
        q=p;
        max1=v[i]->venit();
        p=i;
    }
    else if(v[i]->venit()>max2&&v[i]->venit()<max1){
        max2=v[i]->venit();
        q=i;
   }
   }


   float venit_optim=0;
   t=t-p-q;

   v[p]->modif(600);
   v[q]->modif(300);
   v[t]->modif(100);

   venit_optim=venit_optim+v[p]->venit_suprafata();
   v[p]->modif(590);                                     //am modificat suprafata ptc se cere venitul optim pe 2 ani, si nu poate fii la fel aranjarea terenurilor
   venit_optim=venit_optim+v[p]->venit_suprafata();

   venit_optim=venit_optim+v[q]->venit_suprafata();
   v[q]->modif(310);
   venit_optim=venit_optim+v[q]->venit_suprafata();

   venit_optim=venit_optim+v[t]->venit_suprafata();
   venit_optim=venit_optim+v[t]->venit_suprafata();

   cout<<"venit_optim="<<venit_optim<<endl<<endl;

//venit optim orz

    v[3]=new Orz(4,1700,200);    //maximele gasite anterior corespund si cu acestea, doar se modifica suprafata pt ca totalul sa fie 1000

    v[p]->modif(600);
    v[q]->modif(100);
    v[t]->modif(100);

    float venit_optim1=0;
    venit_optim1=venit_optim1+v[p]->venit_suprafata();
    v[p]->modif(590);
    venit_optim1=venit_optim1+v[p]->venit_suprafata();

    venit_optim1=venit_optim1+v[q]->venit_suprafata();
    v[q]->modif(110);

    venit_optim1=venit_optim1+v[t]->venit_suprafata();
    venit_optim1=venit_optim1+v[t]->venit_suprafata();

    venit_optim1=venit_optim1+v[3]->venit_suprafata();
    venit_optim1=venit_optim1+v[3]->venit_suprafata();


     cout<<"venit_optim(orz)="<<venit_optim1<<endl<<endl;

//randament
    for(i=0;i<4;i++)
        v[i]->randament();
    cout<<endl;

//+30% productie pe Ha

    for(i=0;i<4;i++)
        v[i]->modif_tone();    //din nou se putea face sortare, dar am ales sa continui cu metoda maximelor

    float max3=0;
    max1=0;max2=0;
    int d;
    p=-1;q=-1;d=-1;t=0;

    for(i=0;i<4;i++){
        t=t+i;

        if(v[i]->venit()>max1){
            max3=max2;
            d=q;
            max2=max1;
            q=p;
            max1=v[i]->venit();
            p=i;
        }

        else if(v[i]->venit()<max1 && v[i]->venit()>max2){
            max3=max2;
            d=q;
            max2=v[i]->venit();
            q=i;
        }

        else if(v[i]->venit()<max2 && v[i]->venit()>max3){
            max3=v[i]->venit();
            d=i;
        }
    }

    t=t-p-q-d;

    v[p]->modif(600);
    v[q]->modif(200);
    v[d]->modif(100);
    v[t]->modif(100);

    float venit_optim2=0;

    venit_optim2=venit_optim2+v[p]->venit_suprafata();
    v[p]->modif(590);
    venit_optim2=venit_optim2+v[p]->venit_suprafata();

    venit_optim2=venit_optim2+v[q]->venit_suprafata();
    v[q]->modif(210);
    venit_optim2=venit_optim2+v[q]->venit_suprafata();

    venit_optim2=venit_optim2+v[d]->venit_suprafata();
    venit_optim2=venit_optim2+v[d]->venit_suprafata();

    venit_optim2=venit_optim2+v[t]->venit_suprafata();
    venit_optim2=venit_optim2+v[t]->venit_suprafata();

    cout<<"venit optim(+30% Ha)="<<venit_optim2<<endl<<endl;

//scade pretul cu 40%

    float venit1=0;

    for(i=0;i<4;i++){
        v[i]->modif_pret();
        venit1=venit1+v[i]->venit_suprafata();}

    v[p]->modif(600);
    v[q]->modif(200);

    for(i=0;i<4;i++){
        venit1=venit1+v[i]->venit_suprafata();}


    cout<<"venit (+30% Ha;-40% pret)="<<venit1<<endl;

    for(i=0;i<4;i++)
        delete v[i];
    delete []v;

    return 0;
}

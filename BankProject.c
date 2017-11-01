#include <iostream>

using namespace std;

int main()
{
    int pin;
int choisir;
int solde=1000;
int montant;
int montantverse;
int correct=true;
while(pin !=12345){
cout <<"entrer votre pin:\n";
cin>>pin;}

do{
    cout<<"\n1.demande solde "<<endl;
    cout<<"2.retrait argent "<<endl;
    cout<<"3.verser argent "<<endl;
    cout<<"4.quiter \n"<<endl;

 cout<<"chosir dans le menu :";
 cin>>choisir;

 switch(choisir){
 case 1:
    cout<<"votre solde est : "<< solde <<"dhs "<<endl;
    break;
 case 2:
    cout<<"choisir le montant a tirer :" ;
    cin>>montant;
 if(montant>solde){
    cout<<"votre solde est insuffisante "<<endl;
 }else{
    solde=solde-montant;}

    cout<<"votre solde est : "<< solde <<"dhs"<<endl;
    break;

 case 3:
    cout<<"enter le montant a verser :"<<endl;
    cin>>montantverse;
    solde=solde+montantverse;
    cout<<"votre solde est : "<< solde <<"dhs"<<endl;
    break;
 case 4:
    cout<<"------------merci pour votre viste --------------------"<<endl;
    correct=false;
    break;
 default:
    cout<<"votre demande est indisponible "<<endl;
    break;


}
}while (correct!=false);

    return 0;
}

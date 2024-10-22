#include <iostream>

using namespace std;
//declaration de classe
class Voiture{
   string marque;
   string modele;
   int annee;
   float kilometrage;
   float vitesse;
   public :
   //declaration des constructeurs
   Voiture()
   {
    marque="dacia";
    modele="duster";
    annee=2016;
    kilometrage=90.5;
    vitesse=120.0;
   }
   Voiture(string ma , string mo , int ann , float k , float v){
      marque=ma;
      modele=mo;
      annee=ann;
      kilometrage=k;
      vitesse=v;
   }
   //declaration des methodes
   float accelerer( float v){
    vitesse+=v;
    cout << "methode accelerer :" <<vitesse<<endl;
    return vitesse;
   }

   float freiner( float v){
    if(vitesse<v){
       cout<<"la vitesse est null"<<endl;
       vitesse =0;
    }
    else{
      vitesse-=v;
    }
      cout << "methode freiner :" <<vitesse<<endl;
      return vitesse;  
   }

   void afficherInfo(){
     cout<<"Marque:"<<marque<<endl;
     cout<<"Modele:"<<modele<<endl;
     cout<<"Annee:"<<annee<<endl;
     cout<<"Kilométrage:"<<kilometrage<<endl;
     cout<<"Vitesse:"<<vitesse<<endl;
   }
   float avancer(float distance){
    kilometrage+=distance;
    cout << "methode avancer :" <<kilometrage<<endl;
    return kilometrage;
   }
   //declaration de destructeur
   ~Voiture(){
    cout << "la voiture est détruite !!";
   }
};
// declaration de la fonction main
 int main(){
    Voiture voit;
    Voiture voit2("toyota","corolla",2019,60.5,150.7);
    voit2.afficherInfo();
    voit2.accelerer(180.6);
    voit2.freiner(200.3);
    voit2.avancer(36.4);

    return 0;
 }
#include <iostream>

using namespace std;

int main()
{ int sifra;
    double cena_sa_PDV,
    broj_jela,
    ukupna_cena_sa_PDV,
    sledeca_porudzbina,
    cena_bez_PDV,
    za_sve_narudzbe,
    porez,
    ukupan_porez,
    ukupna_cena_bez_PDV,
    uplaceno,
    kusur,
    novi_racun,
    ukupna_zarada,
    racun;
   
const double stopa_poreza=0.2;

   
   do{
       
   do{  
    cout<<" Restoran Kod Fande"<<endl;
    cout<<"*********************"<<endl;
    cout<<" Odaberite jelo:"<<endl;
    cout<<"sifra  jelo    cena(bez pdv)"<<endl;
    cout<<" 1    topli sendvic  300"<<endl;
    cout<<" 2       pizza       500"<<endl;
    cout<<" 3      dorucak      350"<<endl;
    cout<<" 4     belo meso     300"<<endl;
    cout<<"--------Dezerti---------"<<endl;
    cout<<" 5      trilece      250"<<endl;
    cout<<" 6      baklava      180"<<endl;
    cout<<" 7      puding       150"<<endl;
    cout<<"----------Pica----------"<<endl;
    cout<<" 8       cola        160"<<endl;
    cout<<" 9       fanta       150"<<endl;
    cout<<" 10      kisela      130"<<endl;
    cout<<" 11     mineralna    130"<<endl;
    cin>>sifra;
        switch(sifra) {
       
        case 1:cena_bez_PDV=300;
        break;
        case 2:cena_bez_PDV=500;
        break;
        case 3:cena_bez_PDV=350;
        break;
        case 4:cena_bez_PDV=300;
        break;
        case 5:cena_bez_PDV=250;
        break;
        case 6:cena_bez_PDV=180;
        break;
        case 7:cena_bez_PDV=150;
        break;
        case 8:cena_bez_PDV=160;
        break;
        case 9:cena_bez_PDV=150;
        break;
        case 10:cena_bez_PDV=130;
        break;
        case 11:cena_bez_PDV=130;
        break;
        }
    
     porez=cena_bez_PDV*stopa_poreza;
     cena_sa_PDV=porez+cena_bez_PDV;
   cout<<"cena jela bez poreza je:"<<cena_bez_PDV<<endl;
    cout<<"cena jela sa porezom je:"<<cena_sa_PDV<<endl;
    ukupna_cena_bez_PDV+=cena_bez_PDV;
    ukupan_porez+=porez;
    ukupna_cena_sa_PDV+=cena_sa_PDV;
    ++broj_jela;
    cout<<"Dali imate jos porudzbina(0 ako nemate,1 ako imate)"<<endl;
    cin>>sledeca_porudzbina;
    
    
    }

while (sledeca_porudzbina);
cout<<"--------------------"<<endl;
cout<<"Cena bez PDV je:"<<ukupna_cena_bez_PDV<<endl;
cout<<"Porez :"<<ukupan_porez<<endl;
cout<<"Ukupan broj jela je:"<<broj_jela<<endl;
cout<<"-------------------------"<<endl;
cout<<"Za uplatu:"<<ukupna_cena_sa_PDV<<endl;
cout<<"Uplaceno:";
cin>>uplaceno;
    broj_jela=0;
    ukupan_porez=0;
     ukupna_cena_bez_PDV=0;
  
if(uplaceno>ukupna_cena_sa_PDV){
    kusur=uplaceno - ukupna_cena_sa_PDV;
    cout<<"Kusur:"<<kusur<<endl;
}
else{
    kusur=ukupna_cena_sa_PDV - uplaceno;
    cout<<"Trebate dodati jos:"<<kusur<<endl;
   
}
   cout<<"Zelite li da zatvorite kasu 0=da,1=ne:"<<endl<<endl;
   cin>>novi_racun;
   ukupna_zarada+=ukupna_cena_sa_PDV;
   ++racun;
   ukupna_cena_sa_PDV=0;
  
   }
 while(novi_racun);
 cout<<"Danasnja zarada:"<<ukupna_zarada<<endl;
 cout<<"Izdato je:"<<racun<<" racuna."<<endl;

    return 0;
}

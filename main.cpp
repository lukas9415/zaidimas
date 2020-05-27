#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;


int monetos, hp, energija, jega, patirtis;
string vardas;
string user;

struct Kovotojai
{
    string Vardas;
    int hp;
    int energija;
    int jega;
    int monetos;
}M[5];

void treniruote()
{
    int tren;
    string patvirt;
    cout<<"Pasirinkite treniruotes tipa: "<<endl;
    cout<<"1. Lengva treniruote"<<endl;
    cout<<"2. Sunki treniruote"<<endl;
    cin>>tren;
    switch(tren)
    {
    case 1:
        system("CLS");
        cout<<"Treniruojamasi."<<endl;
        _sleep(1000);
        system("CLS");
        cout<<"Treniruojamasi.."<<endl;
        _sleep(1000);
        system("CLS");
        cout<<"Treniruojamasi..."<<endl;

        if(user=="1")
        {

            if(energija>=10)
            {
            jega=jega+5;
            energija=energija-10;
            }
            else
            {
                cout<<"Nepakanka energijos, ar norite pradeti treniruote ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                jega=jega+5;
                hp=hp-10;
                }
                else break;
            }

        }

        if(user=="2")
        {

            if(energija>=15)
            {
            jega=jega+3;
            energija=energija-15;
            }
            else
            {
                cout<<"Nepakanka energijos, ar norite pradeti treniruote ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                jega=jega+3;
                hp=hp-20;
                }
                else break;
            }

        }

        if(user=="3")
        {

            if(energija>=40)
            {
            jega=jega+2;
            energija=energija-25;
            }
            else
            {
                cout<<"Nepakanka energijos, ar norite pradeti treniruote ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                jega=jega+1;
                hp=hp-40;
                }
                else break;
            }

        }
    }

}

void poilsis()
{
system("CLS");
        cout<<"Ilsites."<<endl;
        _sleep(1000);
        system("CLS");
        cout<<"Ilsites.."<<endl;
        _sleep(1000);
        system("CLS");
        cout<<"Ilsites..."<<endl;


                if(user=="1")
        {
            if(energija>70)
            {
                energija=100;
            }
            else
            {
            energija=energija+30;
            }
        }

        if(user=="2")
        {
            if(energija>80)
            {
                energija=100;
            }
            else
            {
            energija=energija+20;
            }
        }

        if(user=="3")
        {
            if(energija>90)
            {
                energija=100;
            }
            else
            {
            energija=energija+10;
            }
        }
}

void Herojus()
{
    cout<<"Jusu sukurtas herojus"<<endl;
    cout<<"------------"<<endl;
    cout<<"Vardas: "<<vardas<<endl;
    cout<<"Gyvybes: "<<hp<<endl;
    cout<<"Energija: "<<energija<<endl;
    cout<<"Monetos: "<<monetos<<endl;
    cout<<"Jega: "<<jega<<endl;
    cout<<"------------"<<endl;
}

void zaidimas()
{
    int choice;
    cout<<"Sveiki atvyke i Kovotoju Sala"<<endl;
    cout<<"Norinti isjugnti zaidima iveskite Q"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<endl;
    cout<<"Pasirinkite sunkumo lygi:"<<endl;
    cout<<"1. Lengvas"<<endl;
    cout<<"2. Vidutinis"<<endl;
    cout<<"3. Sunkus"<<endl;
    cin >> user;

    if (user=="1")hp = 80, energija = 100, monetos = 30, jega = 10;
    if (user=="2")hp = 50, energija = 80, monetos = 15, jega = 7;
    if (user=="3")hp = 30, energija = 50, monetos = 10, jega = 5;
    system("CLS");
    cout<<"Iveskite savo herojaus varda: "<<endl;
    cin>>vardas;
    system("CLS");
        M[5].Vardas = vardas;
        M[5].hp = hp;
        M[5].energija = energija;
        M[5].jega = jega;
        M[5].monetos = monetos;

    cout<<"Jusu sukurtas herojus"<<endl;
    cout<<"------------"<<endl;
    cout<<"Vardas: "<<vardas<<endl;
    cout<<"Gyvybes: "<<hp<<endl;
    cout<<"Energija: "<<energija<<endl;
    cout<<"Monetos: "<<monetos<<endl;
    cout<<"Jega: "<<jega<<endl;
    cout<<"------------"<<endl;
    system("pause");
    system("CLS");

    cout<<"Gyvenate uzdaroje saloje, kur yra isigaliojusios gana keistos gyvenimo normos."<<endl;
    cout<<"Saloje vyksta kovos, geriausias kovotojas kontroliuoja visa salos gyvenima."<<endl;
    cout<<"Siuo metu geriausias kovotojas yra "<<M[0].Vardas<< ", kurio deka visi salos gyventojai yra sukaustyti baimes."<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Zaidimo tikslas: "<<endl;
    cout<<"Tapkite geriausiu kovotoju ir perimkite salos kontrole."<<endl;
    cout<<endl;
    cout<<endl;
    system("pause");
    system("CLS");
    int test=0;


    while(test==0)
    {
        if(hp<=0)
        {
            cout<<"Pralaimejote zaidima"<<endl;
            test=1;
        }
        else{
    cout<<endl;
    cout<<endl;
    cout<<"----------------------------------|--------------------------------------------------------------------| "<<endl;
    cout<<"Galimi veiksmai-------------------| Gyvybes: "<<hp<<" | Energija: "<<energija<<" | Jega: "<<jega<<" | Monetos: "<<monetos<<" | Patirtis: "<<patirtis<<" | " <<endl;
    cout<<"----------------------------------|--------------------------------------------------------------------| "<<endl;
    cout<<"1. ...Prideti"<<endl;
    cout<<"2. Perziureti inventoriu||NERA"<<endl;
    cout<<"3. Pirkti/parduoti daiktus||NERA"<<endl;
    cout<<"4. Perziureti kovotoju sarasa"<<endl;
    cout<<"5. Treniruotis"<<endl;
    cout<<"6. Ilsetis"<<endl;
    cout<<"----------------------------------"<<endl;
        cin>>choice;
    switch(choice)
    {
    case 0:
        {
            test = 1;
        }
    case 1:
        {

            break;
        }
    case 2:
        {
            break;
        }
    case 3:
        {
            break;
        }
    case 4:
        {
            system("CLS");
            cout<<"Kovotoju sarasas"<<endl;
            for (int i = 0; i <= 5; i++) {
            cout <<i+1<<" "<< M[i].Vardas<<" ";
            cout << "Gyvybes: " << M[i].hp<<" ";
            cout << "Energija: " << M[i].energija<<" ";
            cout << "Jega: " << M[i].jega<<" "<<endl;;
            }
            break;
        }
    case 5:
        {
            system("CLS");
            treniruote();
            break;
        }
    case 6:
        {
            system("CLS");
            poilsis();
            break;
        }

    }

    }

    }




}






int main() {
    monetos = 0;
    hp = 0;
    energija = 0;
    jega = 0;
    patirtis = 0;

    ifstream fin("Priesai.txt");

    for (int i = 0; i < 5; i++) {
            fin >> M[i].Vardas;
            fin >> M[i].hp;
            fin >> M[i].energija;
            fin >> M[i].jega;
            fin >> M[i].monetos;
    }
/*
        for (int i = 0; i < 1; i++) {
            cout << "Vardas: " << M[i].Vardas<<endl;
            cout << "Gyvybes: " << M[i].hp<<endl;
            cout << "Energija: " << M[i].energija<<endl;
            cout << "Jega: " << M[i].jega<<endl;
            cout << "Monetos: " << M[i].monetos<<endl;
    }
*/

    zaidimas();
   /* while (user!="Q" || user!="q")
    {
        user="";
    }
    return 0;
    */
}

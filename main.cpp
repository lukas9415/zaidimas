#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>

using namespace std;


int monetos, hp, energija, jega, patirtis;
int level=1;

int arTreniravosi=0;
int arDirbo=0;

int kasykla=0;
int valytojas=0;
int apsauginis=0;
int vairuotojas=0;
int programuotojas=0;


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
    arTreniravosi = 1;
    int tren;
    string patvirt;
    cout<<"Pasirinkite treniruotes tipa: "<<endl;
    cout<<"1. Lengva treniruote"<<endl;
    cout<<"2. Sunki treniruote"<<endl;
    cin>>tren;
    switch(tren)
    {
    case 1:
        {
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
            jega=jega+3;
            energija=energija-10;
            cout<<"Jusu jega padidejo +3, -10 energijos"<<endl;
            system("pause");
            }
            else
            {
                cout<<"Nepakanka energijos, ar norite testi treniruote ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                jega=jega+3;
                hp=hp-10;
                cout<<"Jusu jega padidejo +3, -10 gyvybes"<<endl;
                system("pause");
                }
                else break;
            }

        }

        if(user=="2")
        {

            if(energija>=15)
            {
            jega=jega+2;
            energija=energija-15;
            cout<<"Jusu jega padidejo +2, -15 energijos"<<endl;
            system("pause");
            }
            else
            {
                cout<<"Nepakanka energijos, ar norite testi treniruote ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                jega=jega+2;
                hp=hp-20;
                cout<<"Jusu jega padidejo +2, -20 gyvybes"<<endl;
                system("pause");
                }
                else break;
            }

        }

        if(user=="3")
        {

            if(energija>=40)
            {
            jega=jega+1;
            energija=energija-25;
            cout<<"Jusu jega padidejo +1, -25 energijos"<<endl;
            system("pause");
            }
            else
            {
                cout<<"Nepakanka energijos, ar norite testi treniruote ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                jega=jega+1;
                hp=hp-30;
                cout<<"Jusu jega padidejo +1, -30 gyvybes"<<endl;
                system("pause");
                }
                else break;
            }

        }
        break;
    }
        case 2:
            {
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

            if(energija>=30)
            {
            jega=jega+8;
            energija=energija-30;
            cout<<"Jusu jega padidejo +8, -30 energijos"<<endl;
            system("pause");
            }
            else
            {
                cout<<"Nepakanka energijos, ar norite testi treniruote ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                jega=jega+8;
                hp=hp-10;
                cout<<"Jusu jega padidejo +8, -10 gyvybes"<<endl;
                system("pause");
                }
                else break;
            }

        }

        if(user=="2")
        {

            if(energija>=40)
            {
            jega=jega+3;
            energija=energija-40;
            cout<<"Jusu jega padidejo +3, -40 energijos"<<endl;
            system("pause");
            }
            else
            {
                cout<<"Nepakanka energijos, ar norite testi treniruote ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                jega=jega+3;
                hp=hp-40;
                cout<<"Jusu jega padidejo +3, -40 gyvybes"<<endl;
                system("pause");
                }
                else break;
            }

        }

        if(user=="3")
        {

            if(energija>=50)
            {
            jega=jega+2;
            energija=energija-50;
            cout<<"Jusu jega padidejo +2, -50 energijos"<<endl;
            system("pause");
            }
            else
            {
                cout<<"Nepakanka energijos, ar norite testi treniruote ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                jega=jega+2;
                hp=hp-50;
                cout<<"Jusu jega padidejo +2, -50 gyvybes"<<endl;
                system("pause");
                }
                else break;
            }

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
        arTreniravosi = 0;
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

void issukis()
{
            int pasirinkimas;
            for (int i = 0; i < 5; i++) {
            cout <<"["<<i+1<<"]"<<" "<< M[i].Vardas<<" ";
            cout << "Gyvybes: " << M[i].hp<<" ";
            cout << "Energija: " << M[i].energija<<" ";
            cout << "Jega: " << M[i].jega<<" "<<endl;;
            }
            cout<<"------------------------------------"<<endl;
            cout<<"Kuriam kovotojui norite mesti issuki?"<<endl;
            cin>>pasirinkimas;
}

void darbas()
{
    if(kasykla==0 && valytojas==0 && apsauginis==0 && vairuotojas==0 && programuotojas==0)
    {
    int work;
    cout<<"Jusu patirtis: "<<patirtis<<endl;
    cout<<endl;
    cout<<"Kur norite isidarbinti: "<<endl;
    cout<<"[1] Kasykla (Reikalinga patirtis: 0)"<<endl;
    cout<<"[2] Valytojas (Reikalinga patirtis: >=1000)"<<endl;
    cout<<"[3] Apsauginis (Reikalinga patirtis: >=2500)"<<endl;
    cout<<"[4] Vairuotojas (Reikalinga patirtis: >=5000)"<<endl;
    cout<<"[5] Programuotojas (Reikalinga patirtis: >=10000)"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"[0] Grizti atgal"<<endl;
    cin>>work;
    switch(work)
    {
    case 0:
        {
            system("CLS");
            break;
        }
    case 1:
        {
            if(patirtis>=0)
            {
            cout<<"Isidarbinote kasykloje"<<endl;
            cout<<endl;
            kasykla=1;
            system("pause");
            system("CLS");
            }
            else
            {
                cout<<"Nepakanka patirties, nugalekite kovotojus ir dirbkite kad jos gautumete"<<endl;
                cout<<endl;
                system("pause");
                system("CLS");
            }
            break;
        }
    case 2:
        {
            if(patirtis>=1000)
            {
                cout<<"Isidarbinote valytoju"<<endl;
                cout<<endl;
                valytojas=1;
                system("pause");
                system("CLS");
            }
            else
            {
                cout<<"Nepakanka patirties, nugalekite kovotojus ir dirbkite kad jos gautumete"<<endl;
                cout<<endl;
                system("pause");
                system("CLS");
            }
            break;
        }
    case 3:
        {
            if(patirtis>=2500)
            {
                cout<<"Isidarbinote apsauginiu"<<endl;
                cout<<endl;
                apsauginis=1;
                system("pause");
                system("CLS");
            }
            else
            {
                cout<<"Nepakanka patirties, nugalekite kovotojus ir dirbkite kad jos gautumete"<<endl;
                cout<<endl;
                system("pause");
                system("CLS");
            }
            break;
        }
    case 4:
        {
            if(patirtis>=5000)
            {
                cout<<"Isidarbinote vairuotoju"<<endl;
                cout<<endl;
                vairuotojas=1;
                system("pause");
                system("CLS");
            }
            else
            {
                cout<<"Nepakanka patirties, nugalekite kovotojus ir dirbkite kad jos gautumete"<<endl;
                cout<<endl;
                system("pause");
                system("CLS");
            }
            break;
        }
    case 5:
        {
            if(patirtis>10000)
            {
                cout<<"Isidarbinote programuotoju"<<endl;
                cout<<endl;
                programuotojas=1;
                system("pause");
                system("CLS");
            }
            else
            {
                cout<<"Nepakanka patirties, nugalekite kovotojus ir dirbkite kad jos gautumete"<<endl;
                cout<<endl;
                system("pause");
                system("CLS");
            }
            break;
        }
    default:
        {
            cout<<"Tokio pasirinkimo nera"<<endl;
        }
    }
    }

    else
    {
        string patvirt;
        system("CLS");
        cout<<"Dirbama."<<endl;
        _sleep(1000);
        system("CLS");
        cout<<"Dirbama.."<<endl;
        _sleep(1000);
        system("CLS");
        cout<<"Dirbama..."<<endl;

        if(kasykla==1)
        {

            if(energija>=20)
            {
            //----------------------------------
            int temp;
            temp=monetos;
            monetos=monetos+rand() % 10+1;
            energija=energija-20;
            //----------------------------------
            int temp2;
            temp2=patirtis;
            patirtis=patirtis+rand() %100+1;
            //----------------------------------


            cout<<endl;
            cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -20 energijos"<<endl;
            cout<<"--------------------------------------------------------"<<endl;
            cout<<"Gavote "<<patirtis-temp2<<" patirties."<<endl;
            system("pause");
            }
            else
            {
                int temp;
                cout<<"Nepakanka energijos, ar norite testi darba ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                temp=monetos;
                monetos=monetos+rand() % 10+1;
                energija=0;
                hp=hp-10;
                cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -10 gyvybes"<<endl;
                system("pause");
                }
            }
            system("CLS");
        }

        if(valytojas==1)
        {

            if(energija>=30)
            {
            //----------------------------------
            int temp;
            temp=monetos;
            monetos=monetos+rand() % 100+1;
            energija=energija-30;
            //----------------------------------
            int temp2;
            temp2=patirtis;
            patirtis=patirtis+rand() %200+1;
            //----------------------------------


            cout<<endl;
            cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -30 energijos"<<endl;
            cout<<"--------------------------------------------------------"<<endl;
            cout<<"Gavote "<<patirtis-temp2<<" patirties."<<endl;
            system("pause");
            }
            else
            {
                int temp;
                cout<<"Nepakanka energijos, ar norite testi darba ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                temp=monetos;
                monetos=monetos+rand() % 100+1;
                energija=0;
                hp=hp-15;
                cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -15 gyvybes"<<endl;
                system("pause");
                }
            }
            system("CLS");
        }

        if(apsauginis==1)
        {

            if(energija>=35)
            {
            //----------------------------------
            int temp;
            temp=monetos;
            monetos=monetos+rand() % 500+1;
            energija=energija-35;
            //----------------------------------
            int temp2;
            temp2=patirtis;
            patirtis=patirtis+rand() %500+1;
            //----------------------------------


            cout<<endl;
            cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -35 energijos"<<endl;
            cout<<"--------------------------------------------------------"<<endl;
            cout<<"Gavote "<<patirtis-temp2<<" patirties."<<endl;
            system("pause");
            }
            else
            {
                int temp;
                cout<<"Nepakanka energijos, ar norite testi darba ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                temp=monetos;
                monetos=monetos+rand() % 500+1;
                energija=0;
                hp=hp-20;
                cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -20 gyvybes"<<endl;
                system("pause");
                }
            }
            system("CLS");
        }

        if(vairuotojas==1)
        {

            if(energija>=40)
            {
            //----------------------------------
            int temp;
            temp=monetos;
            monetos=monetos+rand() % 1000+1;
            energija=energija-40;
            //----------------------------------
            int temp2;
            temp2=patirtis;
            patirtis=patirtis+rand() %1000+1;
            //----------------------------------


            cout<<endl;
            cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -40 energijos"<<endl;
            cout<<"--------------------------------------------------------"<<endl;
            cout<<"Gavote "<<patirtis-temp2<<" patirties."<<endl;
            system("pause");
            }
            else
            {
                int temp;
                cout<<"Nepakanka energijos, ar norite testi darba ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                temp=monetos;
                monetos=monetos+rand() % 1000+1;
                energija=0;
                hp=hp-30;
                cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -30 gyvybes"<<endl;
                system("pause");
                }
            }
            system("CLS");
        }

        if(programuotojas==1)
        {

            if(energija>=50)
            {
            //----------------------------------
            int temp;
            temp=monetos;
            monetos=monetos+rand() % 10000+1;
            energija=energija-50;
            //----------------------------------
            int temp2;
            temp2=patirtis;
            patirtis=patirtis+rand() %4000+1;
            //----------------------------------


            cout<<endl;
            cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -50 energijos"<<endl;
            cout<<"--------------------------------------------------------"<<endl;
            cout<<"Gavote "<<patirtis-temp2<<" patirties."<<endl;
            system("pause");
            }
            else
            {
                int temp;
                cout<<"Nepakanka energijos, ar norite testi darba ?(Prarasite gyvybes)"<<endl;
                cout<<"(T)aip | (N)e "<<endl;
                cin>>patvirt;
                if(patvirt=="T")
                {
                temp=monetos;
                monetos=monetos+rand() % 10000+1;
                energija=0;
                hp=hp-50;
                cout<<"Jus uzdirbote "<< monetos-temp<<" monetas, -50 gyvybes"<<endl;
                system("pause");
                }
            }
            system("CLS");
        }
    }

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
    if(patirtis>=1000 && level==1)
    {
        cout<<"Pasiekete 2 LYGI, atrakinote naujus darbus bei galite mesti issuki naujam kovotojui"<<endl;
        level=2;
    }
    if(patirtis>=2500 && level==2)
    {
        cout<<"Pasiekete 3 LYGI, atrakinote naujus darbus bei galite mesti issuki naujam kovotojui"<<endl;
        level=3;
    }
    if(patirtis>=5000 && level==3)
    {
        cout<<"Pasiekete 4 LYGI, atrakinote naujus darbus bei galite mesti issuki naujam kovotojui"<<endl;
        level=4;
    }
    if(patirtis>=10000 && level==4)
    {
        cout<<"Pasiekete 5 LYGI, atrakinote naujus darbus bei galite mesti issuki paskutiniam kovotojui"<<endl;
        level=5;
    }
    if(kasykla==1 || valytojas==1 || apsauginis==1 || vairuotojas==1 || programuotojas==1)
    {
        cout<<"\t\t\t\t  | Darbo vieta: ";
        if(kasykla==1) cout<<"Kasykla";
        if(valytojas==1) cout<<"Valytojas";
        if(apsauginis==1) cout<<"Apsauginis";
        if(vairuotojas==1) cout<<"Vairuotojas";
        if(programuotojas==1) cout<<"Programuotojas";
        cout<<endl;
    }
    cout<<"----------------------------------|--------------------------------------------------------------------| "<<endl;
    cout<<"Galimi veiksmai-------------------| Gyvybes: "<<hp<<" | Energija: "<<energija<<" | Jega: "<<jega<<" | Monetos: "<<monetos<<" | Patirtis: "<<patirtis<<" | " <<endl;
    cout<<"----------------------------------|--------------------------------------------------------------------| "<<endl;
    cout<<"[1] ...Prideti"<<endl;
    cout<<"[2] Perziureti inventoriu||NERA"<<endl;
    cout<<"[3] Pirkti/parduoti daiktus||NERA"<<endl;
    cout<<"[4] Perziureti kovotoju sarasa"<<endl;
    cout<<"[5] Treniruotis"<<endl;
    cout<<"[6] Ilsetis"<<endl;
    cout<<"[7] Mesti issuki"<<endl;
    cout<<"[8] Darbas"<<endl;
    cout<<"----------------------------------"<<endl;
        M[5].hp = hp;
        M[5].energija = energija;
        M[5].jega = jega;
        M[5].monetos = monetos;
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
            for (int i = 0; i < 5; i++) {
            cout <<i+1<<" "<< M[i].Vardas<<" ";
            cout << "Gyvybes: " << M[i].hp<<" ";
            cout << "Energija: " << M[i].energija<<" ";
            cout << "Jega: " << M[i].jega<<" "<<endl;;
            }
            break;
        }
    case 5:
        {
            if(arTreniravosi==0)
            {
            system("CLS");
            treniruote();
            break;
            }
            else
            {
                system("CLS");
                cout<<"Jus jau atlikote treniruote, pailsekite"<<endl;
                break;
            }
        }
    case 6:
        {
            system("CLS");
            poilsis();
            break;
        }
    case 7:
        {
            system("CLS");
            issukis();
            break;

        }
    case 8:
        {
            if (kasykla==1 || valytojas==1 || apsauginis==1 || vairuotojas==1 || programuotojas==1)
            {
            system("CLS");
            int job;
            cout<<"Norite dirbti ar iseiti is darbo?"<<endl;
            cout<<"[1] Dirbti"<<endl;
            cout<<"[2] Iseiti is darbo"<<endl;
            cin>>job;
            switch(job)
            {
            case 1:
                {
                system("CLS");
                darbas();
                break;
                }
            case 2:
                {
                    system("CLS");
                    cout<<"Isejote is darbo, betkada galite sugrizti"<<endl;
                    kasykla=0, valytojas=0, apsauginis=0, vairuotojas=0, programuotojas=0;
                    break;
                }
            default:
                {
                    cout<<"Tokio pasirinkimo nera"<<endl;
                    break;
                }
            }
            }
            else
            {
            system("CLS");
            darbas();
            }
            break;
        }
    default:
        {
            system("CLS");
            cout<<"Tokio veiksmo negalima atlikti"<<endl;
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
    patirtis = 999;
    srand(time(NULL));
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

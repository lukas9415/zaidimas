
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>

using namespace std;


int monetos, hp, energija, jega, patirtis;
int level=1;

int arTreniravosi=0;

int fullHP=100;
int fullPOWER=100;

int kasykla=0;
int valytojas=0;
int apsauginis=0;
int vairuotojas=0;
int programuotojas=0;

int ac1, ac2, ac3, ac4, ac5, ac6, ac7, ac8, ac9, ac10, ac11, ac12, ac13, ac14, ac15=0;


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


struct Items
{
    char name[500];
    int hp;
    int jega;
    int monetos;

    int turi;
}I[13];

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
        ac1=1;
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
        ac2=1;
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
            if(energija>=70)
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
            if(energija>=80)
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
            if(energija>=90)
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
            int vibe=5;
            for (int i = 0; i < 5; i++) {
            cout <<"["<<vibe<<"]"<<" "<< M[i].Vardas<<" ";
            cout << "Gyvybes: " << M[i].hp<<" ";
            cout << "Energija: " << M[i].energija<<" ";
            cout << "Jega: " << M[i].jega<<" "<<endl;;
            vibe=vibe-1;
            }
            cout<<"------------------------------------"<<endl;
            cout<<"Kuriam kovotojui norite mesti issuki?"<<endl;
            cin>>pasirinkimas;
            switch(pasirinkimas)
            {
            case 1:
                {
                    if(level<1)
                    {
                        cout<<"Jusu lygis per mazas mesti issuki siam kovotojui"<<endl;
                        system("pause");
                        system("CLS");
                    }
                    else if (energija<80)
                    {
                        cout<<"Jusu energija turi buti bent 80 norint mesti issuki"<<endl;
                        cout<<"Pailsekite"<<endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        int test=0;
                        while(test==0)
                        {


                        system("CLS");
                        cout<<"Kovojate pries: "<<M[4].Vardas<<endl;
                        cout<<"-------------------------------------------------------------------------------------------------------- "<<endl;
                        cout<<vardas<<" ----| Gyvybes: "<<hp<<" | Jega: "<<jega<<endl;
                        cout<<"-------------------------------------------------------------------------------------------------------- "<<endl;
                        cout<<M[4].Vardas<<" ----| Gyvybes: "<<M[4].hp<<" | Jega: "<<M[4].jega<<endl;
                        cout<<"-------------------------------------------------------------------------------------------------------- "<<endl;
                        cout<<endl;
                        cout<<endl;
                        cout<<"Koki veiksma norite atlikti?"<<endl;
                        cout<<"[1] Pulti"<<endl;
                        cout<<"[2] Gintis"<<endl;
                        cout<<"[3] Pabegti"<<endl;
                        int veiksmas;
                        cin>>veiksmas;
                        switch(veiksmas)
                        {
                        case 1:
                            {
                                cout<<endl;
                                int temp;
                                int temp2;
                                int a,  b;
                                a=M[4].jega+1;
                                b=jega+1;
                                temp2=rand()%a;
                                temp=rand()%b;
                                M[4].hp = M[4].hp - temp;
                                cout<<"Padarete "<<temp<<" zalos"<<endl;
                                system("pause");
                                if(M[4].hp<0)
                                {
                                    cout<<endl;
                                    cout<<"Nugalejote priesininka!"<<endl;
                                    system("pause");
                                    int rare;
                                    rare=rand() % (12 - 8 + 1) + 8;
                                    if(I[rare].turi==1)
                                    {
                                        int kapeika;
                                        kapeika=rand()%500+1;
                                        cout<<endl;
                                        cout<<"Deja, negavote reto daikto"<<endl;
                                        cout<<"Gavote "<<kapeika<<" monetu"<<endl;
                                        monetos=monetos+kapeika;
                                        system("pause");
                                        system("CLS");
                                        test=1;
                                    }
                                    else
                                    {
                                    I[rare].turi=1;
                                    hp=hp+I[rare].hp;
                                    jega=jega+I[rare].jega;
                                    cout<<"Gavote reta daikta: "<<I[rare].name<<endl;
                                    patirtis=patirtis+900;
                                    system("pause");
                                    system("CLS");
                                    test=1;
                                    }
                                }
                                else
                                {
                                cout<<"Priesininkas jums padare "<<temp2<<" zalos"<<endl;
                                system("pause");
                                hp=hp-temp2;
                                if(hp<0)
                                {
                                    cout<<endl;
                                    cout<<"Jus buvote nugaletas priesininko"<<endl;
                                    cout<<"--------------------------------"<<endl;
                                    system("pause");
                                    cout<<"--------------------------------"<<endl;
                                    test=1;
                                }
                                }
                                break;
                            }
                        case 2:
                            {
                                int temp2;
                                int a;
                                a=M[4].jega+1;
                                temp2=rand()%a;
                                cout<<"Jus ginates"<<endl;
                                cout<<"------------------------------------------"<<endl;
                                cout<<"Priesininkas jums turejo padaryti "<<temp2<<" zalos"<<endl;
                                cout<<"Apsigynete, jums padare "<<temp2/3<<" zalos"<<endl;
                                system("pause");
                                hp=hp-(temp2/3);
                                if(hp<0)
                                {
                                    cout<<endl;
                                    cout<<"Jus buvote nugaletas priesininko"<<endl;
                                    cout<<"--------------------------------"<<endl;
                                    system("pause");
                                    cout<<"--------------------------------"<<endl;
                                    test=1;
                                }
                                break;
                            }
                        case 3:
                            {
                                if(hp>=10)
                                {
                                    cout<<"Pabegote nuo priesininko"<<endl;
                                    system("pause");
                                    test=1;
                                }
                                else
                                {
                                    cout<<"Jus turite per mazai gyvybes norint pabegti"<<endl;
                                    system("pause");
                                }
                                break;
                            }
                        }


                    }


                    }
                    break;
                }
            case 2:
                {
                    if(level<2)
                    {
                        cout<<"Jusu lygis per mazas mesti issuki siam kovotojui"<<endl;
                        system("pause");
                        system("CLS");
                    }
                    break;
                }
            case 3:
                {
                    if(level<3)
                    {
                        cout<<"Jusu lygis per mazas mesti issuki siam kovotojui"<<endl;
                        system("pause");
                        system("CLS");
                    }
                    break;
                }
            case 4:
                {
                    if(level<4)
                    {
                        cout<<"Jusu lygis per mazas mesti issuki siam kovotojui"<<endl;
                        system("pause");
                        system("CLS");
                    }
                    break;
                }
            case 5:
                {
                    if(level<5)
                    {
                        cout<<"Jusu lygis per mazas mesti issuki siam kovotojui"<<endl;
                        system("pause");
                        system("CLS");
                    }
                    break;
                }
            }
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
            ac3=1;
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
                ac4=1;
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
                ac5=1;
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
                ac6=1;
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
                ac7=1;
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
        if(energija<30) ac8=1;
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

void achievements()
{
    cout<<"Pasiekimai: (Dar neivykdyti - [ ], ivykdyti - [x]"<<endl;
    //------------------------------------------------------------
    cout<<endl;
    cout<<"Sporto pasiekimai:"<<endl;
    cout<<"-----------------------------"<<endl;
    //------------------------------------------------------------
    cout<<"Atliko lengva treniruote";//
    if (ac1==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Atliko sunkia treniruote";//
    if (ac2==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<endl;
    cout<<"Darbo pasiekimai:"<<endl;
    cout<<"-----------------------------"<<endl;
    //------------------------------------------------------------
    cout<<"Isidarbino kasykloje";//
    if (ac3==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Isidarbino valytoju";//
    if (ac4==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Isidarbino apsauginiu";//
    if (ac5==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Isidarbino vairuotoju";//
    if (ac6==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Isidarbino programuotoju";//
    if (ac7==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Dirbo turint maziau nei 30 energijos";//
    if (ac8==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<endl;
    cout<<"Kovotojo pasiekimai:"<<endl;
    cout<<"-----------------------------"<<endl;
    //------------------------------------------------------------
    cout<<"Pakele jega iki 20";//
    if (ac9==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Pakele jega iki 50";//
    if (ac10==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Baige zaidima pasirinkes sunku sunkumo lygi";
    if (ac11==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Baige zaidima pasirinkes vidutini sunkumo lygi";
    if (ac12==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Baige zaidima pasirinkes lengva sunkumo lygi";
    if (ac13==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<endl;
    cout<<"Ivairus pasiekimai:"<<endl;
    cout<<"-----------------------------"<<endl;
    //------------------------------------------------------------
    cout<<"Pirko daikta is parduotuves";
    if (ac14==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<"Pardave daikta parduotuveje";
    if (ac15==1) cout<<" [x]"<<endl;
    else cout<<" [ ]"<<endl;
    //------------------------------------------------------------
    cout<<endl;
    system("pause");
    system("CLS");
}

void inventorius()
{
        cout<<endl;
        cout<<"-------------------------------------------------------|-Lygis: "<<level<<"----|"<<endl;
        cout<<" | Gyvybes: "<<hp<<" | Energija: "<<energija<<" | Jega: "<<jega<<" | Monetos: "<<monetos<<" | Patirtis: "<<patirtis<<" |" <<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"Jusu inventorius:"<<endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------"<<endl;
        for (int i = 0; i < 13; i++) {
                if(I[i].turi==1)
                {
        cout <<"ID "<<i+1<<" | "<< I[i].name<<" | ";
        cout << "Gyvybes verte: " << I[i].hp<<" | ";
        cout << "Jegos verte: " << I[i].jega<<" "<<endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------"<<endl;
                }
            }


            system("pause");
            system("CLS");
}

void parduotuve()
{
    cout<<endl;
    cout<<"-------------------------------------------------------|-Lygis: "<<level<<"----|"<<endl;
    cout<<" | Gyvybes: "<<hp<<" | Energija: "<<energija<<" | Jega: "<<jega<<" | Monetos: "<<monetos<<" | Patirtis: "<<patirtis<<" | " <<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Sveiki atvyke i parduotuve, pasirinkite ka norite daryti"<<endl;
    cout<<"[1] Pirki daiktus"<<endl;
    cout<<"[2] Parduoti daiktus"<<endl;
    cout<<"[3] Iseiti"<<endl;
    int pard;
    cin>>pard;
    switch(pard)
    {
    case 1:
        {
           system("CLS");
            cout<<endl;
            cout<<"Parduodami daiktai:"<<endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------"<<endl;
            for (int i = 1; i < 8; i++) {
                if(I[i].turi==0)
                {
            cout <<"ID "<<i<<" | "<< I[i].name<<" | ";
            cout << "Gyvybes verte: " << I[i].hp<<" | ";
            cout << "Jegos verte: " << I[i].jega<<" | ";
            cout << "Kaina: " << I[i].monetos<<" monetu "<<endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------"<<endl;
                }
            }

            int cycle=0;

            while(cycle==0)
            {


            cout<<"Iveskite ID daikto, kuri norite pirkti"<<endl;
            int id;
            cin>>id;
            if(I[id].turi==1 || id>13 || id<1)
            {
                cout<<"Neteisingai ivestas daikto ID"<<endl;
            }
            else if(monetos-I[id].monetos<0) cout<<"Neturite pakankamai pinigu daiktui"<<endl;
            else{
                    ac14=1;
            cout << "-----------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<I[id].name<<" Sekmingai nupirktas. Isleidote "<<I[id].monetos<<" monetu. Gavote "<<I[id].hp<<" gyvybes ir "<<I[id].jega<<" jegos";
            hp=hp+I[id].hp;
            jega=jega+I[id].jega;
            monetos=monetos-I[id].monetos;
            I[id].turi=1;
            cout<<endl;
            system("pause");
            cycle=1;
            system("CLS");
            }


            }

            break;
        }
    case 2:
        {
            system("CLS");
            cout<<endl;
            cout<<"Jusu turimi daiktai:"<<endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------"<<endl;
            for (int i = 0; i < 13; i++) {
                if(I[i].turi==1)
                {
            cout <<"ID "<<i<<" | "<< I[i].name<<" | ";
            cout << "Gyvybes verte: " << I[i].hp<<" | ";
            cout << "Jegos verte: " << I[i].jega<<" | ";
            cout << "Kaina: " << I[i].monetos<<" monetu "<<endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------"<<endl;
                }
            }

            int cycle=0;

            while(cycle==0)
            {


            cout<<"Iveskite ID daikto, kuri norite parduoti"<<endl;
            int id;
            cin>>id;
            if(I[id].turi==0 || id>13 || id<0)
            {
                cout<<"Neteisingai ivestas daikto ID"<<endl;
            }
            else{
                    ac15=1;
            cout << "-----------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<I[id].name<<" Sekmingai parduotas. Uzsidirbote "<<I[id].monetos<<" monetu. Praradote "<<I[id].hp<<" gyvybes ir "<<I[id].jega<<" jegos";
            hp=hp-I[id].hp;
            jega=jega-I[id].jega;
            monetos=monetos+I[id].monetos;
            I[id].turi=0;
            cout<<endl;
            system("pause");
            cycle=1;
            system("CLS");
            }


            }
            break;
        }
    case 3:
        {
            system("CLS");
            break;
        }
    default:
        {
            system("CLS");
            cout<<"Nera tokio pasirinkimo"<<endl;
            break;
        }
    }
}

void zaidimas()
{
    int choice;
    cout<<"Sveiki atvyke i Kovotoju Sala"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<endl;
    cout<<"Pasirinkite sunkumo lygi:"<<endl;
    cout<<"1. Lengvas"<<endl;
    cout<<"2. Vidutinis"<<endl;
    cout<<"3. Sunkus"<<endl;
    cin >> user;

    if (user=="1")hp = 80, energija = 100, monetos = 999, jega = 10;
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

     fullHP=100;
                int sumaHP=0;
                int sumaJEGA=0;
                for(int i=0; i<13; i++)
                {
                    if(I[i].turi==1)
                    {
                    sumaHP=sumaHP+I[i].hp;
                    sumaJEGA=sumaJEGA+I[i].jega;
                    }
                }
                hp=hp+sumaHP;
                jega=sumaJEGA;


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
    if(jega>=20) ac9=1;
    if(jega>=50) ac10=1;
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

    cout<<"----------------------------------------------------------------------------------------|-Lygis: "<<level<<"----|"<<endl;
    cout<<"Galimi veiksmai-------------------| Gyvybes: "<<hp<<" | Energija: "<<energija<<" | Jega: "<<jega<<" | Monetos: "<<monetos<<" | Patirtis: "<<patirtis<<" | " <<endl;
    cout<<"----------------------------------|--------------------------------------------------------------------| "<<endl;
    cout<<"[1] ...Prideti(HTML vieta maybe)"<<endl;
    cout<<"[2] Perziureti inventoriu"<<endl;
    cout<<"[3] Parduotuve"<<endl;
    cout<<"[4] Perziureti kovotoju sarasa"<<endl;
    cout<<"[5] Treniruotis"<<endl;
    cout<<"[6] Ilsetis"<<endl;
    cout<<"[7] Mesti issuki"<<endl;
    cout<<"[8] Darbas"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"[9] Pasiekimai"<<endl;
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
            system("CLS");
            inventorius();
            break;
        }
    case 3:
        {
            system("CLS");
            parduotuve();
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
    case 9:
        {
            system("CLS");
            achievements();
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
    patirtis = 0;
    srand(time(NULL));
    ifstream fin("Priesai.txt");

    for (int i = 0; i < 5; i++) {
            fin >> M[i].Vardas;
            fin >> M[i].hp;
            fin >> M[i].energija;
            fin >> M[i].jega;
            fin >> M[i].monetos;
    }
    fin.close();


    ifstream fit("Items.txt");
        for (int i = 0; i < 13; i++) {
            fit >> I[i].name;
            fit >> I[i].hp;
            fit >> I[i].jega;
            fit >> I[i].monetos;
            fit >> I[i].turi;
    }
    fit.close();


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

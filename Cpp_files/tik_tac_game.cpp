#include <iostream> 

using std::cout;
using std::cin;
using std::string;

void druk(string plan,string *gdzie,const int pol,char znak){

    switch (pol)
    {
        default:
        cout << "\n Nieprawidlowy znak!";
        break;

    case 1:
        plan[1]=znak;
        break;
    case 2:
        plan[5]=znak;
        break;
    case 3:
        plan[9]=znak;
        break;
    case 4:
        plan[25]=znak;
        break;
    case 5:
        plan[29]=znak;
        break;
    case 6:
        plan[33]=znak;
        break;
    case 7:
        plan[49]=znak;
        break;
    case 8:
        plan[53]=znak;
        break;
    case 9:
        plan[57]=znak;
        break;
    
    
    }
    *gdzie=plan;
    cout << '\n' << plan;
}



int main(){

    int pole;
    
    string gracz[2];
    
    string plansza =" 1 | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | 8 | 9 "; // const char 60
    string *wsk = &plansza;
    cout << "Wprowadz nazwe gracza 1: ";
    cin >>gracz[0];
    cout << "\nWprowadz nazwe gracza 2: ";
    cin >> gracz[1];
    
    cout << plansza;


    for (int i = 0; i < 5; i++)
    {
    cout << "\nGracz " << gracz[0] << " (X)\n";
    cout << "Podaj numer pola: ";
    cin >> pole;
    druk(plansza,wsk,pole,'X');
    //cout << '\n' << plansza;


    if(((plansza[1]=='X'&&plansza[5]=='X'&&plansza[9]=='X') || (plansza[25]=='X'&&plansza[29]=='X'&&plansza[33]=='X') || (plansza[49]=='X'&&plansza[53]=='X'&&plansza[57]=='X') || (plansza[1]=='X'&&plansza[29]=='X'&&plansza[57]=='X') || (plansza[49]=='X'&&plansza[29]=='X'&&plansza[9]=='X') ))
    {
        cout << "\n--------------------\nWygrywa gracz " << gracz[0] <<"!";
        return 0;
    }



    if (i==4)
    {
        break;

    }
    cout << "\nGracz " << gracz[1] << " (O)\n";
    cout << "Podaj numer pola: ";
    cin >> pole;
    druk(plansza,wsk,pole,'O');
    //cout << '\n' << plansza;
    if(((plansza[1]=='O'&&plansza[5]=='O'&&plansza[9]=='O') || (plansza[25]=='O'&&plansza[29]=='O'&&plansza[33]=='O') || (plansza[49]=='O'&&plansza[53]=='O'&&plansza[57]=='O') || (plansza[1]=='O'&&plansza[29]=='O'&&plansza[57]=='O') || (plansza[49]=='O'&&plansza[29]=='O'&&plansza[9]=='O') ))
    {
        cout << "\n--------------------\nWygrywa gracz " << gracz[1] <<"!";
        return 0;
    }

    }
    
    cout << "\n--------------------\nNastapil remis!";

    







    return 0;
}
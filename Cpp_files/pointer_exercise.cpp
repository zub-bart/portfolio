#include <iostream>

using std::cout;
using std::cin;

int tabliczka(int *tb, int dod1, int dod2)
{
    int s;
    int *wsks = &s;
    int d;
    int *wskd = &d;
    
    int tab2d[0][0];
    //cout << "Oto wielkosc twojej tablicy: " << sizeof(tab2d);
    //int *wsk= &tab2d[0][0];
    //cout << wsk;
   
    

    return tab2d[d][s];

}
int main(){

    
    int d{};
    int s{};
    int tab[d][s];
    int *tab = new int( d * s );
    


    cout << "Podaj dlugosc tablicy: ";
    cin >> d;

    cout << "Podaj szerokosc tablicy: ";
    cin >> s;

    tabliczka(*tab,d,s);

    cout << "Oto wielkosc twojej tablicy: " << sizeof(tab);



    delete [] tab;
    return 0;
}
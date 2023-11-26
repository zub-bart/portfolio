#include <iostream>
#include <random>
#include <string>

using namespace std;

    default_random_engine silnik (92);
    uniform_int_distribution<int> losowa (0,1000); 



void wprowadz(int tab[],int ilosc)
{
     

    for (int i = 0; i < ilosc; i++)
    {
        tab[i]=losowa(silnik);
    }
    
    
}
void wydruk(int tablica[], int ile, string tekst)
    {
        cout << tekst;
    for ( int i=0; i<ile; i++)
        {
        cout << tablica[i];
        if(i==ile-1)
        {
            break;
        }
        cout << ",  ";
        }
    }
void sort(int tab[], int n1, int n2)
{
    int temp=tab[n1];
    tab[n1]=tab[n2];
    tab[n2]=temp;

}
int main(){

    
    
    

    //cout << losowa(silnik) <<'\n';
    //cout << losowa(silnik) <<'\n';
    //cout << "Podaj ilosc elementow dla tablicy: ";
    //cin >> ile;
    int tablica[20]{};


    
    wprowadz(tablica,20);
     
    
    wydruk(tablica,20," Oto elementy tablicy \n");
    
    sort(tablica,2,3);
    
    wydruk(tablica,20,"\n Oto elementy tablicy po zamianie \n");



    return 0;
}
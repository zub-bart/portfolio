#include <iostream>

using namespace std;

void sort(int tab[], int n1, int n2)
{
    int temp=tab[n1];
    tab[n1]=tab[n2];
    tab[n2]=temp;

}



int main(){
    
    int wielkosc;
    

    cout << "Podaj wielkosc zbioru: ";
    cin >> wielkosc;

    int zbior[wielkosc];
    //
    for(int i=0; i<wielkosc;i++)
    {
        
        cout << "Podaj " << i+1 << ". wartosc: ";
        cin >> zbior[i];
        //cout << "wielkosc " << i<<'\n';
    }
    cout << "Oto wartosci twojego zbioru przed sortowaniem\n";
    for (int e : zbior)
    {
        cout << e << "  ";
    }


    int licz{0};
    while (licz<zbior[wielkosc-1])
    {

        for (int i=0; i < wielkosc-1; i++)
    {
        if (zbior[i]>zbior[i+1])
        {
            sort(zbior,i,i+1);
        }
        
    }
    licz++;
    }
    
    
    
    
    //sort(zbior,2,3);



    cout << "\nOto wartosci twojego zbioru po sortowaniu\n";
    for (int e : zbior)
    {
        cout << e << "  ";
    }
    
    return 0;
}
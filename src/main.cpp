#include <iostream>
#include "UkladRownanLiniowych.hh"
#include "SWektor.h"
#include "rozmiar.h"
#include "LZespolona.hh"
#include "Macierz.hh"
using namespace std;



/*int main()
{
//SWektor<LZespolona,ROZMIAR> W1(11,11,11);
SWektor<LZespolona,ROZMIAR> W2;

    LZespolona l1;
    LZespolona l2;
    LZespolona l3;

*//*SMacierz<double, ROZMIAR> M1(W1,W2,W3);
SMacierz<double, ROZMIAR> M2(W1,W2,W3);
    SMacierz<double, ROZMIAR> M3;*//*

LZespolona L1(5,4);
LZespolona L2(1,2);
LZespolona L3(9,6);

    SWektor<LZespolona,ROZMIAR> W3(L1,L2,L3);
    SWektor<LZespolona,ROZMIAR> W4(L1, L2, L3);
    cout << endl << "Start programu " << endl << endl;
    cout << W2<< endl;
    cout << W4+W3<< endl;
    W3=W2;
    cout << W3;*/

    void Test_SzablonWektor_double()
    {
        cout << endl
             << " --------- Test klasy Wektor<double," << ROZMIAR << "> ----------" << endl
             << endl;

        SWektor<double,ROZMIAR>    W, W_wynik;

        for (unsigned int Ind = 0; Ind < ROZMIAR; ++Ind) {
            W[Ind] = Ind;
        }

        cout << "  Wyswietlenie wspolrzednych wektora: W" << endl
             << "        " << W << endl
             << endl;

        W_wynik = W*2;
        cout << "  Wyswietlenie wyniku: W*2" << endl
             << "        " << W_wynik << endl
             << endl;

        W_wynik = W*2-W;
        cout << "  Wyswietlenie wyniku: W-W*0.5" << endl
             << "        " << W_wynik << endl
             << endl;
    }
    void Test_SzablonWektor_LZespolona()
    {
        cout << endl
             << " --------- Test klasy Wektor<LZespolona," << ROZMIAR << "> ----------" << endl
             << endl;


        SWektor<LZespolona,ROZMIAR>    W, W_wynik;

        for (unsigned int Ind = 0; Ind < ROZMIAR; ++Ind) {
            W[Ind].re = Ind;      W[Ind].im = Ind;
        }

        cout << "  Wyswietlenie wspolrzednych wektora: W" << endl
             << "        " << W << endl
             << endl;
        W_wynik = W*2;
        cout << "  Wyswietlenie wyniku: W*2" << endl
             << "        " << W_wynik << endl
             << endl;

        W_wynik = W*2-W;
        cout << "  Wyswietlenie wyniku: W-W*0.5" << endl
             << "        " << W_wynik << endl
             << endl;
    }



    int main()
    {
        Test_SzablonWektor_double();
        Test_SzablonWektor_LZespolona();
    }


/*  UkladRownanLiniowych   UklRown;
    Wektor Wx;
    Wektor Wbledu;

    cout << endl << "Start programu " << endl << endl;
    cin >> UklRown;
    cout <<endl<< UklRown;

    cout << "Rozwiazanie x = (x1, x2, x3):" << endl;
    Wx = UklRown.Oblicz();
    cout << Wx << endl;

    Wbledu = UklRown.get_A() * Wx - UklRown.get_b();
    cout << "Wektor bledu: Ax-b = " << Wbledu << endl;
    cout << "Dlugosc wektora bledu: ||Ax-b|| = " << Wbledu.dlugosc();*/


/*
   return 0;
}
*/




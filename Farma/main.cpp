#include <iostream>

using namespace std;

int main()


{
     int a;
     int b;

    //Program liczy powierznie gospodarstwa McDonalda i dlugosc ogrodzenia

    cout << "Program liczy powierzchnie gospodarstwa McDonalda i dlugosc ogrodzenia" << endl;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    if((a>0)&&(b>0))
        cout << "Powierzchnia gospodarstwa wynosi: " << a*b << endl;
    if((a>0)&&(b>0))
        cout << "Dlugosc ogrodzenia wynosi: " << a+a+b << endl;
    else
        cout << "Blad danych";


    return 0;
}

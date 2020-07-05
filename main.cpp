#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int iSecret, iGhicire, count;

    srand(time(0));

    iSecret = rand()%100 + 1;

    iGhicire = 0;
    count = 0;

    while(iSecret != iGhicire)
    {
        cout << "Introduceti o valoare intreaga intre 1 si 100: " << endl;
        cin >> iGhicire;

        if(iSecret == iGhicire)
        {
            cout << "Numarul de incercari este: " << count + 1 << endl;
            break;
        }
        else if(iSecret > iGhicire)
        {
            cout << "Numarul secret e mai mare decat cel introdus!" << endl;
            count++;
        }

        else
        {
            cout << "Numarul secret e mai mic decat cel introdus" << endl;
            count++;
        }
    }
    return 0;
}

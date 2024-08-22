#include <iostream>
#include "rectangle.h"
using namespace std;

int main()
{
    Rectangle r;
    cout << "Enter le rectangle" << endl;
    r.Lis();
    r.Affiche();
    cout << "\nPerimetre = " << r.perimetre () << endl;
    cout << "\nSurface = " << r.surface () << endl;
    return 0;
}

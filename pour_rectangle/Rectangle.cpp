#include <iostream>
#include "rectangle.h"
using namespace std;

Rectangle :: Rectangle ()
{
    longueur = 0;
    largeur = 0;
}

Rectangle :: ~Rectangle ()
{

}

void Rectangle :: Lis ()
{
    cout << "Longueur : ", cin >> longueur;
    cout << "largeur : ", cin >> largeur;
}

void Rectangle :: Affiche ()
{
    int i, j;
    for (j=1; j<=largeur; j++){
        for (i=1; i<=longueur; i++)  cout << "_ ";
        cout << endl;
    }
}

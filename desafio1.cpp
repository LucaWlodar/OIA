#include <iostream>

using namespace std;

int zetadieta(int c, int p, int g)
{
    int bananas = (c + 26) / 27;
    int atunes = (p + 29) / 30;
    int gr_aceite = g;

    int calorias = bananas * 105 + atunes * 120 + gr_aceite * 9;

    return calorias;
}

int main()
{
    int c, p, g;
    cout << "Ingrese la cantidad de carbohidratos, proteínas y grasas en ese orden separados por espacios: ";
    cin >> c >> p >> g;

    int totalCalorias = zetadieta(c, p, g);
    cout << "La cantidad total de calorias es: " << totalCalorias << '\n';

    return 0;
}

#include <iostream>
#include <string>

using namespace std;
int sumasipar(int numero){
    if (numero % 2 == 0){
        numero ++;
    }
    return numero;
}
int main()    //  es la que primero se ejecuta y la que llama a las otras funciones 
{
    int numero;
    cout << "Ingrese un numero" << '\n';
    cin>>numero;
    cout<<"return: "<< sumasipar(numero)<<'\n';
    return 0;
}

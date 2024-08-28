//le valor entre 0 e 50, imprime resto da divisao desse numero
//por todos os antecessores maiores que 0

#include <iostream>

using namespace std;

void resto(int n)
{
    for(int i=n-1;i>0;i--)
        cout << "Resto da divisao de "<< n <<" por "<< i <<": "<< n%i << endl;
}

int main()
{
    int n; //valor entre 1 e 50
    
    cout << "Entrada: ";
    cin >> n;
    
    if(n <= 0)
        cout << "Valor invalido" << endl;
    else if(n > 50)
        cout << "Valor invalido" << endl;
    else
        resto(n);
}

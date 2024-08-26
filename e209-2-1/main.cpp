//le numero de laranjas compradas e imprime valor total da compra

#include <iostream>
#include <iomanip>

using namespace std;

void compra(int n)
{
    const double p1 = 0.80; //preco menos de uma duzia
    const double p2 = 0.65; //preco pelo menos doze
    cout << fixed << setprecision(2);
    
    if(n < 12)
    {
        cout << "Preco da unidade: R$" << p1 << endl;
        cout << "Preco total: R$" << n*p1 << endl;
    }
    else
    {
        cout << "Preco da unidade: R$" << p2 << endl;
        cout << "Preco total: R$" << n*p2 << endl;
    }
}

int main()
{
    int n; //numero de laranjas compradas
    
    cout << "Entrada: ";
    cin >> n;
    
    compra(n);
    
    return 0;
}

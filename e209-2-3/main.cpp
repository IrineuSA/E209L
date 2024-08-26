//recebe valor inteiro n, funcao recebe 5 valores inteiros n vezes,
//mostra quantos valores fora pares, impares, positivos e negativos
//cada uma das n vezes

#include <iostream>

using namespace std;

int main()
{
    int n; //quant de testes
    int m;
    vector<int> v1;
    
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int i=1;i<=5;i++)
        {
            cin >> m;
            v1.push_back(m);        
        }
    }
    for (auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << " ";

    
}

//recebe valor inteiro n, funcao recebe 5 valores inteiros n vezes,
//mostra quantos valores fora pares, impares, positivos e negativos
//cada uma das n vezes

#include <iostream>
#include <vector>

using namespace std;

void quant(int n)
{
    int m;
    vector<int> v1;
    int neg = 0;
    int pos = 0;
    int par = 0;
    int imp = 0;

    for(int i=0;i<n;i++)
    {
        for(int i=1;i<=5;i++)
        {
            cin >> m;
            v1.push_back(m);
        }
    }

    for (auto i = v1.begin(); i != v1.end(); ++i)
    {
        if(*i < 0)
            neg++;
        else pos++;
        if(*i % 2 == 0)
            par++;
        else imp++;
    }

    cout << "Quantidade de numeros pares: " << par << endl;
    cout << "Quantidade de numeros impares: " << imp << endl;
    cout << "Quantidade de numeros positivos: " << pos << endl;
    cout << "Quantidade de numeros negativos: " << neg << endl;
}

int main()
{
    int n; //quant de testes

    cin >> n;
    quant(n);

}

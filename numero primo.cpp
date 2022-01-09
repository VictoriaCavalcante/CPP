#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int a,i, conta;

    cin >> a;

    conta = 0;

    for (i=1 ; i<=a ; i++)
    {
        if(a%i == 0)
        {
            conta = conta + 1;
        }
    }
    if(conta == 2)
    {
        cout<<"O número é primo.";
    }
    else
    {
        cout<<"O número não é primo.";
    }

    getchar();

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

main()
{
    int X, i, aux;

    cin >> X;

    aux = 1;

    for(i=1 ; i<=X ; i++)
    {
        if(aux <= X)
        {
            cout << aux << endl;

            aux = aux + 2;
        }
    }

}

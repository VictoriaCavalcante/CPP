#include<bits/stdc++.h>

using namespace std;

main()
{
    int N[20], i, aux;

    for(i=0; i<20 ; i++)
    {
        cin >> N[i];
    }

    for(i=0 ; i<10 ; i++)
    {
        aux = N[i];

        N[i] = N[19 - i];

        N[19 - i] = aux;
    }

    for(i=0; i<20 ; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}

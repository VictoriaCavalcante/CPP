#include<bits/stdc++.h>

using namespace std;

main()
{
    int n, i, j, conta;

    long a;

    cin >> n;

    for(i=1 ; i<=n ; i++)
    {
        cin >> a;

        conta = 0;

        for (j=1 ; j<=a ; j++)
        {
            if(a%j == 0)
            {
                conta = conta + 1;
            }
        }
        if(conta == 2)
        {
            printf("%d eh primo\n", a);
        }
        else
        {
            printf("%d nao eh primo\n", a);
        }
    }

    return 0;
}

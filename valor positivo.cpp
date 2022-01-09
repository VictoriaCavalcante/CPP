#include<bits/stdc++.h>

using namespace std;

main()
{
    int i, conta=0;

    float n, media, contam=0.0;

    for(i=1 ; i<7 ; i++)
    {
        cin >> n;

        if(n>(-1.0))
        {
            conta = conta + 1;

            contam = contam + n;
        }

    }

    media = (float)contam/(float)conta;

    printf("%d valores positivos\n%.1f\n", conta, media);

    return 0;
}

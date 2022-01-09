#include<bits/stdc++.h>

using namespace std;

main()
{
    int N[10], i, a;

    cin >> a;

    N[0] = a;

    printf("N[0] = %d\n", a);

    for(i=1 ; i<10 ; i++)
    {
        N[i] = N[i-1] * 2;

        printf("N[%d] = %d\n", i, N[i]);

    }

    return 0;
}

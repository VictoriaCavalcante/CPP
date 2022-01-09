#include<bits/stdc++.h>

using namespace std;

main()
{
   int i, n, ant1, ant2, prox;

   cin >> n;

   ant1 = 0;

   ant2 = 1;

   cout << "0 1";

    for (i=1 ; i<(n-1) ; i++)
    {
        prox = ant1 + ant2;

        cout << " " << prox;

        ant1 = ant2;

        ant2 = prox;
    }

    cout << endl;

    return 0;
}

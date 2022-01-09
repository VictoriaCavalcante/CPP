#include<bits/stdc++.h>

using namespace std;

main()
{
    int n, f=1, i;

    cin >> n;

    for(i=n ; i>=1 ; i--)
    {
        f = f * i;
    }

    cout << f << endl;

    return 0;
}

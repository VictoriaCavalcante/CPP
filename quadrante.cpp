#include<bits/stdc++.h>

using namespace std;

main()
{
    int x, y;

    cin >> x >> y;

    while(x!=0 && y!=0)
    {
        if(x>0 && y>0)
        {
            cout << "primeiro" << endl;
        }
        else if(x>0 && y<0)
        {
            cout << "quarto" << endl;
        }
        else if(x<0 && y<0)
        {
            cout << "terceiro" << endl;
        }
        else
        {
           cout << "segundo" << endl;
        }

        cin >> x >> y;
    }

    return 0;
}

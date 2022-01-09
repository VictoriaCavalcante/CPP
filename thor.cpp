#include<bits/stdc++.h>

using namespace std;

main()
{
    int C, N, i;

    cin>>C;

    string nome[C];

    for(i=0 ; i<C ; i++)
    {
        cin>>nome[i];

        cin>>N;

        if(nome[i] == "Thor")
        {
           cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }

    return 0;
}

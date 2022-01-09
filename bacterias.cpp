#include<bits/stdc++.h>

using namespace std;

main()
{
    int n, i, j;

    cin>>n;

    string A, B;

    bool v = true;

    for(i=1 ; i<=n ; i++)
    {
        v = true;

        cin>>A>>B;

        if(B.size() <= A.size())
        {
            for(j=1 ; j<= B.size() ; j++)
            {
                if(B[B.size()- j] != A[A.size() - j])
                {
                    v = false;

                    break;
                }
            }

            if(v==true)
            {

                cout<<"encaixa"<<endl;
            }
            else
            {
                cout<<"nao encaixa"<<endl;
            }
        }
        else
        {
            cout<<"nao encaixa"<<endl;
        }
    }
    return 0;
}

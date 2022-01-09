#include<bits/stdc++.h>

using namespace std;

main()
{
    string O;

    float M[12][12], S, conta;

    int i, j;

    cin>>O;

    for(i=0 ; i<12 ; i++)
    {
        for(j=0 ; j<12 ; j++)
        {
            cin>>M[i][j];
        }
    }

    S = 0.0;

    if(O=="S")
    {
        for(i=0 ; i<12 ; i++)
        {
            for(j=0 ; j<12 ; j++)
            {
                if(j>i)
                {
                    S = S + M[i][j];
                }

            }
        }

        cout<<fixed<<setprecision(1)<<S<<endl;
    }
    else if(O=="M")
    {
        conta = 0.0;

        for(i=0 ; i<12 ; i++)
        {
            for(j=0 ; j<12 ; j++)
            {
                if(j>i)
                {
                    S = S + M[i][j];

                    conta = conta + 1.0;
                }
            }
        }
        cout<<fixed<<setprecision(1)<<S/conta<<endl;
    }

    return 0;
}

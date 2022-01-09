#include<bits/stdc++.h>

using namespace std;

main()
{
    int M[9][9], n, a, i, j, k, l;

    bool vm = true;

    cin>>n;

    for(a=1 ; a<=n ; a++)
    {
        for(i=0 ; i<9 ; i++)
        {
            for(j=0 ; j<9 ; j++)
            {
                cin>>M[i][j];
            }
        }
        //matriz A
        for(i=0 ; i<3 ; i++)
        {
            for(j=0 ; j<3 ; j++)
            {
                for(k=0 ; k<3 ; k++)
                {
                    for(l=0 ; l<3 ; l++)
                    {
                        do
                        {
                            if(i==k && j==k)
                            {
                                vm = true;
                            }
                            else if(M[i][j] == M[k][l])
                            {
                                vm = false;
                            }
                        }while(vm = true);
                    }
                }
            }
        }
        //matriz B
       for(i=0 ; i<3 ; i++)
        {
            for(j=3 ; j<6 ; j++)
            {
                for(k=0 ; k<3 ; k++)
                {
                    for(l=3 ; l<6 ; l++)
                    {
                        do
                        {
                            if(i==k && j==k)
                            {
                                vm = true;
                            }
                            else if(M[i][j] == M[k][l])
                            {
                                vm = false;
                            }
                        }while(vm = true);
                    }
                }
            }
        }
        //matriz C
        for(i=0 ; i<3 ; i++)
        {
            for(j=6 ; j<9 ; j++)
            {
                for(k=0 ; k<3 ; k++)
                {
                    for(l=6 ; l<9 ; l++)
                    {
                        do
                        {
                            if(i==k && j==k)
                            {
                                vm = true;
                            }
                            else if(M[i][j] == M[k][l])
                            {
                                vm = false;
                            }
                        }while(vm = true);
                    }
                }
            }
        }
        //matriz D
        for(i=3 ; i<6 ; i++)
        {
            for(j=0 ; j<3 ; j++)
            {
                for(k=3 ; k<6 ; k++)
                {
                    for(l=0 ; l<3 ; l++)
                    {
                        do
                        {
                            if(i==k && j==k)
                            {
                                vm = true;
                            }
                            else if(M[i][j] == M[k][l])
                            {
                                vm = false;
                            }
                        }while(vm = true);
                    }
                }
            }
        }
        //matriz E
        for(i=3 ; i<6 ; i++)
        {
            for(j=3 ; j<6 ; j++)
            {
                for(k=3 ; k<6 ; k++)
                {
                    for(l=3 ; l<6 ; l++)
                    {
                        do
                        {
                            if(i==k && j==k)
                            {
                                vm = true;
                            }
                            else if(M[i][j] == M[k][l])
                            {
                                vm = false;
                            }
                        }while(vm = true);
                    }
                }
            }
        }
        //matriz F
        for(i=3 ; i<6 ; i++)
        {
            for(j=6 ; j<9 ; j++)
            {
                for(k=3 ; k<6 ; k++)
                {
                    for(l=6 ; l<9 ; l++)
                    {
                        do
                        {
                            if(i==k && j==k)
                            {
                                vm = true;
                            }
                            else if(M[i][j] == M[k][l])
                            {
                                vm = false;
                            }
                        }while(vm = true);
                    }
                }
            }
        }
        //matriz G
        for(i=6 ; i<9 ; i++)
        {
            for(j=0 ; j<3 ; j++)
            {
                for(k=6 ; k<9 ; k++)
                {
                    for(l=0 ; l<3 ; l++)
                    {
                       do
                        {
                            if(i==k && j==k)
                            {
                                vm = true;
                            }
                            else if(M[i][j] == M[k][l])
                            {
                                vm = false;
                            }
                        }while(vm = true);
                    }
                }
            }
        }
        //matriz H
        for(i=6 ; i<9 ; i++)
        {
            for(j=3 ; j<6 ; j++)
            {
                for(k=6 ; k<9 ; k++)
                {
                    for(l=3 ; l<6 ; l++)
                    {
                        do
                        {
                            if(i==k && j==k)
                            {
                                vm = true;
                            }
                            else if(M[i][j] == M[k][l])
                            {
                                vm = false;
                            }
                        }while(vm = true);
                    }
                }
            }
        }
        //matriz I
        for(i=6 ; i<9 ; i++)
        {
            for(j=6 ; j<9 ; j++)
            {
                for(k=6 ; k<9 ; k++)
                {
                    for(l=6 ; l<9 ; l++)
                    {
                        do
                        {
                            if(i==k && j==k)
                            {
                                vm = true;
                            }
                            else if(M[i][j] == M[k][l])
                            {
                                vm = false;
                            }
                        }while(vm = true);
                    }
                }
            }
        }
        //linhas

        bool vl = true;

        for(i=0 ; i<9 ; i++)
        {
            for(j=0 ; j<9 ; j++)
            {
                for(k=0 ; k<9 ; k++)
                {
                    do
                    {
                        if(j==k)
                        {
                            vl = true;
                        }
                        else if(M[i][j] == M[i][k])
                        {
                            vl = false;
                        }
                    }while(vl = true);
                }
            }
        }

        //colunas

        bool vc = true;

        for(j=0 ; j<9 ; j++)
        {
            for(i=0 ; i<9 ; i++)
            {
                for(k=0 ; k<9 ; k++)
                {
                    do
                    {
                        if(i==k)
                        {
                            vc = true;
                        }
                        else if(M[i][j] == M[k][j])
                        {
                            vc = false;
                        }
                    }while(vc = true);
                }
            }
        }

        printf("Instancia %d\n", a);

        if(vm == vl == vc)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }

}

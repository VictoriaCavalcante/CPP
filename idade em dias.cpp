#include<bits/stdc++.h>

using namespace std;

main()
{
    int dias, ano, mes, dia;

    cin >> dias;

    ano = (int)(dias/365);

    mes = (int)((dias%365)/30);

    dia = ((dias%365)%30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

    return 0;
}

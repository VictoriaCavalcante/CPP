#include<bits/stdc++.h>

using namespace std;

main()
{
    double A, B, C, X, XX, DELTA;

    cin >> A >> B >> C;

    DELTA = (B*B) - (4*A*C);

    if(DELTA <=0 || A==0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        X = (-B + sqrt(DELTA))/(2*A);

        XX = (-B - sqrt(DELTA))/(2*A);

        printf("R1 = %.5f\nR2 = %.5f\n", X, XX);
    }
}

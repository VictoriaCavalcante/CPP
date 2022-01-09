#include<bits/stdc++.h>

using namespace std;

bool p(string a);

int main(void)
{
    string a;

    bool b;

    cin >> a;

    b = p(a);

    if(b == true)
    {
        cout << "É uma palíndrome.";
    }
    else
    {
        cout << "Não é uma palíndrome.";
    }


}

bool p(string a)
{
    int b=1, i;

    for(i=0 ; i<a.size() ; i++)
    {
        if(a[i] != a[a.size() - i-1])
        {
            b = 0;
        }
    }

    if(b==0)
        return false;
    else
        return true;
}

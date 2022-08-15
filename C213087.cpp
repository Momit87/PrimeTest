#include <bits/stdc++.h>
#include<fstream>
using namespace std;
#define ll long long
ifstream in("input.txt");
ofstream out("output.txt");
void primecheck()
{
    ll n, c = 0;
    in >> n;
    if (n == 1)
    {
        out << n << " ";
    }

    else
    {
        for (ll i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            out << n << " ";
        }
        else if (c == 0)
        {
            cout << n << " ";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    in.tie(NULL);
    out.tie(NULL);

    ll t;
    in >> t;
    out<<"Composite Numbers form the given test cases : ";
    cout<<"Prime Numbers form the given test cases : ";
    for (ll i = 0; i < t; i++)
    {
        primecheck();
    }
    cout << endl;
    out << endl;
    in.close();
    out.close();

    return 0;
}

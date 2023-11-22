#include <bits/stdc++.h>
using namespace std;
void counting(long long int num)
{
    if (num >= 10000000)
    {
        counting(num / 10000000);
        num %= 10000000;
        cout << " kuti";
    }
    if (num >= 100000)
    {
        if (num / 100000 != 0)
        {
            cout << " " << num / 100000 << " lakh";
        }
        num %= 100000;
    }
    if (num >= 1000)
    {
        if (num / 1000 != 0)
        {
            cout << " " << num / 1000 << " hajar";
        }
        num %= 1000;
    }
    if (num >= 100)
    {
        if (num / 100 != 0)
        {
            cout << " " << num / 100 << " shata";
        }
        num %= 100;
    }
    if (num != 0)
    {
        cout << " " << num;
    }
}
int main()
{
    long long int num;
    int count = 1;
    while (cin >> num)
    {
        cout << setw(4) << count++ << ".";
        counting(num);
        if (num == 0)
        {
            cout << " " << 0;
        }
        cout << endl;
    }
    return 0;
}
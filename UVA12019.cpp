#include <bits/stdc++.h>
using namespace std;
int main()
{
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string weeks[7] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    int total;
    cin >> total;
    int mon,day,num;
    for (int i = 0;i < total;i++)
    {
        cin >> mon >> day;
        num = 0;
        for(int ii = 0;ii < mon - 1;ii++)
        {
            num += months[ii];
        }
        num += day;
        cout << weeks[(num - 1) % 7] << endl;
    }
    return 0;
}
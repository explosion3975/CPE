#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total,num,num1,diff;
    bool flag = true;
    int times = 0;
    int array[3000];
    while(cin >> total)
    {
        flag = true;
        num = 0;
        for(int i = 0;i < total;i++)
        {
            cin >> array[i];
        }
        for(int i = 0; i < total - 1;i++)
        {
            num += abs(array[i] - array[i + 1]);
        }
        if(num == (total * (total - 1)) / 2)
        {
            cout << "Jolly" << endl;
        }
        else
        {
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}
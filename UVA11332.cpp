#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    int tmp_num = 0;
    while(cin >> num)
    {
        if(num == "0")
        {
            break;
        }
        while(num.length() > 1)
        {
            tmp_num = 0;
            for(int i = 0;i < num.length();i++)
            {
                tmp_num += num[i] - '0';
            }
            num = to_string(tmp_num);
        }
        cout << num << endl;
    }
    return 0;
}
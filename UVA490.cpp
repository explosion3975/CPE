#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input[100], str;
    int num = 0, max = 0, space_num = 0;
    while (getline(cin, str))
    {
        input[num] = str;
        if (input[num].length() > max)
        {
            max = input[num].length();
        }
        // cout << input[num] << " " << max << endl;
        num++;
    }
    for (int i = 0; i < max; i++)
    {
        for (int ii = num - 1, space_num = 0; ii >= 0; ii--)
        {
            if (input[ii].length() - 1 >= i)
            {
                for (int iii = 0; iii < space_num; iii++)
                {
                    cout << " ";
                }
                space_num = 0;
                cout << input[ii][i];
            }
            else
            {
                space_num++;
            }
        }
        cout << endl;
    }

    return 0;
}
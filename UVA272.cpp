#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    bool select = true;
    while(getline(cin,input))
    {
        for(int i = 0;i < input.length();i++)
        {
            if(input[i] != '"')
            {
                cout << input[i];
            }
            else if(select)
            {
                cout << "``";
                select = !select;
            }
            else
            {
                cout << "''";
                select = !select;
            }
        }
        cout << endl;
    }
    return 0;
}
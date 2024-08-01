#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    map <char,int> map1;
    map <char,int> map2;
    while (getline(cin,str1),getline(cin,str2))
    {
        string result_str = "";
        map1.clear();
        map2.clear();
        for (char &i : str1)
        {
            if(map1.find(i) != map1.end())
            {
                map1[i] += 1;
            }
            else
            {
                map1[i] = 1;
            }
        }
        for (char &i : str2)
        {
            if(map2.find(i) != map2.end())
            {
                map2[i] += 1;
            }
            else
            {
                map2[i] = 1;
            }
        }
        for(auto i = map1.begin(); i != map1.end();i++)
        {
            if(map2.find(i->first) != map2.end() && i->first != ' ')
            {
                for(int ii = 0;ii  < min(i->second,map2[i->first]);ii++)
                {
                    result_str += i->first;
                }
            }
        }
        cout << result_str << endl;
    }
    return 0;
}
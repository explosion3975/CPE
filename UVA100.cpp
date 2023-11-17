#include <bits/stdc++.h>
using namespace std;

int main()
{
    int result;
    int num1,num2;
    while(cin >> num1 >> num2)
    {
        cout << num1 << " " << num2 << " " ;
        result = 0;
        if(num1 > num2)
        {
            int tmp = num1;
            num1 = num2;
            num2 = tmp;
        }
        for(int i = num1;i <= num2;i++)
        {
            int num = i;
            int times = 0;
            while(num != 1)
            {
                if(num % 2 != 0)
                {
                    num = 3 * num + 1;
                }
                else
                {
                    num /= 2;
                }
                times++;
            }
            if(times > result)
            {
                result = times;
            }
        }
        cout << result + 1 << endl;
    }
    return 0;
}
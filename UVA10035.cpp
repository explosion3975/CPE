#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,carry,times;
    int m_num,sum;
    while(cin >> num1 >> num2)
    {
        if(num1 == 0 && num2 == 0)
        {
            break;
        }
        carry = 0;
        times = 0;
        m_num = max(num1,num2);
        while(m_num > 0)
        {
            sum = num1 % 10 + num2 % 10 + carry;
            carry = 0;
            if(sum > 9)
            {
                times++;
                carry = 1;
            }
            num1 /= 10;
            num2 /= 10;
            m_num /= 10;
        }
        if(times == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if(times == 1)
        {
            cout << "1 carry operation." << endl;
        }
        else
        {
            cout << times << " carry operations." << endl;
        }
    }
    return 0;
}
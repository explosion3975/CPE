#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lines;
    int nums;
    cin >> lines;
    for(int line = 0; line < lines;line++)
    {
        cin >> nums;
        int array[nums];
        int middle;
        int sum = 0;
        int tmp;
        for(int num = 0; num < nums;num++)
        {
            cin >> array[num];
        }
        for(int i = nums - 1;i > 0;i--)
        {
            for(int ii = 0;ii < i;ii++)
            {
                if(array[ii] > array[ii + 1])
                {
                    tmp = array[ii];
                    array[ii] = array[ii + 1];
                    array[ii + 1] = tmp;
                }
            }
        }
        if(nums % 2 == 0)
        {
            middle = array[nums / 2 - 1];
        }
        else
        {
            middle = array[nums / 2];
        }
        for(int i = 0;i < nums;i++)
        {
            sum += abs(middle - array[i]);
        }
        cout << sum << endl;

    }
    return 0;
}
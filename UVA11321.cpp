#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int tmp;
    tmp  = a;
    a = b;
    b = tmp;
}

void sorting(int arr[],int size,int mod)
{
    for (int i = size - 1; i > 0;i--)
    {
        for(int ii = 0;ii < i;ii++)
        {
            if(arr[ii] % mod > arr[ii + 1] % mod)
            {
                swap(arr[ii],arr[ii + 1]);
            }
            else if(arr[ii] % mod == arr[ii + 1] % mod)
            {
                if(arr[ii] % 2  == 0 && (arr[ii + 1] % 2 == 1 || arr[ii + 1] % 2 == -1))
                {
                    swap(arr[ii],arr[ii + 1]);
                }
                else if(arr[ii] % 2 == arr[ii + 1] % 2 || arr[ii] % 2 == -arr[ii + 1] % 2)
                {
                    if(arr[ii] % 2 == 0 && arr[ii] > arr[ii + 1])
                    {
                        swap(arr[ii],arr[ii + 1]);
                    }
                    else if (arr[ii] % 2 != 0 && arr[ii] < arr[ii + 1])
                    {
                        swap(arr[ii],arr[ii + 1]);
                    }
                }
            }
            
                    
        }
    }

}
int main()
{
    int array_len,mod_num,i = 0;
    int array[10000];
    while(cin >> array_len >> mod_num)
    {
        for(int i = 0;i < array_len;i++)
        {
            cin >> array[i];
        }
        cin >> i >> i;
        sorting(array,array_len,mod_num);
        cout << array_len << " " << mod_num << endl;
        for(i = 0;i < array_len;i++)
        {
            cout << array[i] << endl;
        }
        cout << "0 0" << endl;
    }
    
    return 0;
}
#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<cmath>

using namespace std;

int main()//2�Ƭۭ����H�̤j���]��=�̤p������
{
    int a , b , i;

    while(cin >> a >> b)
    {
        i=a*b;

        while(a != 0 && b!= 0)
        {
            if( a > b )
            {
            a=a%b;
            }

            else
            {
            b=b%a;
            }
        }

        if(a==0)
        {
            i=i/b;
            cout << b << " " << i << endl;

        }
        else
        {
            i=i/a;
            cout << a << " " << i << endl;
        }

    }

}

#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    int sz,i=0;

    string v;

    getline(cin , v);

    sz=v.size();


    while( i < sz )
    {
        if(islower(v[i]))
        {
            v[i]=v[i]-32;//ASC�p�g�r����32����j�g�A�j�g�r���[32����p�g�r���Astring�Ʀr��48��int�Ʀr(���Ӧ�Ʀr)
        }

        i=i+1;
    }

    for(int j=0 ; j < sz ; j++)
    {
        cout << v[j];
    }
}

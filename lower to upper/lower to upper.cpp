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
            v[i]=v[i]-32;//ASC糶ダ搭32单糶糶ダ32单糶ダstring计搭48int计(计)
        }

        i=i+1;
    }

    for(int j=0 ; j < sz ; j++)
    {
        cout << v[j];
    }
}

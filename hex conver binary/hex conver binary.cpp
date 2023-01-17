#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

string binToHex(string a);

string binToHex(string a)
{
    int total=0,j=0,sz,cont;

    string st,sum;

    a=a.erase(0,1);//去掉第一個位數

    sz=a.size();

    if(sz % 4 == 0)
    {
        cont=sz/4;
    }
    else if (sz < 4)
    {
        cont=1;
    }
    else
    {
        cont=(sz/4)+1;
    }

    sz=sz-1;

    for(int i=0 ; i < cont ; i++)
    {
        total=0;

        j=0;

        for(int k=0 ; k < 4 ; k++)
        {
            if(a[sz] == '1')
            {
                total=total+1*pow(2,j);
            }

            j=j+1;
            sz=sz-1;

        }

        st = to_string(total);

        if(st == "10")
        {
            st='a';
        }
        else if(st == "11")
        {
            st='b';
        }
        else if(st == "12")
        {
            st='c';
        }
        else if(st == "13")
        {
            st='d';
        }
        else if(st == "14")
        {
            st='e';
        }
        else if(st == "15")
        {
            st='f';
        }

        sum=st+sum;

    }

    return sum;
}

string hexToBin(string a);

string hexToBin(string a)
{
    int mod,sz,cont,v[50],num,g,z=0;

    string st,total,so,j,newt;

    a=a.erase(0,1);//去掉第一個位數

    sz=a.size();

    cont=sz;

    sz=sz-1;

    for(int h=0 ; h <= sz ; h++)
    {
        if(a[h] == 'A')
        {
            v[h]=10;
        }
        else if(a[h] == 'B')
        {
            v[h]=11;
        }
        else if(a[h] == 'C')
        {
            v[h]=12;
        }
        else if(a[h] == 'D')
        {
            v[h]=13;
        }
        else if(a[h] == 'E')
        {
            v[h]=14;
        }
        else if(a[h] == 'F')
        {
            v[h]=15;
        }
        else
        {
            j=a[h];

            v[h]=atoi(j.c_str());//把字串轉整數
        }

    }

    for(int i=0 ; i < cont ; i++)
    {
        string buff;

        while( v[sz] != 0)
        {
            mod=v[sz]%2;

            st = to_string(mod);

            buff=st+buff;

            v[sz]=v[sz]/2;

        }

        sz=sz-1;

        while( buff.size() != 4)
        {
            buff='0'+buff;
        }

        //cout << buff;

        total=buff+total;
    }

    newt=total;

    for(int f=0 ; f < 4 ; f++)
    {
        if(total[f] == '0')
        {
           newt=newt.erase(0,1);
        }
        else if(total[f] == '1')
        {
            break;
        }
    }

    return newt;

}

int main ()
{
    string a;

    while(cin >> a)
    {
        if(a[0] == '#')

            a = hexToBin(a);

        else if(a[0] == '$')

            a = binToHex(a);

        cout << a << endl;
    }
}

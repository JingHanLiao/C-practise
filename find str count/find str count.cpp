#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

int main()
{
    int cont=0;

    string fids;

    getline(cin , fids);

    while(cin)
    {
        string str ;

        int sz1,sz2,pos=0,flag=0,nown=0;

        getline(cin , str);

        sz1=fids.size();

        sz2=str.size();

        char now[sz1];

        while(pos < sz2)
        {
            nown=pos;

            for(int i=0 ; i < sz1 ; i++)
            {
                now[i]=str[nown];

                nown=nown+1;
            }

            flag=0;

            for(int j=0 ; j < sz1 ; j++)
            {
                if(fids[j] == now[j])
                {
                    flag=flag+1;
                }
            }

            if(flag == sz1)
            {
               cont=cont+1;
            }

            pos=pos+1;

        }


    }

    cout << cont << endl;

}

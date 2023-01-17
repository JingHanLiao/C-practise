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
    int cont;

    cin >> cont;

    while(cont--)
    {
        int a,b,sz1,sz2,carry=0,sum;

        string n1,n2,temp;

        cin >> n1 >> n2;

        sz1=n1.size();

        sz2=n2.size();

        if(sz1 < sz2)//рゑ耕计跑Θ砆计ゑ耕衡
        {
            temp=n2;

            n2=n1;

            n1=temp;
        }

        sz1=n1.size();

        sz2=n2.size();

        while( sz1 > 0 )//眖计耞
        {
            a=n1[sz1-1]-48;//じ锣俱计

            if(sz2 > 0)//b临Τ计⊿砆
            {
                b=n2[sz2-1]-48;
            }
            else
            {
                b=0;//b砆Ч
            }

            sum=a+b+carry;

            if(sum >= 10)
            {
                n1[sz1-1]=sum % 10+'0';//秈计(俱计锣じ)

                carry=1;//秈计
            }
            else if(sum < 10)
            {
                n1[sz1-1]=sum+'0';//⊿秈计

                carry=0;//秈计
            }

            sz1--;//膥尿┕耞

            sz2--;
        }

        if(carry == 1)//狦程计Τ秈碞璶+1
        {
            n1='1'+n1;
        }

        cout << n1 << endl;

        sum=0;

        carry=0;
    }
}

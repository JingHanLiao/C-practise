#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

bool comp(string s1 , string s2)
{
    //ゑ耕タ计临琌璽计
    if(s1[0] != '-' && s2[0] == '-')//狦s2璽s1タ抖ユ传
    {
        return true;
    }

    if(s1[0] == '-' && s2[0] != '-')//狦s1璽s2タ碞ぃノ笆
    {
        return false;
    }

    //ゑ耕Τ碭计(2计才腹常妓)
    if( s1.size() > s2.size() )
    {
        if(s1[0] != '-')//2常琌タボs1ゑ耕碞璶ユ传
        {
            return true;
        }
        else if(s1[0] == '-')//2常琌璽ボs2ゑ耕ぃノユ传
        {
           return false;
        }

    }

    if( s1.size() < s2.size() )
    {
        if(s1[0] == '-')//2常琌璽ボs1ゑ耕碞璶ユ传
        {
            return true;
        }
        else if(s1[0] != '-')//2常琌タボs2ゑ耕ぃノユ传
        {
            return false;
        }
    }

    //ゑ耕(2计才腹㎝计常妓)
    if(s1 > s2)
    {
        if(s1[0] != '-')//2常琌タボs1ゑ耕碞璶ユ传
        {
            return true;
        }
        else if(s1[0] == '-')//2常琌璽ボs2ゑ耕ぃノユ传
        {
            return false;
        }
    }

    if(s1 < s2)
    {
        if(s1[0] == '-')//2常琌璽ボs1ゑ耕碞璶ユ传
        {
            return true;
        }
        else if(s1[0] != '-')//2常琌タボs2ゑ耕ぃノユ传
        {
            return false;
        }
    }

    return false;
}

int main()
{
    int c;

    cin >> c;

    string num[c],temp;

    for(int i=0 ; i < c ; i++)
    {
        cin >> num[i];
    }

    for(int i=0 ; i < c ; i++)
    {
        for(int j=i+1 ; j < c ; j++)
        {
            if( comp(num[i],num[j]) )
            {
                temp=num[i];

                num[i]=num[j];

                num[j]=temp;
            }
        }
    }

    for(int i=0 ; i < c ; i++)
    {
        cout << num[i] << endl;
    }
}

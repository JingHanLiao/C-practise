#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

bool comp(string s1 , string s2)
{
    //��������٬O�t��
    if(s1[0] != '-' && s2[0] == '-')//�p�Gs2���ts1�����A���ǥ洫
    {
        return true;
    }

    if(s1[0] == '-' && s2[0] != '-')//�p�Gs1���ts2�����N���ΰ�
    {
        return false;
    }

    //������X���(2�Ӽƪ��Ÿ����@��)
    if( s1.size() > s2.size() )
    {
        if(s1[0] != '-')//2�ӳ��O�����s1����j�A�N�n�洫
        {
            return true;
        }
        else if(s1[0] == '-')//2�ӳ��O�t���s2����j�A���Υ洫
        {
           return false;
        }

    }

    if( s1.size() < s2.size() )
    {
        if(s1[0] == '-')//2�ӳ��O�t���s1����j�A�N�n�洫
        {
            return true;
        }
        else if(s1[0] != '-')//2�ӳ��O�����s2����j�A���Υ洫
        {
            return false;
        }
    }

    //����j�p(2�Ӽƪ��Ÿ��M��Ƴ��@��)
    if(s1 > s2)
    {
        if(s1[0] != '-')//2�ӳ��O�����s1����j�A�N�n�洫
        {
            return true;
        }
        else if(s1[0] == '-')//2�ӳ��O�t���s2����j�A���Υ洫
        {
            return false;
        }
    }

    if(s1 < s2)
    {
        if(s1[0] == '-')//2�ӳ��O�t���s1����j�A�N�n�洫
        {
            return true;
        }
        else if(s1[0] != '-')//2�ӳ��O�����s2����j�A���Υ洫
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

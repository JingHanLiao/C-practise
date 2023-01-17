#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    int num,play;

    string lis[]={"剪刀","石頭","布"};

    char player;

    cout <<"請玩家出拳(請打字母)，表示S剪刀; R表示石頭; P表示布 " << endl;

    //給電腦隨機出拳
    unsigned seed = time(0);

    srand(seed);

    num=rand()%3+1;//亂數產生1到3

    cin >> player ;

    //判斷玩家出的拳
    if(player =='S' || player == 's')
    {
        play=1;//1表示剪刀
    }
    else if (player =='R' || player == 'r')
    {
        play=2;//2表示石頭
    }
    else if (player == 'P' || player == 'p')
    {
        play=3;//3表示布
    }
    else
        cout << "輸入錯誤，請從新開始" << endl;

    //判斷電腦出的拳，並印出
    if (num == 1)//1表示剪刀
    {
        cout << "電腦出" << lis[0] << endl;
    }
    else if (num == 2)//2表示石頭
    {
        cout << "電腦出" << lis[1] << endl;
    }
    else//表示布
        cout << "電腦出" << lis[2] << endl;

    //判斷結果
    if( play == num )
    {
        cout << "平手" << endl;
    }
    else if( play==1 && num==3 || play==2 && num==1 || play==3 && num==2)
    {
        cout << "WIN" << endl;
    }
    else
    {
        cout << "LOSE" << endl;
    }

}




#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

string intToString(int);

string intToString(int a)
{
    string st = to_string(a);//把整數轉字串(用C++11以上的編譯器才提供此函示))

    return st;
}

int stringToInt(string);

int stringToInt(string b)
{
    int v;

    v = atoi(b.c_str());//把字串轉整數

    return v;
}

int main ()
{
    long long n = 2147483648;

    int a;

    string b;

    cin >> a >> b;

    string s = intToString(a);//convert integer to string

    int number = stringToInt(b);//convert string to integer

    for(int t = 0;t < s.size(); t++)
    {
        cout << s[t];
    }

    cout << endl;

    cout << number % n << endl;

}

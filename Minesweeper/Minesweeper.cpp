#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

char ar[11][11];

void use(int x , int y)
{
    for (int i=-1 ; i <= 1 ; i++)
    {
        for (int j=-1 ; j <= 1 ; j++)
        {
            if (ar[x+i][y+j] != '*')
            {
                ar[x+i][y+j]++;
            }
        }
    }
}

int main()
{
    int n;

    cin >> n;

    for(int i=1 ; i <= n ; i++)
    {
        for(int j=1 ; j <= n ; j++)
        {
            cin >> ar[i][j];
        }
    }

    for(int i=1 ; i <= n ; i++)
    {
        for(int j=1 ; j <= n ; j++)
        {
            if(ar[i][j] != '*')
            {
                ar[i][j]='0';
            }
        }
    }

    for(int i=1 ; i <= n ; i++)
    {
        for(int j=1 ; j <= n ; j++)
        {
            if (ar[i][j] == '*')
            {
                ar[i][j]='*';

                use(i,j);
            }

        }
    }

    for(int i=1 ; i <= n ; i++)
    {
        for(int j=1 ; j <= n ; j++)
        {
            if(ar[i][j] == '0')
            {
                ar[i][j]='-';
            }
        }
    }

    for(int i=1 ; i <= n ; i++)
    {
        for(int j=1 ; j <= n ; j++)
        {
            cout << ar[i][j];
        }

        cout << endl;
    }
}


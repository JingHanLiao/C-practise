#include <iostream>
#include <ctime>
#include <cstdlib>
#define Size 5

using namespace std;

void printA(int *a,int s)
{
  for(int i=0;i<s;i++)
  {
    cout << a[i] << " ";
  }

  cout << endl;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int quick_sort(int A[] , int left , int right )
{
    if( left < right )
    {
        int pk,i,j,temp;

        i=left;

        j=right;

        pk=A[left];

        do
        {
            do i++; while(A[i] < pk);

            do j--; while(A[j] > pk);

            if( i < j )
            {
                swap(A[i] , A[j]);
            }
        }
        while( i < j );
        {
            swap(A[left] , A[j]);
        }

        printA(A,Size);

        quick_sort( A , left , j-1 );

        quick_sort( A , j+1 , right );
    }
}

int main()
{
  int A[Size] = {4,2,3,5,1};

  cout << "排序前" << endl;

  printA(A,Size);

  cout << endl;

  quick_sort( A , 0 , Size );

  cout << endl;

  cout << "排序後" << endl;

  printA(A,Size);
}

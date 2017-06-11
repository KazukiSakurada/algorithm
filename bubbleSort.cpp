#include<iostream>
#include<algorithm>
using namespace std;

void trace(int A[], int N)
{
  for (int i = 0; i < N; i++)
  {
    if (i>0)
    {
      cout << " ";
    }
    cout << A[i];
  }
  cout << endl;
}


void bubbleSort(int A[], int N)
{
  bool flag = true;
  int sw = 0;
  int count = 0;
  int i = 0;
  while (flag)
  {
    flag = false;
    for (int j = N -1; j >= i + 1; j--)
    {
      if(A[j] < A[j - 1])
      {
        swap(A[j], A[j-1]);
        flag = true;
        count++;
      }
    }
    i++;
  }
  trace(A, N);
  cout << count << endl;
}

int main()
{
  int N;
  int A[100];

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  bubbleSort(A, N);
}

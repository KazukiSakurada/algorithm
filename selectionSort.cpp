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

void selectionSort(int A[],int N)
{
  int count = 0;
  int minj = 0;
  for (int i = 0; i < N-1; i++)
  {
    minj = i;
    for (int j = i; j < N; j++)
    {
      if (A[j] < A[minj])
      {
        minj = j;
      }
    }
    swap(A[i], A[minj]);
    if (i != minj)
    {
      count += 1;
    }
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

  selectionSort(A, N);
  return 0;
}

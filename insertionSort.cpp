#include<iostream>
#include<algorithm>
using namespace std;

// 配列の要素を順番に出力
void trace(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        // １つめの要素ではなかったら空白を挿入
        if (i > 0){
          cout << " ";
        }
        cout << A[i];
    }
    cout << endl;
}

void insertionSort(int A[], int N)
{
  int j, v;
  for (int i = 1; i < N; i++)
  {
    v = A[i];
    j = i -1;
    while(j >= 0 && A[j] > v)
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;
    trace(A, N);
  }
}

int main(){
  int N;
  int A[100];

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  trace(A, N);
  insertionSort(A, N);

  return 0;
}

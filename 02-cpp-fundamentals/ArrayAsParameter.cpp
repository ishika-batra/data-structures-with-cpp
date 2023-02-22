#include <iostream>
using namespace std;
/*
void func(int A[], int n)
{
  A[0] = 25;
  for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }
}
int main()
{
  int A[5] = {1, 2, 3, 4, 5};
  int n = 5;
  func(A, n);
  return 0;
}
*/
int *func(int size) // return type is pointer
{
  int *p;
  p = new int[size]; // Creating array in heap
  for (int i = 0; i < size; i++)
  {
    p[i] = i + 1; // initializing array in heap
    return p;     // returning a pointer
  }
}
int main()
{
  int *ptr, sz = 5;
  ptr = func(sz); // Passing size of array to func

  for (int i = 0; i < sz; i++) // Printing elements of array
  {
    cout << ptr[i] << endl;
  }
  return 0;
}
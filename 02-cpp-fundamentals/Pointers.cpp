#include <iostream>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
  char x;
  /* data */
};

int main()
{
  int a = 10;         // data variable
  int *p;             // Declaration of pointer variable
  p = &a;             // Initialization of pointer, pointer p will store address of variable a.
  cout << a << endl;  // This will give output 10.
  cout << *p << endl; // This will give output 10.
  cout << p << endl;  // This will give output the address of a.
  cout << &a << endl; // This will give output the address of a.

  // Pointer to an array
  int A[5] = {2, 4, 6, 8, 10};
  int *s;
  s = A; // No need of '&' for initialization of pointer to an array.
  for (int i = 0; i < 5; i++)
  {
    cout << s[i] << endl;
  }

  // Creating array in heap using pointer
  int *n;
  n = new int[5]; // By using new keyword we are requesting memory in heap.
  cout << "Elements of array in the heap: " << endl;
  n[0] = 10;
  n[1] = 15;
  n[2] = 20;
  n[3] = 25;
  n[4] = 30;
  for (int i = 0; i < 5; i++)
  {
    cout << n[i] << endl;
  }
  // After using the memory we should also delete it.
  delete[] n; // Delete keyword is used to delete memory from heap.

  // Printing size of different pointers

  int *p1;
  char *p2;
  float *p3;
  double *p4;
  struct Rectangle *p5;

  cout << sizeof(p1) << endl;
  cout << sizeof(p2) << endl;
  cout << sizeof(p3) << endl;
  cout << sizeof(p4) << endl;
  cout << sizeof(p5) << endl;
}
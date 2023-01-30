#include <iostream>
using namespace std;
int main()
{
  int A[5];  // Declaration of an array
  A[0] = 12; // Initializing the elements
  A[1] = 10;
  A[2] = 15;

  cout << "size of array A: " << sizeof(A) << endl;       // Printing size of array A
  cout << "3rd element of the array A: " << A[2] << endl; // Printing 3rd element of the array A

  int B[10] = {12, 14, 16, 18, 20, 2, 4};

  cout << "size of array B: " << sizeof(B) << endl;
  cout << "8rd element of the array A: " << B[8] << endl; // If no value assigned will print 0

  // Printing elements of an array using for loop
  int i;
  cout << "Elements of array B: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << B[i] << endl;
  }

  // Printing elements of an array using for each loop
  cout << "Elements of array B: " << endl;
  for (int x : B)
  {
    cout << x << endl;
  }

  // Taking input from user
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int C[n];
  cout << endl;
  cout << "Enter elements of array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> C[i];
  }
  // Printing users input
  cout << "Elements of array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << C[i] << " ";
  }

  return 0;
}
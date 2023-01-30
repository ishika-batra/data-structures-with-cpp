# C++ Basics

## Arrays
- Arrays is defined as collection of similar data items.
- Syntax: `int A[5]` , here A is an array of integer data type where we get 5 spaces. Indices will be 0,1,2,3,4.
```c++
int main()
{
  int A[5]; // Declaration of an array
  int B[5]={2,4,6,8,10}; // Declaration and initialization of an array
}
```
- For printing elements of an array
```c++
int main()
{
  
  int B[5]={2,4,6,8,10};
  int i;

  for(int i=0;i<5;i++)
  {
    cout<<i;
  }
}
```
The **output** of the above code will be **2 4 6 8 10**.

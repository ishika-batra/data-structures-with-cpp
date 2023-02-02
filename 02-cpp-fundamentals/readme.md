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
    cout<<B[i];
  }
}
```
The **output** of the above code will be **2 4 6 8 10**.


## Structures
- Structures can be defined as collection of related data items under one name. Data Types can be similar or different.
- Structure is used to define user defined data types.

- Defining a structure:
```c++
struct Rectangle // This is a structure, user defined data type
{
  int length; // size of length is 4 bytes.
  int breadth; // size of breadth is 4 bytes.
} // Therefore,size of structure Rectangle is 8 bytes.
```
- To declare a variable of type structure:
```c++
int main()
{
  struct Rectangle r; // r is of size 8 bytes, Declaration of a structure.
  struct Rectangle c={10,5}; // length=10 and breadth=5, Declaration and Initialization of a Structure.
}
```
- To access a member of structure
```c++
int main()
{
  struct Rectangle r; 
  struct Rectangle c={10,5};

  r.length=15;
  r.breadth=3;
  cout<<"Area of rectangle is: "<<r.lenth*r.breadth;//To access a member of a structure dot operator is used.
}
```
- Other example of Structure
```c++
struct Complex // Creating a structure for complex number,a+ib
{
  int real;
  int imaginary;
} // Structure Complex is of size 8 bytes 

struct Student // Creating a structure for a student
{
  int roll_no;
  char name[25];
  char dept[10];
  char address[50];
} //Structure Student is of size 89 bytes 
```
- Array of structures
```c++
struct Card
{
  int face;
  int shape;
  int color;
} //Structure Card is of size 12 bytes 

int main()
{
  struct Card deck[52]={ {1,0,0},{2,0,0},{1,1,0},{2,1,0} } //624 bytes is size of array
}
```

## Pointers

-Pointer is an address variable, that is meant for storing address of data and not data itself.
-Uses of pointers:
1.Used to access Heap memory.
2.Useful for accessing the resources that are outside the memory.
3.Used in parameter passing.

```c++
int a=10; //data variable
int *p; //Declaration of pointer variable
p=&a; //Initialization of pointer, pointer p will store address of variable a.
cout<<a; //This will give output 10.
cout<<*p; //This will give output 10.
cout<<p; //This will give output the address of a.
```
- To access heap memory using a pointer:
 To allocate memory in heap we use keyword new.
```c++

int main()
{
  int *p;
  p=new int[5];
}
```
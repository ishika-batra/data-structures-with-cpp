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

- Pointer is an address variable, that is meant for storing address of data and not data itself.
- Uses of pointers:
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

## References 

- A reference is a nickname given to a variable.
- Useful in parameter passing.
```c++
int main()
{
  int a=10;
  int &r=a; // r is a reference for variable a.
  cout<<a; // Output will be 10.
  r++;
  cout<<r; // Output will be 11.
  cout<<a; //Output will be 11.
}
```

## Pointers to Structures

- Creating static object.

```c++
//Creating a structure
struct Rectangle
{
  int length;
  int breadth;
};

int main()
{
  Rectangle r = {10, 5}; // Creating a object of structureRectangle
  Rectangle *p = &r; // Making a pointer to access r object
  cout << "Size of r: " << sizeof(r) << endl; // Printing size of object r
  cout << "Size of p: " << sizeof(p) << endl; // Printing size of pointer
  r.length = 15; // Changing length to 15 using r object
  cout << r.length << endl;
  p->length = 20; // Changing length to 20 using pointer
  cout << r.length << endl;
}
```
- Creating dynamic object in heap

```c++
//Creating a structure
struct Rectangle
{
  int length;
  int breadth;
};

int main()
{
  Rectangle *p;
  p = new Rectangle; // Dynamic allocation in heap
  p->length = 15;
  p->breadth = 7;
  cout << p->length << endl;
  cout << p->breadth << endl;
}

```

## Functions 

- Function is a piece of code which performs a specific task.
- Function is a group of related instructions which performs a specific task.
- Functions are called as modules or procedures.
- Monolithic programming is programming everything under main function.
- Modular programming or procedural programming is making a program break into smaller pieces of code and writing them in different functions and integrating them in main function.

```c++
int add(int a, int b) // Declaration of a function, a and b are formal parameters.
{
  // Definition of function
  int c;
  c = a + b;
  return c;
}
int main()
{
  int x = 2, y = 3;
  int sum;
  sum = add(x, y); // Calling function, x and y are actual parameters.
  cout << "Sum: " << sum;
}
```
- Benefit of function is that, the function will have it's own activation record, it's separate set of variable will be there inside the memory. When function is called they are created and when their function terminates they are destroyed.
- Function cannot access the variables of main and main cannot access variables of function.


## Parameter passing methods
- There are 3 parameter passing methods:
1. Call by value
2. Call by address
3. Call by reference

#### 1. Call by value

- In call by value the changes done in formal parameters are not reflected in actual parameters.
- We  should use call by value when we don't want to modify actual parameters.
- call by value should be used when the function is returning some results.
- Swap function should not be done using call by value. Add function can be done using call by value.

```c++
void swap(int x, int y)//10 and 20 passed in formal parameters
{
int temp;
temp=x;
x=y;
y=temp; //x=20 y=10
}
int main()
{
  int a=10;
  int b=20;
  swap(a,b);
  cout<<a<<b;// a=10, b=20
}// Not swapped
```
#### 2. Call by address

- In call by address the address of actual parameters are passed to formal parameters and formal parameters must be pointers.
- Any changes done in the function will modify actual parameters.
- Swap function should use call by address.

```c++
void swap(int *x, int *y)//10 and 20 passed in formal parameters
{
int temp;
temp=*x;
*x=*y;
*y=temp; //x=20 y=10
}
int main()
{
  int a=10;
  int b=20;
  swap(&a,&b);
  cout<<a<<b; // a=20, b=10
} // Values got swapped
```
#### 3. Call by reference

```c++
void swap(int &x, int &y)//10 and 20 passed in formal parameters
{
int temp;
temp=x;
x=y;
y=temp; //x=20 y=10
}
int main()
{
  int a=10;
  int b=20;
  swap(a,b);
  cout<<a<<b;// a=20, b=10
}// swapped
```

## Array as parameter
- Arrays are only pass by address.
- Syntax of pointer to array is ``` int A[]```. 
- Can also be written as ```int *A```, this is general method.

```c++
void func(int A[], int n)//Array is passed by address and number of elements is passed by value.
{
  for(int i=0; i<n;i++) // If we modify any element in this function the array will get changed.
  {
    cout<<A[i];
  }
}
int main()
{
  int A[5]={1,2,3,4,5};
  func(A,5);
}
```
- Returning an array as parameter:
```c++
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
```

## Structure as Parameter

#### Using call by Value

- Here we cannot modify the values.

```c++
struct Rectangle
{
  int length;
  int breadth;
};
int area(struct Rectangle r1)
{
  return r1.length*r1.breadth;
}
int main()
{
  struct Rectangle r={10,5};
  cout<<area(r);
}
```
#### Using call by reference

- Here we can modify the values.

```c++
struct Rectangle
{
  int length;
  int breadth;
};

int area(struct Rectangle &r1)
{
  r1.length ++;
  return r1.length*r1.breadth;
}
int main()
{
  struct Rectangle r={10,5};
  cout<<area(r);
}
```
#### Using call by address
```c++
struct Rectangle
{
  int length;
  int breadth;
};
void changeLength(struct Rectangle *p, int l)
{
  p->length=l; // Changing the original length using pointer
}
 int main()
 {
  struct Rectangle r={10,5};
  changeLength(&r,20);
 }
```
- Call by value uses "." operator.
- Call by address uses "->" operator.

- As we know we can only pass array as a parameter using call by address but if a structure is having an array we can use call by value to pass an array.
- We can cannot modify the values of array, if we are using call by value.
```c++
 struct Test
 {
  int A[5];
  int n;
 };
 void func(struct Test t1)
 {
  t1.A[0]=10;
  t1.A[1]=9;
 }
 int main()
 {
  struct Test t={{2,4,6,8,10},5};
  func(t);
 }
```
## Structure and Functions in C 
```c++
struct Rectangle
{
  int length;
  int breadth;
};
void initialize(struct Rectangle *r, int l, int b) // Call by address
{
  r->length = l; 
  r->breadth = b;
}
int area(struct Rectangle r) // Call by value
{
  return r.length * r.breadth;
}
void changeLength(struct Rectangle *r, int l) // Call by address
{
  r->length = l;
}
int main()
{
  struct Rectangle r;

  initialize(&r, 15, 10);
  cout << area(r);
  changeLength(&r, 20);
}
```


## Classes and Constructors in C++
- 
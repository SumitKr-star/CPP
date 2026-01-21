# CPP
## 1. Find the address and value of integer though pointer

```
#include <iostream>
using namespace std ;
int main(){
    int* b ;  
    int a = 16 ;
    b = &a ;

    cout<<"Address of a : "<<b ;
    cout<<"Value of a : "<<*b ;
    
    return 0 ;
}
```
<br>
<br>
## 2. Direplication

```
#include <iostream>
using namespace std ;

int main() {
    int x= 5;
    int* p =&x;
    *p = 10;
    cout << x; 
}
```
<br>
<br>

## 3. dynamical allocates one intege using new int Find the address

```
#include <iostream>
using namespace std ;

int globalVar = 10 ;

int main() {
    int localVar = 20 ;
    int* heapVar = new int(30) ;
    
    cout<<"Address of Global variable :"<< &globalVar <<endl;
    cout<<"Address of Local Variable  :"<< &localVar <<endl;
    cout<<"Address of new variable : " << heapVar ;
    
    return 0 ;
}
``` 
<br>
<br>

## 4. Write a function square(int) and call it: Noramlly and using a function pointer.

```
#include <iostream>
using namespace std ;

int square(int x) {
    return x * x;
}

int main() {
    int number;
    cout << "Enter the number: " ;
    cin >> number ;
    cout << "The square of "<< number << " is " <<  square(number) <<endl ;
    
    int (*fp)(int) ;
    fp = square ;
    cout << " function pointer : " << fp(number) <<endl ;
    return 0 ;    
}
```
<br>
<br>

## 5.Change pointer to pointer.

```
#include <iostream>
using namespace std ;

int main() {
    int a = 1, b =2 ;
    int *p = &a;
    p = &b;
    *p = 5;
    cout<<" value of a is "<<a<<endl<<" value of b is " <<b ;
    return 0 ;
}
```
<br>
<br>

## 6.Pointer to pointer.

```
#include <iostream>
using namespace std;

int main() {
    int x = 10 ;
    int *p = &x ;
    int **pp = &p ;
    **p = 20 ;
    cout << x ;

    return 0 ;
}
```
<br>
<br>

## 7. Using pointer in ARRAY.
```
#include <iostream>
using namespace std ;

int main() {
    int a[5] = {2, 4, 6, 8, 10} ;
    int *p = a;
    cout << *p++ <<endl ;
    cout << *p ;

    return 0 ;
}
```
<br>
<br>

## 8. 
```

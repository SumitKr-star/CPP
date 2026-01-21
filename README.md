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
    cout << "The square of "<< number << " is " <<  square(number) <<endl ;;
    
    int (*fp)(int) ;
    fp = square ;
    cout << " function pointer : " << fp(number) <<endl ;
    return 0 ;    
}

```



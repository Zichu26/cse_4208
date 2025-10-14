#include <iostream>
#include "MyStruct.h"

using namespace std;

int main() {
    // MyStruct s1;
    // std::cout << "x: " << s1.getX() << std::endl;
    // std::cout << "y: " << s1.getY() << std::endl;
    // s1.setX(33);
    // s1.setY(44);
    // std::cout << "non const after mutation:" << std::endl;
    // std::cout << "x: " << s1.getX() << std::endl;
    // std::cout << "y: " << s1.getY() << std::endl;
    
    // std::cout << std::endl;
    // const MyStruct s2;
    // std::cout << "x: " << s2.getX() << std::endl;
    // std::cout << "y: " << s2.getY() << std::endl;
    // s2.setX(33);  
    // s2.setY(44);  

    // MyStruct m; // default construction
    // cout << "m.x is " << m.getX() << " and m.y is " << m.getY() << endl;
    // m.setX(7).setY(3); // chained use of mutator functions
    // cout << "m.x is " << m.getX() << " and m.y is " << m.getY() << endl;
    // MyStruct n(m); // copy construction
    // cout << "n.x = " << n.getX() << " and n.y = " << n.getY() << endl;


    MyStruct m; // default constructor called
    MyStruct result1 = passByValue(m);  // copy constructor called twice, once for creating parameter m, once for creating result
    m.setX(7).setY(3);
    MyStruct result2 = passByValue(m); // copy constructor called twice, once for creating parameter m, once for creating result
    MyStruct n(m); // copy constructor called once
    MyStruct result3 = passByValue(n); // copy constructor called twice, once for creating parameter n, once for creating result
}
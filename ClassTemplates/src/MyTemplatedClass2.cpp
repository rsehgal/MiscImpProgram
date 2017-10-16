#include "MyTemplatedClass2.h"

template<class T>
MyTemplatedClass2<T>::MyTemplatedClass2(){
    std::cout << "Default Constructor called............" << std::endl;
    MyFunc();
}

template<class T>
void MyTemplatedClass2<T>::MyFunc(){
    std::cout << "MyFunc called............" << std::endl;
}




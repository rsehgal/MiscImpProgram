#ifndef CLASSTEMPLATES_INC_MYTEMPLATEDCLASS2_H_
#define CLASSTEMPLATES_INC_MYTEMPLATEDCLASS2_H_

#include <iostream>
template <class T>
class MyTemplatedClass2{
public:
	MyTemplatedClass2();
	void MyFunc();
};

#include "../src/MyTemplatedClass2.cpp"
#endif /* CLASSTEMPLATES_INC_MYTEMPLATEDCLASS2_H_ */

/*
 * MyTemplatedClass.h
 *
 *  Created on: Jun 2, 2017
 *      Author: rsehgal
 */

#ifndef CLASSTEMPLATES_INC_MYTEMPLATEDCLASS_H_
#define CLASSTEMPLATES_INC_MYTEMPLATEDCLASS_H_

#include <iostream>

template <class T>
class MyTemplatedClass {
public:
	MyTemplatedClass();
	~MyTemplatedClass();

	//Adding some Template Method
	template <class U>
	void Foo();

};


template<class T>
MyTemplatedClass<T>::MyTemplatedClass() {
	// TODO Auto-generated constructor stub
	std::cout<<"--Entered Constructor--" << std::endl;

}

template<class T>
MyTemplatedClass<T>::~MyTemplatedClass() {
	// TODO Auto-generated destructor stub
}

template<class T>
template<class U>
void MyTemplatedClass<T>::Foo(){
	std::cout<<"=== Entered FOO ===" << std::endl;
}


#endif /* CLASSTEMPLATES_INC_MYTEMPLATEDCLASS_H_ */

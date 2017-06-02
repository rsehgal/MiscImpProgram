/*
 * MyTemplatedClass.h
 *
 *  Created on: Jun 2, 2017
 *      Author: rsehgal
 */

#ifndef CLASSTEMPLATES_INC_MYTEMPLATEDCLASS_H_
#define CLASSTEMPLATES_INC_MYTEMPLATEDCLASS_H_

#include <iostream>

namespace Utilities{
   template<typename T, typename U>
   void Test(){
	   std::cout << "==== Entered Tempalted Test of Utilities namespace ==== "<< std::endl;
   }

   template<>
   void Test<float,float>(){
   	   std::cout << "==== Entered FulluSpecialized Test of Utilities namespace ==== "<< std::endl;
      }



} //end of Utilities namespace

template <class T>
class MyTemplatedClass {
public:
	MyTemplatedClass();
	~MyTemplatedClass();

	//Adding some Template Method
	template <class U>
	void Foo();

	void Test();

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
void MyTemplatedClass<T>::Test() {
	std::cout<<" === Template Class Test ===" << std::endl;
}

template<>
void MyTemplatedClass<int>::Test() {
	std::cout<<" === Specialialized Class For Int ===" << std::endl;
}

template<>
void MyTemplatedClass<float>::Test() {
	std::cout<<" === Specialialized Class For Float ===" << std::endl;
}


template<class T>
template<class U>
void MyTemplatedClass<T>::Foo(){
	std::cout<<"=== Entered FOO ===" << std::endl;
}

//----------------------------------------------------

template <class T,class U>
class MyDualTemplatedClass {
public:
	MyDualTemplatedClass();
	~MyDualTemplatedClass();

	//Adding some Template Method
	template <class V>
	static void Foo();

	static void Test();

};

template<class T,class U>
MyDualTemplatedClass<T,U>::MyDualTemplatedClass() {
	// TODO Auto-generated constructor stub
	std::cout<<"--Entered DualTemplate class Constructor--" << std::endl;

}

template<class T,class U>
MyDualTemplatedClass<T,U>::~MyDualTemplatedClass() {
	// TODO Auto-generated destructor stub
}

template<class T,class U>
void MyDualTemplatedClass<T,U>::Test() {
	std::cout<<" === Primary DualTemplate Class Test ===" << std::endl;
}


template<class T,class U>
template<class V>
void MyDualTemplatedClass<T,U>::Foo(){
	std::cout<<"=== Entered DualTemplate class's FOO ===" << std::endl;
}

//----------------------------------------------------

template <class U>
class MyDualTemplatedClass<int,U> {
public:
	MyDualTemplatedClass();
	~MyDualTemplatedClass();
	static void Test();

};

template<class U>
MyDualTemplatedClass<int,U>::MyDualTemplatedClass() {
	// TODO Auto-generated constructor stub
	std::cout<<"--Entered PatialSpecialized DualTemplate class Constructor for int--" << std::endl;

}

template<class U>
MyDualTemplatedClass<int,U>::~MyDualTemplatedClass() {
	// TODO Auto-generated destructor stub
}

template<class U>
void MyDualTemplatedClass<int,U>::Test() {
	std::cout<<" === Patial Specialialized Class For Int ===" << std::endl;
}

//----------------------------------------------------

template <class U>
class MyDualTemplatedClass<float,U> {
public:
	MyDualTemplatedClass();
	~MyDualTemplatedClass();
	static void Test();
	//Adding some Template Method
	template <class V>
	static void Foo();

};

template<class U>
MyDualTemplatedClass<float,U>::MyDualTemplatedClass() {
	// TODO Auto-generated constructor stub
	std::cout<<"--Entered PatialSpecialized DualTemplate class Constructor for float --" << std::endl;

}

template<class U>
MyDualTemplatedClass<float,U>::~MyDualTemplatedClass() {
	// TODO Auto-generated destructor stub
}

template<class U>
void MyDualTemplatedClass<float,U>::Test() {
	std::cout<<" === Patial Specialialized Class For Float ===" << std::endl;
	Utilities::Test<int,float>();
	Utilities::Test<float,float>();
}

template<class U>
template<class V>
void MyDualTemplatedClass<float,U>::Foo() {

	MyDualTemplatedClass<U,U>::template Foo<V>();

}

//----------------------------------------------------


#endif /* CLASSTEMPLATES_INC_MYTEMPLATEDCLASS_H_ */

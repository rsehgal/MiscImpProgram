#include "MyTemplatedClass.h"

int main(){

	MyTemplatedClass<int> t;
	MyTemplatedClass<float> s;
	t.Foo<double>();
	s.Foo<char>();
	t.Test();
	s.Test();
	std::cout<<"======== Partial Specialization stuff ===========" << std::endl;
	MyDualTemplatedClass<int,char> tP;
	MyDualTemplatedClass<float,char> sP;
	MyDualTemplatedClass<double,char> dP;
	tP.Test();
	sP.Test();
	dP.Test();

	return 0;

}

#include "MyTemplatedClass.h"

int main(){

	MyTemplatedClass<int> t;
	MyTemplatedClass<float> s;
	t.Foo<double>();
	s.Foo<char>();
	return 0;

}

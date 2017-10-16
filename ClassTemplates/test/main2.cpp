#include "MyTemplatedClass2.h"

class TestClass;

int main(){
   MyTemplatedClass2<int> t;
   std::cout << "------- Testing it with a class declared with forward declaration -----------" << std::endl;
   MyTemplatedClass2<TestClass> u;
   
   return 0;   
}

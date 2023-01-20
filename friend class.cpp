#include <iostream>
using namespace std;

class B;

class A{
	private:
		int a;
		friend class B;
		public:
			A(){
				a=5;
			}
};

class B{
	private:
		int b;
		A obj1;
		public:
			B(){
				b=3;
			}
			int add(){
				return obj1.a+b;
			}
};

int main(){
	B b1;
	cout<<b1.add();
}

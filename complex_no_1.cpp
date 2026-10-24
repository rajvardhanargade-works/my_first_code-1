#include<iostream>
using namespace std;
class complex{
	private:
		float real;
		float imag;
	public:
		complex(){
			real=0;
			imag=0;
		}
		complex(float r,float i){
			real=r;
			imag=i;
		}
		~complex(){
		}
		void display(){
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		complex operator+(complex c){
			float r=real+c.real;
			float i=imag+c.imag;
			return complex(r,i);
		}
};
int main(){



complex c1(2,10);
cout<<"Ist complex number is"<<endl;
c1.display();

complex c2(5,5);
cout<<"2nd complex number is"<<endl;
c2.display();

complex sum=c1+c2;
cout<<"sum is"<<endl;
sum.display();

return 0;


}






#include <iostream>
using namespace std;

int main(){
  int number=1;
  bool condition=true;
  
  while(condition)
  {
    for(int i=2;i<21;i++)
      {
	if(number%i!=0)
	  {
	    condition=false;
	    i=23;
	  }
      }
    if(condition)
      {
	cout<<number<<endl;
	condition=false;
      }
    else
      {
	number++;
	condition=true;
      }
  }
}

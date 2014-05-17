#include <iostream>
#include <math.h>
using namespace std;
/*Question 3 What is the largest prime factor of the number 600851475143
  using mathod like sieve of Eratosthenes to check if the number is prime
  and see if it's able to have a zero mod
*/


int main(){
  long number=600851475143;
  cout<<number<<endl;
  long sqr=sqrt(number);
  cout<<sqr<<endl;
  bool arr[sqr];
  for(int i=0;i<sqr;i++)
    {
      arr[i]=true;
    }
  
  int newline=0;
  
  for(int i=2;i<sqr;i++)
    {
      if(arr[i]&&number%i==0)
	{
	  if(newline%5==0)
	    {
	      cout<<i<<endl;
	    }
	  else
	    {
	      cout<<i<<" ";
	    }
	  for(int j=i;j<sqr;j=j+i)
	    {
	      arr[j]=false;
	    }
	  newline++;
	}
    }

}

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
 */
#include <iostream>
#include <vector>
using namespace std;

vector<int> prime;

bool checkprime(int number){
  for(int i=0; i<prime.size();i++){
    if(number%prime[i]==0){
      return false;
    }
  }
  return true;
}

int main(){
  int count=1;
  int i=2;
  while( count <= 10001 ){
    if(checkprime(i))
      {
	cout<<count<<" "<<i<<endl;
	prime.push_back(i);
	if( count == 10001 ){
	  cout<<i<<endl;
	  break;
	}
	count=count+1;
      }
    i=i+1;
  }

}

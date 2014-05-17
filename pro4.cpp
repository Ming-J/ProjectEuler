#include <iostream>
#include <sstream>
using namespace std;


string convertInt(int number)
{
  stringstream ss;
  ss<<number;
  return ss.str();
}

bool isPalindrom(string str)
{
  int len=str.length();
  int count=len-1;
  for(int i=0;i<len;i++)
    {
      if(str[i]!=str[count]){
	return false;
      }
      else{
	count--;
	i++;
      }
    }
  return true;
}


int main(){
  int number1=999;
  int number2=999;
  int product=number1*number2;
  string pil=convertInt(product);
  cout<<pil[2]<<endl;   
  string sds="tacocat";
  


   
   
   

  if(isPalindrom("tacocat"))
    {
      cout<<"this is ture"<<endl;
    }
  return 0;
}

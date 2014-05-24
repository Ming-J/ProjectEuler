#include <iostream>
using namespace std;

int main(){
  int sumsquare=0;
  int squaresum=0;

  for(int i=1;i<101;i++)
    {
      sumsquare=sumsquare+(i*i);
    }
  for(int i=1;i<101;i++)
    {
      squaresum=squaresum+i;
    }
  squaresum=squaresum*squaresum;
  
  cout<<squaresum-sumsquare<<endl;

  return 0;
}

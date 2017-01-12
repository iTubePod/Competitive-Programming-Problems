#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main ()
{
  std::string in, out;
  std::stringstream ss;
  out="";
  int x=5;
  for (int i = 1; i <= 5; i++){
    std::cin>>in;
    std::size_t found = in.find("FBI");
    if (found!=std::string::npos)
    {
      ss<<i;
      out=out + ss.str() + " ";
    }
    ss.str(std::string());
  }
  if(out=="")
    std::cout<<"HE GOT AWAY!"<<std::endl;
  else
    std::cout<<out<<std::endl;
}

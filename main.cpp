#include <iostream>


using namespace std;

int main()
{
    int time;
    float litr =2;
    double pow ,div ;
    float bottle=1.5;
    cout << "Enter : How long you stay at shower(in minutes)?" << endl;
    cin  >> time ;
   if (  time<=40 ){
    pow = time * litr;
    cout << "You spent "<<pow<<" litrs"<<endl;
    div = pow/bottle ;
    cout << " You spent water "<< div <<" in bottles";
  }
  else {
    cout<<"You stay at shower very long";
  }
    return 0;
}

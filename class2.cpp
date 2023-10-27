//22070123114
//experiment-11-functions in class
#include <iostream>
using namespace std;

class cuboid{ //creating class cuboid
public:
double height=2.0; //enetring values
double width=3.0;
double length=5.0;

double volume(){
double v;
v=height*width*length;
return v;
}
void disp_vol(double vol){
cout<<"Volume:"<<vol<<endl; //print volume 
}
};
int main()
{
cuboid cuboid1;
double vol=cuboid1.volume();
cuboid1.disp_vol(vol); //print the final value
}

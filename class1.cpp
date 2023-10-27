//22070123114
//experiment-11-2
# include <iostream>
using namespace std;
class Cuboid //creating a class "Cuboid"
{   
    public:
    float length;
    float breadth;
    float height;
};
int main()
{
    Cuboid volume;// creating an object "volume"
    
    volume.length=2;
    volume.breadth=3;
    volume.height=4;
   
    cout<<"Length:"<<volume.length<<endl;
    cout<<"Breadth:"<<volume.breadth<<endl;
    cout<<"Height:"<< volume.height<<endl;
    cout<<"Volume:"<<volume.length*volume.breadth*volume.height;
}
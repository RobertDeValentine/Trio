#include <iostream>
using namespace std;

void bigToSmall( int &, int &, int &); // <-- ADD YOUR FUNCTION PROTOTYPE HERE

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  bigToSmall(red, green, blue); // <-- ADD YOUR FUNCTION CALL HERE


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void bigToSmall(int &first, int &second, int &third) 
{   
        int biggest, middle, smallest, temp;
        if(first<second)
        {
            temp = first;
            first = second;
            second = temp;
        }
        if( second < third)
        {
                temp = second;
                second = third;
                third = temp;
        }
        if(first<second)
        {
            temp = first;
            first = second;
            second = temp;
        }
 

  return;
}









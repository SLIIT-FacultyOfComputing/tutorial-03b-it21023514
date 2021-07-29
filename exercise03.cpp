//Ex 3

#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct Box{
  int height;
  int width;
  int length;

}Box1,Box2;



// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> Box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> Box1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> Box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> Box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> Box2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(Box1.height,Box1.width ,Box1.length )
             + volume(Box2.height,Box2.width ,Box2.length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  return(height * width * length);
}
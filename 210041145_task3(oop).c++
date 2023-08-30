#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Rectangle{
    private:
    float width;
    float length;
    public:
    Rectangle(float length=1.0, float width=1.0){
        length = length;
        width = width;
    }
    float Perimeter()
    {
        return 2*(width+length);
    }
    float Area()
    {
        return length*width;
    }
    float the_diagonal()
    {
        return sqrt(length*length + width*width);
    }
    float Angle_length() {
        
        return atan(width / length)*(180/3.1416);
    }
  void set(float new_l, float new_w)
  {
    if(new_l == 1.0 && new_w == 20.0 || new_l == 20.0 && new_w == 1.0)
    {
        length = new_l;
        width = new_w;
    }
  }
  float get_width()
  {
    return width;
  }
  float get_length()
  {
    return length;
  }

};
int main()
{
    Rectangle rect(20, 30);
    cout<<(float) rect.Perimeter();
    cout<<rect.Area();
    cout<<rect.the_diagonal();
    cout<<rect.Angle_length();
     rect.set((float) 12.0,(float) 10.0);
    //cout<<rect.set((float) 12.0,(float) 10.0);
    cout<<rect.get_length();
    cout<<rect.get_width();
    return 0;
}

#include<iostream>
using namespace std;
class Counter{
private:
    int count,incr;
    public:

void setIncrementStep(int step_val)

{ 
    incr = step_val;

}
 int getcount()
{   

    return count;
}
void increment()
{
    if(count>0)
    {
        count += incr;
    }
}
void resetcount()
{
    count = 0;

}
};
int main()
{
    Counter num;
    num.setIncrementStep(6);
    cout <<num.getcount()<<"\n";
    num.increment();
    cout <<num.getcount()<<"\n";
    num.resetcount();
    cout << num.getcount()<<"\n";
}










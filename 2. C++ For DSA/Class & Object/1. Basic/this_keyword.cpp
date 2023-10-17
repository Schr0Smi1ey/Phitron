#include<bits/stdc++.h>
using namespace std;
// this = (is a pointer to the object)
class car
{
    public: 
        string brand;
        int price;
        
        car(string brand,int price)
        {
            this->brand = brand; 
            (*this).price = price;
            print(); // we can simply call the print function here to assign and print the value together
        }
        void print()
        {
            cout<<brand<<" "<<price<<endl;
        }
};
int main()
{
    car mycar("BMW",220000);
    car wifecar("TOYOTA",11000);
    // mycar.print();
}
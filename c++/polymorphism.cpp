#include <iostream>
using namespace std;
// 1. funcion overloading.
// 2. operetor overloding.
// 3. vertual function.
//--------------------------------------------------------------------
// 1. function over loading.
// class maths
// {
// public:
//     int calculate(int r)
//     {
//         return 3.14 * r * r;
//     }
//     int calculate(int a, int b)
//     {
//         return a * b;
//     }
//     // two funtion with same name but with diffrante perameter is calld function overload.
// };
// int main()
// {
//     maths m1,m2;
//     cout << "area of rectangle = " << m1.calculate(3,4) << endl;
//     cout << "area of tringle = " << m2.calculate(3) << endl;
//     return 0;
// }
// //-------------------------------------------------------------------------------------------
// // 2. operetor overloding.
// class math
// {
//     int real, img;

// public:
//     math(int real, int img)
//     {
//         this->real = real;
//         this->img = img;
//     }
//     math operator+(const math &c)
//     {
//         math sum(this->real + c.real, this->img + c.img);
//         return sum;
//     }
//     void print()
//     {
//         cout << real << " + i" << img << endl;
//     }
// };
// int main()
// {
//     math a(4, 5);
//     math b(3, 4);
//     math c = a + b;
//     c.print();
//     return 0;
// }
//--------------------------------------------------------------------------------------------
// 3. vertual function.
#include <vector>
class Animal
{
public:
    virtual void call() = 0;
     //Virtual destructor
    virtual ~Animal() {}
};
class dog : public Animal
{
public:
    void call() override
    {
        cout << "dog called " << endl;
    }
};
class cat : public Animal
{
public:
    void call() override
    {
        cout << "cat called " << endl;
    }
};
int main()
{
    // animal *a;
    // a = new cat;
    // a->call();
    // a = new dog;
    // a->call();
    Animal *a;
    vector<Animal *> animal;
    animal.push_back(new dog());
    animal.push_back(new cat());
    animal.push_back(new dog());
    animal.push_back(new cat());
    for (int i = 0; i < animal.size(); i++)
    {
        a = animal[i];
        a->call();
    }
    for (int i = 0; i < animal.size(); i++)
    {
        delete animal[i];
    }
    return 0;
}
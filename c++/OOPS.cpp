#include <iostream>
using namespace std;
// 1. get data of 3 student using class ande array.
// 2. get data and print using public and private.
// 3. contructor typr.
// 4. statics and encapsulation.
// 5. inharitance single inharitance.
// 6. inheritance multilevel inharitance.
// 7. inheritance multipal inharitance.
// 8. inheritance hierarchical inharitance.
// 9. inharitance hybride inharitance.
// 10. inheritance multipath inharitance.
//--------------------------------------------------------------------------
// 1. get data of 3 student using class ande array.
// class student
// {
// public:
//     string name;
//     int age, roll_num;
//     string grade;
// };

// int main()
// {
//     student s1[3];

//     for (int i = 0; i < 3; i++)
//     {
//         cout << "enter name of student " << i+1 << " = ";
//         cin.ignore(); // Clear newline left in the buffer
//         getline(cin,s1[i].name);
//         cout << "enter age of student " << s1[i].name << " = ";
//         cin >> s1[i].age;
//         cout << "enter roll number of student " << s1[i].name << " = ";
//         cin >> s1[i].roll_num;
//         cout << "enter grade of student " << s1[i].name << " = ";
//         cin >> s1[i].grade;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "name of student " << i+1 << " = " << s1[i].name << endl;
//         cout << "age of student " << i+1 << " = " << s1[i].age << endl;
//         cout << "roll number of student " << i+1 << " = " << s1[i].roll_num << endl;
//         cout << "grade of student " << i+1 << " = " << s1[i].grade << endl;
//         cout<<"-------------------------------------------";
//     }

//     return 0;
// }
//--------------------------------------------------------------------------
// 2. get data and print using public and private and function.
// class student
// {
// private:
//     string name;
//     int age, roll_num;
//     string grade;

// public:
//     void getname(string s)
//     {
//         name = s;
//     }
//     void getage(int n)
//     {
//         age = n;
//     }
//     void showname()
//     {
//         cout << name << endl;
//     }
//     void showage(int pin)
//     {
//         if (pin == 5321)
//             cout << age << endl;
//             else cout<<"invelid number";
//     }
// };

// int main()
// {
//     student s;
//     s.getname("suraj");
//     s.showname();
//     s.getage(23);
//     int n;
//     cout<<"inter pin to show age = ";
//     cin>>n;
//     s.showage(n);

//     return 0;
// }
//--------------------------------------------------------------------------
// 3. constructor typs.
// class fruit
// {
//     string name;
//     int price;
//     string grade;
//     int *data; // dinamicly memory allocation

// public:
//     // default cunstrictor no argyu paas for inialise.
//     fruit()
//     {
//         name = "apple";
//         price = 70;
//         grade = "a+";
//         data = new int;
//         *data = 100;
//     }
//     // perametrized constructur
//     // inline fruit(string a, int b, string c)
//     //     : name(a), price(b), grade(c) {}

//     // when we paas same name argyu as class then
//     // we need to use this-> to make defrant

//     fruit(string name, int price, string grade)
//     {
//         this->name = name;
//         this->price = price;
//         this->grade = grade;
//     } // when we use same funtion then it is called function overload.

//     // copy cuntruction ye default hota hai lekin ese bna dene
//     //  se default wala kam nhi karta hai or & ka use karna jruri hai
//     // same address pe value bhejne ke liye.
//     fruit(fruit &a)
//     {
//         name = a.name;
//         price = a.price;
//         grade = a.grade;
//     }

//     void showdata()
//     {
//         cout << name << " " << price << " " << grade <<" "<<endl;
//     }
//     ~fruit()
//     { delete data;
//         cout << "destructor is called \n";
//     }
// };
// int main()
// {
//     fruit f1; // to call default contructor
//     f1.showdata();
//     fruit f2("mango", 65, "a"); // to call perameterised contructor or inline
//     f2.showdata();
//     fruit f3(f2); // to call copy constructor
//     f3.showdata();

//     return 0;
// }
//-------------------------------------------------------------------------------------
// 4. statics and encapsulation.
// class customer
// {
//     string name;
//     int balance, account_number;
//     static int total_account;
//     static int total_balance;

// public:
//     customer(string name, int account_number, int balance)
//     {
//         this->name = name;
//         this->balance = balance;
//         this->account_number = account_number;
//         total_account++;
//         total_balance += balance;
//     }
//     void dipposit(int amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//             total_balance += amount;
//         }
//     }
//     void withdrow(int amount)
//     {
//         if (amount <= balance && amount > 0)
//         {
//             balance-=amount;
//             total_balance-=amount;
//         }
//     }

//     static void totaldata()
//     {
//         cout << "number of account : " << total_account << endl;
//         cout << "total amount : " << total_balance << endl;
//     }
//     void showdata()
//     {
//         cout << name << " " << balance << " " << account_number << endl;
//     }
// };
// int customer ::total_account = 0;
// int customer ::total_balance = 0;

// int main()
// {
//     customer c1("suraj", 1, 1000);
//     c1.showdata();
//     customer c2("lala", 2, 2000);
//     c2.showdata();
//     customer c3("aayush", 3, 3000);
//     c3.showdata();
//     c1.dipposit(700);
//     c2.withdrow(600);
//     customer::totaldata();
// }
//-------------------------------------------------------------------------------------
// 5. inheritance single inharitance.
// class humen
// {
// protected:
//     string name;
//     int age;
//     static int total_student;
//     static int total_fees;

// public:
//     // humen(string name, int age)
//     // {
//     //     this->name = name;
//     //     this->age = age;
//     // }
//     static void showtotal()
//     {
//         cout << "total studen = " << total_student << "\ntotal fees = " << total_fees << endl;
//     }
// };
// int humen::total_student = 0;
// int humen::total_fees = 0;
// class student : public humen
// {
//     int roll_number;
//     int fees;

// public:
//     // student(string name, int age, int roll_number, int fees) : humen(name, age)
//     // {
//     //     this->roll_number = roll_number;
//     //     this->fees = fees;
//     //     total_student++;
//     //     total_fees += fees;
//     // } this is one way to set value buy paas value in class humen.

//     student(string name, int age, int roll_number, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->roll_number = roll_number;
//         this->fees = fees;
//         total_student++;
//         total_fees += fees;
//     } // another isme hame class humen  mai value pass nhi karni padti hai.

//     void showdata()
//     {
//         cout << name << "\nage " << age << "\nroll number " << roll_number << "\nfees " << fees << endl;
//         cout << "-----------------------------------------\n";
//     }
// };

// int main()
// {
//     student s1("suraj", 23, 203, 1000);
//     s1.showdata();
//     student s2("yaswant", 22, 202, 3000);
//     s2.showdata();
//     student s3("lala", 21, 201, 2000);
//     s3.showdata();
//     humen::showtotal();
// }
//-------------------------------------------------------------------------------------
// 6. inheritance multilevel inharitance.
// class humen
// {
// protected:
//     string name;
//     static int total_student;
//     static int total_fees;

// public:
//     static void showtotal()
//     {
//         cout << "total studen = " << total_student << "\ntotal fees = " << total_fees << endl;
//         cout<<"--------------------------------------------\n";
//     }
// };
// int humen::total_student = 0;
// int humen::total_fees = 0;
// class student : public humen
// {
// protected:
//     int age;

// public:
// void studentshow(){
//     cout<<"studen class called\n--------------------------------------\n";
// }
// };
// // multilevel calling
// class charge : public student
// {
//     int fees;

// public:
//     charge(string name, int age, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->fees = fees;
//         total_student++;
//         total_fees += fees;
//     }
//     void showdata()
//     {
//         cout << name << "\nage " << age << "\nfees " << fees << endl;
//         cout << "-----------------------------------------\n";
//     }

// };

// int
// main()
// {
//     charge s1("suraj", 23, 1000);
//     s1.showdata();
//     s1.studentshow();
//     charge s2("yaswant", 22, 3000);
//     s2.showdata();
//     charge s3("lala", 21, 2000);
//     s3.showdata();
//     humen::showtotal();
// }
// //-------------------------------------------------------------------------------------
// // 7. inheritance multipal inharitance.
// class humen
// {
// protected:
//     string name;
//     static int total_student;
//     static int total_fees;

// public:
//     void showname()
//     {
//         cout << name<<endl;
//     }
//     static void showtotal()
//     {
//         cout << "total studen = " << total_student << "\ntotal fees = " << total_fees << endl;
//         cout << "--------------------------------------------\n";
//     }
// };
// int humen::total_student = 0;
// int humen::total_fees = 0;
// class student
// {
// protected:
//     int age;

// public:
//     void studentshow()
//     {
//         cout << "total age = " << age<<endl;
//     }
// };
// // multipal calling
// class charge : public humen, public student
// {
//     int fees;

// public:
//     charge(string name, int age, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->fees = fees;
//         total_student++;
//         total_fees += fees;
//     }
//     void showdata()
//     {
//         showname();
//         studentshow();
//         cout<<"fees = "<<fees<<endl;
//         cout << "-----------------------------------------\n";
//     }
// };

// int main()
// {
//     charge s1("suraj", 23, 1000);
//     s1.showdata();
//     charge s2("yaswant", 22, 3000);
//     s2.showdata();
//     charge s3("lala", 21, 2000);
//     s3.showdata();
//     humen::showtotal();
// }
//-------------------------------------------------------------------------------------
// 8. inheritance hierarchical inharitance.
// class humen
// {
// protected:
//     string name;
//     int age;
//     static int total_student;
//     static int total_fees;
// };
// // hierarchical calling
// class student : public humen
// {
// protected:
//     int fees;

// public:
//     student(string name, int age, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->fees = fees;
//     }

// public:
//     void studentshow()
//     {
//         cout << name << endl;
//         cout << "age = " << age << endl;
//         cout << "total fees = " << fees << endl;
//         cout<<"-------------------------------------\n";
//     }
// };
// // hierarchical calling
// class teacher : public humen
// {
//     int salary;

// public:
//     teacher(string name, int age, int salary)
//     {
//         this->name = name;
//         this->age = age;
//         this->salary = salary;
//     }
//     void showteacher()
//     {
//         cout << name << endl;
//         cout << "age = " << age<<endl;
//         cout << "salary = " << salary << endl;
//         cout<<"-----------------------------------------\n";
//     }
// };

// int main()
// {
//     student s1("suraj", 23, 1000);
//     s1.studentshow();
//     teacher t1("sonika",34,17000);
//     t1.showteacher();
// }
//----------------------------------------------------------------------------------------
// 9. hybride inharitance.
// class student
// {
// protected:
//     string name;
//     int age;
// };
// class mal
// {
// public:
//     void showmal()
//     {
//         cout << "gender = male" << endl;
//     }
// };
// class femal
// {
// public:
//     void showfemale()
//     {
//         cout << "gender = female" << endl;
//     }
// };
// // hybride inharitence calling
// class boy : public student, public mal
// {
//     int fees;

// public:
//     boy(string name, int age, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->fees = fees;
//     }
//     void showboy()
//     {
//         cout << name << "\nage = " << age << "\nfees = " << fees << endl;
//         showmal();
//         cout << "--------------------------------------" << endl;
//     }
// };
// // hybride inharitence calling
// class girl : public student, public femal
// {
//     int fees;

// public:
//     girl(string name, int age, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->fees = fees;
//     }
//     void showgirl()
//     {
//         cout << name << "\nage = " << age << "\nfees = " << fees << endl;
//         showfemale();
//         cout << "-------------------------------------" << endl;
//     }
// };
// int main()
// {
//     boy b1("suraj", 23, 11000);
//     b1.showboy();
//     girl g1("sonika", 24, 13000);
//     g1.showgirl();

//     return 0;
// }
//-------------------------------------------------------------------------------------
// 10. inheritance multipath inharitance.
class humen
{
protected:
    string name;
    int age;
};
//  hierarchical calling
class student : public virtual humen
{
protected:
    int fees;
};
//  hierarchical calling
class teacher : public virtual humen
{
protected:
    int salary;
};
// multipath calling.
class principal : public student, public teacher
{
    int income;

public:
    principal(string name, int age, int income)
    {
        this->name = name;
        this->age = age;
        this->income = income;
    }
    void showprincipal()
    {
        cout << name << endl;
        cout << "age = " << age << endl;
        cout << "income = " << income << endl;
        cout << "-----------------------------------------\n";
    }
};

int main()
{
    principal p1("lala", 45, 50000);
    p1.showprincipal();
    return 0;
}
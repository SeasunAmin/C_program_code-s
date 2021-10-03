
#include<iostream>
#include<conio.h>
using namespace std;
class First {
public:
   int a, b, s;

   void input() {
       cout << "Enter two numbers:";
       cin >> a>>b;
   }
};
class Second : public First {
public:
   void add() {
       s = a + b;
   }
};
class Third : public Second {
public:

   void display() {
     cout << "Sum is:" << s;
   }
};
int main()
 {
     system("color 0A");
   Third th;
   th.input();
   th.add();
   th.display();
}

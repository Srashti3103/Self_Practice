#include<iostream>
using  namespace std;

class Animal 
{
   public :
   void eat()
   {
   	    cout << "This Animal eat food ," << endl;
   	
	   }	
};
class Mammal : public Animal 
{
	public : 
	void walk ()
	{
		cout << "This animal walk on land ."<< endl;
	}
};
class dog : public Mammal
{
	public :
		void bark ()
		{
			cout << "The dog barks ." << endl;
		}
};
int main() {
 dog d;
 d.eat();
 d.walk();
 d.bark();
 return 0;
}
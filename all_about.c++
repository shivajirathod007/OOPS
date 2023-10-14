#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;

int main()
{
    /*
    ==================================BENIFITS OF THE OOPS=================================================
          1----> better code reusability using objects and inheritace
          2----> principle of data hiding helps build secure sysytems
          3----> multiple objects can co-exist without any interference
          4----> software complexity can b easily managed

    =============================basics of OOPS==============================================================
    1.---> POP---> procedure oriented programing
          1.--->   consists of writing a set of instruction for the computer to follow
          2.--->   Main focus is on function and not on a flow of data
          3.--->   function can either use local or global data
          4.--->   Data moves openly from function to function

    2.---> OOPS---> object oriented programing
           1--->   Works on the concept of classes and objects
           2--->   A class is a template to create objects
           3--->   Treats data as a critical element
           4--->   Decomposes the problem in objects and builds data and function around the objects

     =====================================BASICS CONCEPT IN OOPS=============================================
           1---> CLASS :- basics templet to create objects
           2---> OBJECTS:- basic run time entities
           3---> DATA ABSTRACTION & ENCAPSULATION :- Wrappong data and functions into into single unit
           4---> INHERITANCE :- properties of one class can be inharited(copy) into other class using inhartance
           5---> POLYMORPHISM :- ability to take more than one forms.
           6---> DYNAMIC BINDING :- Code which will excue is not known until the program runs
           7---> MESSAGE PASSING :- Object.message(information) call format

     =======================================OPPS - classes and Objects=======================================
     c++ --> intialy called--> c with classes byb stroustroup
     class --> extension of structre (in c)

    *************structure*************************
    structures has limitations
    1.---> member are public there force we can access it
           from any function there is no data hiding in structure.
    2.--> no methods
    3.--> in c++ structure has automatically typedef(means we can call the structure from name in short you can declare structure variable )

    ******************CLASS************************
    1.--> classes have many methods and prporties
    2.--> it can make few members as private and public
    3.---> you can declare objects along with thier class declartion
    example:
         class shivaji{
             class difination
          }abhinay,shivam,shubham,etc;

    4.--> shiva.info=007 ---> it make no scense if info is private declerad in class

    ==========================================NESTING OF MEMBER FUNCTION*===========================================
    nesting function in c++ inshort we can use function in function to com[lete the tasks using the nesting of member
    e.g.
    void shiva::ones_complement()
   {
  checknum(); ----> here we use the another function in another function 😁😂
  for (int i = 0; i < s.length(); i++)
   {
      if (s.at(i) == '0')
      {
          s.at(i) = '1';
      }
      else
      {
          s.at(i) = '0';
      }
  }
  }

  =======================================================Memory alloction using ARRAY============================================
    1--->  i can't explain it through theroy thereforce check the below code :

  #include <iostream>
  #include <cstdlib>
  #include <cstring>
  #include <windows.h>
  using namespace std;
  class company
  {
  int Itemid[10];
  int itemprize[20];
  int counter;

  public:
  void initcounter(void) { counter = 0; }
  void setiteam(void);
  void display(void);
  };
  void company::setiteam(void)
  {
  // cout << "enter your IteamID: "<<counter+1;
  // cin >> Itemid[counter];
  // cout << endl
  //      << "enter your IteamPrize: ";
  // cin >> itemprize[counter];
  // counter++;
  int n;
  cout << "enter the number that you wanna set: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
      cout << endl
           << "enter your IteamID " << counter + 1
           << ": ";
      cin >> Itemid[counter];
      cout
          << "enter your IteamPrize: ";
      cin >> itemprize[counter];
      counter++;
  }
  }
  void company::display(void)
  {
  for (int i = 0; i < counter; i++)
  {
      cout << "the id of your iteam: " << Itemid[i] << "  ||  prize is: " << itemprize[i] << endl;
  }
  }
  int main()
  {
  company jagdab;
  jagdab.initcounter();
  jagdab.setiteam();
  jagdab.display();

  return 0;
  }
  ***********in this code we allocated the info/data in the counter using MOLLC*****


  ==================================properties of friend function====================================
  1---> not in the scope of class
  2---> since it is not in the scope of the class , it can't be called from the object of
  that classs.c1.compllex() === invalid
  3---> can be invoked without the help of any object
  4---> usually contans the object as arguments
  5---> can be decleard inside public or private section of the class
  6---> it can't the members by thier name  and need object_name.member_name to access any member

  **Individually declearing function as friends
    friend int calculator::sumrealcomplex(complex, complex);
    friend int calculator::sumCompcomplex(complex, complex);
  **aliter: declearing the entire calculator class as friend
    friend class calculator;




  =========================================constructor================================================
  1---> creating the constructor
  2---> constructor is a special member function with the same name as of the data of the class.
  3---> it is automticaly invoked(called)whenever an object is created
  4---> it should be decleared in the public section of the class
  5---> they are automaticaly invoked whenever object is created
  6---> they can't return values and no do not have return types
  7---> it can have default arguments
  8---> we can't refer to thier address


  **********************************Default constructor& parameterized constructor*************************
            defalut constructor ---->
                             constractor::constractor(void) // -------> this is called default constructor it takes no parameters.
                            {
                                     a = 50;
                                     b = 56;
                                     cout << "hii this is  a default constructor" << endl;
                            }
            Parametrized constructor---->
                            constractor::constractor(int x, int y) // -------> this is called 🌐🌐parametrized constructor it takes parameters.
                            {
                                    a = x;
                                    b = y;
                                    cout << "hii this is  a parameterized constructor" << endl;
                            }

  **************************************constructor overloading******************************************
                   class shiva
  {
      int a, b;

  public:
      shiva(int x, int y)
      {
          a = x;
          b = y;
      }
      shiva(int z)
      {
          a = z;
          b = 0;
      }
      void printer()
      {
          cout << "your ans is: " << a << " + " << b << "i" << endl;
      }
  };
    here we can see there two contructors
    and it access constructor as what we give the input

  int main()
  {
      shiva shiba(12, 6);
      shiba.printer();
      shiva knds(12);
      knds.printer();
      return 0;
  }


  ===============================================inharitace=======================================================












*********************************************multilevel enharitance*************************************************
if we are inhariting B from A & C from B: [A---->B---->C]
    1. A is the base class fpr b and b is the base class forc
    2. A,B,C called inharitance path
    check the multilevel_inharitance for details

*******************************************multilpel enharitance*****************************************************
    syntax for inharting in multiple inharitance
    class Derivedc: visiblity-mode base1, visiblity-mode base2
    {
        class body of class "Derivedc"
    };
  */

    return 0;
}

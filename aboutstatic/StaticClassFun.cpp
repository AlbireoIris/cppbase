#include<iostream> 
using namespace std; 

class Apple 
{ 
    public: 
        // static member function 
        static void printMsg() 
        {
            cout<<"Welcome to Apple!"<<endl; 
        }
        void PrintfApple()
        {
          printMsg();
        }
}; 

// main function 
int main() 
{ 
    // invoking a static member function 
    Apple apple;
    apple.PrintfApple();
} 

#include <iostream>
using namespace std;

class Swap{

    private:
      int num1; 
      int num2;

    public:
      void setNumber(int num1, int num2){
        this->num1 = num1;
        this->num2 = num2;
      }

       void swapNumbers(){

        // pointers declaration
        int temp, *ptrNum1, *ptrNum2;

        // address declaration  
        ptrNum1 = &num1; 
        ptrNum2 = &num2; 

        // swap values
        temp = *ptrNum1; 
        *ptrNum1 = *ptrNum2;
        *ptrNum2 = temp;

        // display output 
        cout << "First Number is: " << num1 << endl;        
        cout << "Second Number is: " << num2;       

      }
};

int main()
{   

    Swap obj;
    int x,y;
    
    cout << "Enter the numbers:\n"; 
    cin>>x>>y;
    
    obj.setNumber(x,y);   

    obj.swapNumbers();
    
    return 0;
}
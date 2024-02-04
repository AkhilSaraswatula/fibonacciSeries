#include <iostream>
using namespace std;
int main()
{
    int PreNum=1; /* first term of the series*/            
    int CurrentNum=1; /*second term of the series*/
    int a; /*variable to hold the next term*/
    int i;
    int num; /* the number of the terms the user wants */
    cout << "enter the number of terms: ";
    cin >> num;
    cout << "the fibonacci seires is : " << endl;5
    cout << PreNum << " " << CurrentNum; /*prints the first two numbers of the series*/
    for ( i=0; i <num -2; i++) /*loop to print the next number of the seires*/
    {
        a=CurrentNum+PreNum;
        PreNum=CurrentNum;
        CurrentNum=a;
        cout << " " << a ;/* prints the fibonacci Seires*/
     }
return 0;
}

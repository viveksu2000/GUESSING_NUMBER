// Online C++ compiler to run C++ program online
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int num,guess,tries=0;
    srand(time(0)); //random number generator
    int lowerLimit=1; 
    int upperLimit=100;
    num =rand() % (upperLimit - lowerLimit + 1) + lowerLimit;;// random number between 1 to 100
    cout<<"guess my number:";
   do {
        cout<<"enter a guess between 1 and 100:";
        cin>>guess;
        tries++;
        if(guess>num)
        cout<<"to high:";
        else if (guess<num)
        cout<<"to low:";
        else
        cout<<" Congratulations you got the correct Number: "<<tries<<"Found Number: "<<guess<<endl;

    }
    while(guess!=num);

        return 0;    

}
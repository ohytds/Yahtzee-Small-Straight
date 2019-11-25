#include <iostream>

using namespace std;

int main()
{
    int number[5];
    int A,B;

    for(int i=0; i<5; i++){

        cin>>number[i];
        if(number[i]<1 || number[i]>6) i =-1;

    }

    for(int j=0; j<5; j++){
        for(int i=0; i<4; i++){
             if(number[i]>number[i+1]){
                 A = number[i];
                 number[i] = number[i+1];
                 number[i+1] = A;
            }
        }
    }

    if(number[0]<=3){
        A = number[0]+1;
        B = number[1]+1;


        if(number[1]==A && number[2]==A+1 && number[3]==A+2){ 
             cout<<"YES"<<endl;
        }
        else if(number[2]==A && number[3]==A+1 && number[4]==A+2) { cout<<"YES"<<endl;}
        
        else if(number[2]==B && number[3]==B+1 && number[4]==B+2){cout<<"YES"<<endl;}

        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
   

    return 0;

}
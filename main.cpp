#include "Vector3D.h"
#include <iostream>
using namespace std;


int main()
{
int numberOfVectors;
char expr[5];
Vector3D v[10000];

cin>>expr>>numberOfVectors;
for(int i = 0 ; i < numberOfVectors ; i++){
        cin>>v[i];
}


   switch(*expr)
   {
       Vector3D sum;
       int num=0;
    case '+':

              for(int i = 0 ; i < numberOfVectors ; i++){
        sum=sum+v[i];
}
cout<<sum;
                break;
    case '-':

         sum=sum+v[0];
              for(int i = 1 ; i < numberOfVectors ; i++){
        sum=sum-v[i];
              }
              cout<<sum;
        break;
    case 'N':
        cout<<-v[0];
        for(int i = 1 ; i < numberOfVectors ; i++){
        cout<<" "<<-v[i];
}
        break;
    case '*':
        num=atoi(expr+1);
        cout<<v[0]*num;
        for(int i = 1 ; i < numberOfVectors ; i++){
        cout<<" "<<v[i]*num;
}
        break;
    default:
        num=atoi(expr);
    cout<<v[0]*num;
        for(int i = 1 ; i < numberOfVectors ; i++){
        cout<<" "<<v[i]*num;
}
        break;

   }


    return 0;
}

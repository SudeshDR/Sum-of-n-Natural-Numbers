#include<iostream.h>
#include<conio.h>
void main(){
    clrscr();
    int n,sum=0;
    cout<<"Enter number of digits you want to sum :";
    cin>>n;
    for( int i=1; i<=n; ++i){
       sum+=i;
    }
    cout<<"sum="<<sum;
    getch();
}
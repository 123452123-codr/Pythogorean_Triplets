# Pythogorean-triplets
A C++ program to check whether three numbers are Pythogorean triplets or not... Useful for several mathematical calculations...

Source code : 


<font face="Consolas">
#include<iostream.h>
<br>
#include<conio.h>
<br>
void main()
<br>
{
<br>
clrscr();

long int a,b,c;

cout<<"Enter the value of three sides:";

cin>>a>>b>>c;

if(a >= b+c || b >= a+c || c >= a+b)

{

cout<<"Error! Invalid input!";

else

{

if(a>b && a>c)

{

if(a*a == b*b+c*c)

cout<<"Yes";

else

cout<<"No";

}

else if(b>a && b>c)

{

if(a*a == b*b+c*c)

cout<<"Yes";

else

cout<<"No";

}

else

{

if(a*a == b*b+c*c)

cout<<"Yes";

else

cout<<"No";

}

}

}

getch();

}
  </font>

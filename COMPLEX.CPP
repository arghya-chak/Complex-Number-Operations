#include<iostream.h>
#include<conio.h>
class complex
   {
      float real, imag;
      public:
      friend complex add(complex, complex);
      friend complex sub(complex, complex);
      friend complex mul(complex, complex);
      friend complex div(complex, complex);
      void accept();
      void display();
   };
void complex::accept()
   {
      cout<<"\nEnter the real and imaginary parts of the number: \n";
      cin>>real>>imag;
   }
void complex::display()
   {
      cout<<real<<"+"<<imag<<"i";
   }
complex add(complex a, complex b)
   {
      complex c;
      c.real=a.real+b.real;
      c.imag=a.imag+b.imag;
      return c;
   }
complex sub(complex a, complex b)
   {
      complex c;
      c.real=a.real-b.real;
      c.imag=a.imag-b.imag;
      return c;
   }
complex mul(complex a, complex b)
   {
      complex c;
      c.real=(a.real*b.real)-(a.imag*b.imag);
      c.imag=(a.real*b.imag)+(a.imag*b.real);
      return c;
   }
complex div(complex a, complex b)
   {
      complex i, c;
      float d=(b.real*b.real)+(b.imag*b.imag);
      i.real=(a.real*b.real)+(a.imag*b.imag);
      i.imag=(-(a.real*b.imag))+(a.imag*b.real);
      c.real=i.real/d;
      c.imag=i.imag/d;
      return c;
   }
void main()
   {
      clrscr();
      complex c1, c2, c3;
      int n;
      c1.accept();
      c1.display();
      c2.accept();
      c2.display();
      cout<<"\n1.Add\n2.Subtract\n3.Multiplication\n4.Division\nEnter Choice: ";
      cin>>n;
      switch(n)
      {
	 case 1:c3=add(c1, c2);
		break;
	 case 2:c3=sub(c1, c2);
		break;
	 case 3:c3=mul(c1, c2);
		break;
	 case 4:c3=div(c1, c2);
		break;
      }
      cout<<"Result: ";
      c3.display();
      getch();
   }
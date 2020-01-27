#include<iostream>
using namespace std;
class Polynomial
{
  private:
      int degree;
	  int poly[20];

  public:

    Polynomial()

    {
		degree=0;
		for(int i=0;i<=degree;i++)
		{
			poly[i]=0.0;
		}

    }
    Polynomial(int deg)

    {
		degree=deg;

    }

  

    ~Polynomial()

    {

     cout<<"\n SCOPE OF OBJECT GET OVER ";

    }
 Polynomial(const Polynomial& f)
 {
 degree=f.degree;
 	for(int i=0;i<=degree;i++)
 	{
 		poly[i]=f.poly[i];
	 }
	 
 }
 Polynomial operator =(Polynomial f)
{
     degree=f.degree;
    {
        for (int i=0; i<=degree; i++)
        {
            poly[i]=f.poly[i];
        }
    }
}
	Polynomial &operator+( const Polynomial a)
	{int i,j;
		Polynomial p;
		
		if(degree<=a.degree)
		{p.degree=a.degree;
			for( i=0;i<=degree;i++)
			p.poly[i]=poly[i]+a.poly[i];
			for(;i<=a.degree;i++)
			p.poly[i]=a.poly[i];
	     }
	     else
	     {p.degree=degree;
	     	for( j=0;j<=a.degree;j++)
			p.poly[j]=poly[j]+a.poly[j];
			for(;j<=degree;j++)
			p.poly[j]=poly[j];
		 }
		return p;
	}
    Polynomial &operator-( Polynomial& a)
	{
		int i,j;
		Polynomial p;
		if(degree<=a.degree)
		{p.degree=a.degree;
			for( i=0;i<=degree;i++)
			p.poly[i]=poly[i]-a.poly[i];
			for(;i<=a.degree;i++)
			p.poly[i]=-a.poly[i];
	     }
	     else
	     {p.degree=degree;
	     	for( j=0;j<=a.degree;j++)
			p.poly[j]=poly[j]-a.poly[j];
			for(;j<=degree;j++)
			p.poly[j]=poly[j];
		 }
		return p;
	}

    void storePolynomial()                      

    {
    	for(int i=0;i<=degree;i++)
    	{
    		cin>>poly[i];
		}

     

    }

    void display()

    {
    	for(int i=0;i<=degree;i++)
    	{
    		cout<<poly[i];
    		 if (i != 0) 
       		 cout << "x^" << i ; 
      		 if (i != degree) 
      		 cout << " + "; 
    } 
	}

    

};

int main()

{

  int degFirst, degSecond;
cout<<" ENTER DEGREE FOR FIRST POLYNOMIAL\n";
cin>>degFirst;
cout<<" ENTER DEGREE FOR SECOND POLYNOMIAL\n";
cin>>degSecond;

  Polynomial firstPolynomial(degFirst);

  Polynomial secondPolynomial(degSecond);

  Polynomial thirdPolynomial;
cout<<" ENTER COEFFICIENT FOR FIRST POLYNOMIAL\n";
  firstPolynomial.storePolynomial();
cout<<" ENTER COEFFICIENT FOR SECOND POLYNOMIAL\n";
  secondPolynomial.storePolynomial();

  

  thirdPolynomial=firstPolynomial+secondPolynomial;

  Polynomial fourthPolynomial=firstPolynomial-secondPolynomial;

  
	cout<<"\n FIRST POLYNOMIAL\n";
  firstPolynomial.display();
	cout<<"\n SECOND POLYNOMIAL \n";
  secondPolynomial.display();
	cout<<"\n THIRD POLYNOMIAL \n";
  thirdPolynomial.display();
	cout<<"\n FOURTH POLYNOMIAL \n";
  fourthPolynomial.display();
   Polynomial fifthPolynomial=firstPolynomial;
  cout<<"\n FIFTH POLYNOMIAL BY COPING FIRST POLYNOMIAL \n";
	fifthPolynomial.display();
	firstPolynomial=fourthPolynomial;
	cout<<"\n BY ASSIGNMENT OPERATOR FIRST POLYNOMIAL \n";
	firstPolynomial.display();
}

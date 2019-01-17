#include<iostream.h>
class calculate
{
	private:
		int x,y;

	public:
		int add(int x,int y);
		int sub(int x,int y);
		int mul(int x,int y);
		int div(int x,int y);
};
int main()
{
	int n
	calculate c;
	cout<<"Enter two numbers on which you want to perform arithmetic operations";
	cin>>a>>b;
	cout<"Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division";
	cin>>n;
	switch(n)
	{
		case 1:
			c.add(a,b);
			break;
		case 2: 
			c.sub(a,b);
			break;
		case 3:
			c.mul(a,b);
			break;
		case 4:
			c.div(a,b);
			break;
		default:
			exit(0);
	}

}

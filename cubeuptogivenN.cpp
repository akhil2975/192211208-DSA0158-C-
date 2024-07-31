#include<iostream>
using namespace std;
class cubecal
{
private:
	int i,n;
public:
	cubecal()
	{
i=1;
n=0;
}
cubecal(int p, int q)
{
i=p;
n=q;
}
void display()
{
cout<<"enter the number :";
cin>>n;
for(i=1; i<=n; i++)
{
cout<<"The cube of "<<i<<" is ="<<(i*i*i)<<endl;
}
}
~cubecal()
{
cout<<" clear:";
}
};
int main()
{
int p,q;
cubecal obj(p,q);
obj.display();

}

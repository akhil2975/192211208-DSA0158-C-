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
cout<<"Please enter the number:"<<endl;
cin>>n;
for(i=1; i<=n; i++)
{
cout<<" cube of"<<i<<"is:"<<(i*i*i)<<endl;
}
}
};
int main()
{
int p,q;
cubecal object(p,q);
cubecal object2;
object.display();
}

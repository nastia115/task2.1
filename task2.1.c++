Задача 2
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{  
int a;
	cout<<"a:";
	cin>>a;
	if (a>0)
	a++;
	else
	a=a-2;
	cout<<a;
}
_________________________________________________________
Задача 4
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{  
   int a,b,c;
    int N=0;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;
    if(a>0) ++N;
    if(b>0) ++N;
    if(c>0) ++N;
	cout<<"The number of positive numbers:"<<N<<endl;
}
________________________________________________________
Задача12
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{  
	int a,b,c;
	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	cout<<"c:";
	cin>>c;
	if (a>b&&a>c){
		cout<<a;
	}
	else if (b>a && b>c){
		cout<<b;
	}
	else if (c>a && c>b){
		cout<<c;
	}
}
______________________________________________________----
	 Задача 22
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{  
	int x,y;
	cout<<"Input x: ";
	cin>>x;
	cout<<"Input y:";
	cin>>y;
	if (x>0 && y>0){
		cout<<"first quarter";
	}	
	else if (x<0 && y>0){
		cout<<"second quarter";
	}	
	else if (x<0 && y<0){
		cout<<"third quarter";
	}
	else if (x>0 && y<0){
		cout<<"fourth quarter";
	}
}
________________________________________________
	 Задача 25
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{  
	float x,f;
	cout<<"x:";
	cin>>x;
	if (x<-2 || x>2){
		cout<<"f(x)="<<2*x<<endl;
	}		
	else if (x>-2 || x<2){
		cout<<"f(x)="<<3*x<<endl;
	}											                                        
}

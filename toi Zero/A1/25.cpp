#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string x;
	cin>>x;
	if(x[0]=='A'||x[0]=='a'){
		cout<<"ace";
		if(x[1]=='D'||x[1]=='d'){
			cout<<" of diamonds";
		}
		if(x[1]=='H'||x[1]=='h'){
			cout<<" of hearts";
		}
		if(x[1]=='S'||x[1]=='s'){
			cout<<" of spades";
		}
		if(x[1]=='C'||x[1]=='c'){
			cout<<" of clubs";
		}
	}
	if(x[0]=='J'||x[0]=='j'){
		cout<<"jack";
		if(x[1]=='D'||x[1]=='d'){
			cout<<" of diamonds";
		}
		if(x[1]=='H'||x[1]=='h'){
			cout<<" of hearts";
		}
		if(x[1]=='S'||x[1]=='s'){
			cout<<" of spades";
		}
		if(x[1]=='C'||x[1]=='c'){
			cout<<" of clubs";
		}
	}
	if(x[0]=='Q'||x[0]=='q'){
		cout<<"queen";
		if(x[1]=='D'||x[1]=='d'){
			cout<<" of diamonds";
		}
		if(x[1]=='H'||x[1]=='h'){
			cout<<" of hearts";
		}
		if(x[1]=='S'||x[1]=='s'){
			cout<<" of spades";
		}
		if(x[1]=='C'||x[1]=='c'){
			cout<<" of clubs";
		}
	}
	if(x[0]=='K'||x[0]=='k'){
		cout<<"king";
		if(x[1]=='D'||x[1]=='d'){
			cout<<" of diamonds";
		}
		if(x[1]=='H'||x[1]=='h'){
			cout<<" of hearts";
		}
		if(x[1]=='S'||x[1]=='s'){
			cout<<" of spades";
		}
		if(x[1]=='C'||x[1]=='c'){
			cout<<" of clubs";
		}
	} 
	if(x[0]=='1'&&x[1]=='0'){
		cout<<"10";
		if(x[2]=='D'||x[2]=='d'){
			cout<<" of diamonds";
		}
		if(x[2]=='H'||x[2]=='h'){
			cout<<" of hearts";
		}
		if(x[2]=='S'||x[2]=='s'){
			cout<<" of spades";
		}
		if(x[2]=='C'||x[2]=='c'){
			cout<<" of clubs";
		}
	}
	if(x[0]=='2'||x[0]=='3'||x[0]=='4'||x[0]=='5'||x[0]=='6'||x[0]=='7'||x[0]=='8'||x[0]=='9'){
		cout<<x[0];
		if(x[1]=='D'||x[1]=='d'){
			cout<<" of diamonds";
		}
		if(x[1]=='H'||x[1]=='h'){
			cout<<" of hearts";
		}
		if(x[1]=='S'||x[1]=='s'){
			cout<<" of spades";
		}
		if(x[1]=='C'||x[1]=='c'){
			cout<<" of clubs";
		}
	}	
}

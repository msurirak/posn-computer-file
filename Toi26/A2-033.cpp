#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float tb,ta,mi,hour,min;
	cin>>tb;
	cin>>ta;
	mi=(floor((ta-tb)*100));
	hour=floor(mi/100);
	min=mi-hour*100;
//	cout<<"Raw "<<mi<<" Hour "<<hour<<" Min "<<min;
	if(min<15&&hour==0){
		cout<<"FREE";
	}
	else{
		hour++;
		if(hour==1){
			cout<<"25";
		}
		else{
			if(hour==2){
				cout<<"50";
			}
			else{
				if(hour==3){
					cout<<"80";
				}
				else{
					if(hour==4){
						cout<<"110";
					}
					else{
						if(hour==5){
							cout<<"145";
						}
						else{
							if(hour==6){
								cout<<"180";
							}
							else{
								if(hour>=7&&hour<=24){
									cout<<"250";
								}
								else{
									cout<<"ERROR";
								}
							}
						}
					}
				}
			}
		}
	}
}

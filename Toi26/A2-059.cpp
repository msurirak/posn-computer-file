#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	float avg,im;
	int d,n,k,i,tag,sum,first,last,cool=-5,ctag;
	cin>>n>>d;
	int result[d],tags[n],trend[n],x;
	string hashtags[5] = {"TechTrends", "EcoLife", "FoodieHeaven", "FashionWeek","HealthyLiving"};
	string trends[3] = {"GROWING", "DECLINING", "STABLE"};
	for(i=0;i<n;i++){
		cin>>tag;
		tags[i]=tag;
		sum=0;
		for(k=0;k<d;k++){
			cin>>x;
			if(k==0){
				first=x;
			}
			if(k==d-1){
				last=x;
			}
			sum=sum+x;
		}
		if(cool<sum){
			cool=sum;
			ctag=tag;
		}
		if(first<last){
			trend[i]=0;
		}
		if(first>last){
			trend[i]=1;
		}
		if(first==last){
			trend[i]=2;
		}
		result[tag]=sum;
	}
	cout<<fixed<<setprecision(2);
	for(i=0;i<n;i++){
		cout<<hashtags[tags[i]-1]<<": ";
		cout<<result[tags[i]]<<" total, ";
		im=result[tags[i]];
		avg=im/d;
		cout<<avg<<" avg, ";
		cout<<trends[trend[i]]<<"\n";
	}
	cout<<"Top performer: "<<hashtags[ctag-1];
}

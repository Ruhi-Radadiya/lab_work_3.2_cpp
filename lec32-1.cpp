//- hotel_id
//- hotel_name
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year
//- hotel_staff_quantity
//- hotel_room_quantity
#include<iostream>
#include<string.h>
using namespace std;

class Hotel{
    private:
        int id;
 	    char name[100];
 		char type[50];
 		int rating;
 		static char location[100];
 		int establish_year;
		char staf_quality[100];
		char room_quality[100];
	public:
		void setData(){
			cout<<"Enter ID: "<<endl;
			cin>>id;
			cout<<"Enter NAME: "<<endl;
			cin>>name;
			cout<<"Enter TYPE: "<<endl;
			cin>>type;
			cout<<"Enter RATING: "<<endl;
			cin>>rating;
			cout<<"Enter ESTABLISH YEAR: "<<endl;
			cin>>establish_year;
			cout<<"Enter STAF QUALITY: "<<endl;
			cin>>staf_quality;
			cout<<"Enter ROOM QUALITY: "<<endl;
			cin>>room_quality;
			cout<<"__________________________________"<<endl;
		}	
		void getData(){
			cout<<"__________HERE IT IS__________"<<endl;
			cout<<"ID : "<<id<<endl
				<<"NAME : "<<name<<endl
				<<"TYPE : "<<type<<endl
				<<"RATING : "<<rating<<endl
				<<"LOCATION :"<<location<<endl
				<<"ESTABLISH YEAR : "<<establish_year<<endl
				<<"STAF QUALITY : "<<staf_quality<<endl\
				<<"ROOM QUALITY : "<<room_quality<<endl;
				cout<<"__________________________________"<<endl;
		}
};

	char Hotel::location[100]="Surat";


int main(){
	int i,n;
  	
   	cout<<"Enter Hotel numbers:";
   	cin>>n;
   	
   	Hotel h[n];
   	
   	for(i=1;i<=n;i++){
   		h[i].setData();
   		h[i].getData();
	   }
    return 0;
}
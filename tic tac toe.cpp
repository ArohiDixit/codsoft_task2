#include<iostream>
using namespace std;

int main(){
	int c,i,z;
	int f=0;
	cout<<"\t__x_Tic Tack Toe_x__"<<endl<<endl<<endl;
	char a[9]={'1','2','3','4','5','6','7','8','9' };
	cout<<"\t\t  "<<a[0]<<" | "<<a[1]<<"  | "<<a[2]<<endl;
	cout<<"\t\t____"<<"|"<<"____"<<"|"<<"____"<<endl;
	cout<<"\t\t  "<<a[3]<<" | "<<a[4]<<"  | "<<a[5]<<endl;
	cout<<"\t\t____"<<"|"<<"____"<<"|"<<"____"<<endl;
	cout<<"\t\t  "<<a[6]<<" | "<<a[7]<<"  | "<<a[8]<<endl;
	cout<<"\t\t   "<<" |"<<"   "<<" |"<<"   "<<endl<<endl<<endl;
	for(i=0;i<9;i++){
		
		if(i==0||i%2==0){
	cout<<"  Player X:";
	cin>>c;
	switch(c){
		case 1:
			a[0]='X';
			break;
		case 2:
			a[1]='X';
			break;
		case 3:
			a[2]='X';
			break;
		case 4:
			a[3]='X';
			break;
		case 5:
			a[4]='X';
			break;
		case 6:
			a[5]='X';
			break;
		case 7:
			a[6]='X';
			break;
		case 8:
			a[7]='X';
			break;
		case 9:
			a[8]='X';
			break;
			
	}

}

else if(i==1||i%2!=0){

cout<<"  Player O:";
cin>>z;
switch(z){
		case 1:
			a[0]='O';
			break;
		case 2:
			a[1]='O';
			break;
		case 3:
			a[2]='O';
			break;
		case 4:
			a[3]='O';
			break;
		case 5:
			a[4]='O';
			break;
		case 6:
			a[5]='O';
			break;
		case 7:
			a[6]='O';
			break;
		case 8:
			a[7]='O';
			break;
		case 9:
			a[8]='O';
			break;
			
	}
}


    cout<<"\t\t  "<<a[0]<<" | "<<a[1]<<"  | "<<a[2]<<endl;
	cout<<"\t\t____"<<"|"<<"____"<<"|"<<"____"<<endl;
	cout<<"\t\t  "<<a[3]<<" | "<<a[4]<<"  | "<<a[5]<<endl;
	cout<<"\t\t____"<<"|"<<"____"<<"|"<<"____"<<endl;
	cout<<"\t\t  "<<a[6]<<" | "<<a[7]<<"  | "<<a[8]<<endl;
	cout<<"\t\t   "<<" |"<<"   "<<" |"<<"   "<<endl<<endl<<endl;
	
	if(a[0]=='x'&&a[1]=='x'&&a[2]=='x'){
		cout<<"  Player X won!!!"<<endl;
		f=4;
		break;
	}
	else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x'){
			cout<<"  Player X won!!!"<<endl;
			f=4;
			break;
		
	}
	else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x'){
			cout<<"  Player X won!!!"<<endl;
			f=4;
			break;
	}
		else if(a[0]=='x'&&a[3]=='x'&&a[6]=='x'){
			cout<<"  Player X won!!!"<<endl;
			f=4;
			break;
		
	}
	else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x'){
			cout<<"  Player X won!!!"<<endl;
			f=4;
			break;
	}
		else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x'){
			cout<<"  Player X won!!!"<<endl;
			f=4;
			break;
		
	}
	else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x'){
			cout<<"  Player X won!!!"<<endl;
			f=4;
			break;
	}
		else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x'){
			cout<<"  Player X won!!!"<<endl;
			f=4;
			break;
	}
	
	
	else if(a[0]=='O'&&a[1]=='O'&&a[2]=='O'){
		cout<<"  Player O won!!!"<<endl;
		f=4;
		break;
	}
	else if(a[3]=='O'&&a[4]=='O'&&a[5]=='O'){
			cout<<"  Player O won!!!"<<endl;
			f=4;
			break;
	}
	else if(a[6]=='O'&&a[7]=='O'&&a[8]=='O'){
			cout<<"  Player O won!!!"<<endl;
			f=4;
			break;
	}
		else if(a[0]=='O'&&a[3]=='O'&&a[6]=='O'){
			cout<<"  Player O won!!!"<<endl;
			f=4;
			break;
	}
	else if(a[1]=='O'&&a[4]=='O'&&a[7]=='O'){
			cout<<"  Player O won!!!"<<endl;
			f=4;
			break;
	}
		else if(a[2]=='O'&&a[5]=='O'&&a[8]=='O'){
			cout<<"  Player O won!!!"<<endl;
			f=4;
			break;
	}
	else if(a[0]=='O'&&a[4]=='O'&&a[8]=='O'){
			cout<<"  Player O won!!!"<<endl;
			f=4;
			break;
	}
		else if(a[2]=='O'&&a[4]=='O'&&a[6]=='O'){
			cout<<"  Player O won!!!"<<endl;
			f=4;
		break;
		
	}

}
if(f==0){
	cout<<"  Draw!!!";
}


}

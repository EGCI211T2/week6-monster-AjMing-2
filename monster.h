#ifndef monster_h
#define monster_h
#include <cstdlib>
#define MAX_HP 100
#define MAX_POTION 10

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
    void heal();
	void reset_hp(){ hp=0; }
	monster(string="Name", int=5,int=1);
	void display();
};

void monster::heal(){
	if(potion>1){
		 potion--;
		 hp++;
	}
}
void monster::Attack(monster &x){
           if(hp>x.hp) {
			     x.hp>1?x.hp-=10:x.hp=0;
				 hp--;
		   }
		   else{
			   x.hp-=2;
			   if(hp>1) hp--; else hp=0;
		   }
         //display();
		 cout<<name;
         cout<<" attacks ";
		 cout<< x.name<<endl;
		 
}

void monster::display(){
	cout<<"Name:"<<name<<endl;
		cout<<"hp:"<<hp<<endl;
	cout<<"potion:"<<potion<<endl;

}
monster::monster(string n,int h,int p){
                cout<<"What is your name??";
				cin>>name;
				srand(time(0));
				hp=rand()%MAX_HP;
				potion=rand()%MAX_POTION;
				cout<<"Monster "<<name<<" is here"<<endl;

}
#endif

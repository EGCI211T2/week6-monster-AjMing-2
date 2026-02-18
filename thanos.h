#ifndef thanos_h
#define thanos_h

class Thanos {
private:
	int stones;
	int hp; 
public:
	/* constructor and destructor */
	Thanos(int =0,int=1000); //stone hp
    ~Thanos();
	void snap_finger(monster[],int); 
	/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};
void Thanos::snap_finger(monster m[],int ){


}
Thanos::Thanos(int n,int h ){ //stone hp
       stones=n;
	   hp=h;
	   cout<<"I am Thanos"<<endl;
}

void Thanos::operator++(){
	++stones;
}

Thanos::~Thanos(){
	cout<<"Thanos is gone"<<endl;

}

#endif

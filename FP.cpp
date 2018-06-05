#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class Person
{	
	public:
	string name;
	Person(string name)
	{
		this->name = name;
	}				
};
class Skill
{
	public:
		string skillName;
		int Power;
		int usage;
	Skill()
	{
		this->skillName = "";
		this->Power = 0;
		this->usage = 0;
	}
	Skill(string skillName, int Power, int usage)
	{
		this->skillName = skillName;
		this->Power = Power;
		this->usage = usage;
	}
	int usageProblem()
	{
		if(this->usage <=0)
		{
			return 0;
		}
		else
		{
			this->usage -=1;
			return 1;
		}
	}
};
class Monster
{
	public:
		string name;
		int hp;
		int level;
		char element;
		double multiplier;
	Monster()
	{
		this->name = "";
		this->hp = 1;
		this->level = 1;
		this->element = 'N';
		this->multiplier = 1;
	}
	Monster(string name, int hp, int level, char element, double multiplier)
	{
		this->name =name;
		this->multiplier = multiplier;
		this->hp = hp;
		this->level = level;
		this->element = element;
	}
	void updateHP(int base)
	{
		double temp = this->level*this->multiplier;
		double temp2 = base*temp;
		this->hp = temp2;
		
	}
	void updateLvl()
	{
		this->level += 1;
		cout<<"\n You leveled up\n";
	}
};


class Leviamon : public Monster
{
	public:
		int basehp;
		Leviamon(int lvl)
		{
			this->name = "Leviamon";
			this->hp = 400;
			this->level = lvl;
			this->basehp = 400; 
			this->element = 'W';
			this->multiplier = 3.1;
		}
};
class Vilemon : public Monster
{
	public:
		int basehp;
		Vilemon(int lvl)
		{
			this->name = "Vilemon";
			this->hp = 550;
			this->level = lvl;
			this->basehp = 550; 
			this->element = 'G';
			this->multiplier = 1.35;
		}
};
class Valkyriemon : public Monster
{
	public:
		int basehp;
		Valkyriemon(int lvl)
		{
			this->name = "Valkyriemon";
			this->hp = 400;
			this->level = lvl;
			this->basehp = 200; 
			this->element = 'N';
			this->multiplier = 2.3;
		}
};
class Severnymon : public Monster
{
	public:
		int basehp;
		Severnymon(int lvl)
		{
			this->name = "Severnymon";
			this->hp = 50;
			this->level = lvl;
			this->basehp = 50; 
			this->element = 'F';
			this->multiplier = 1.75;
		}
};
class Gigasupermon : public Monster
{
	public:
		int basehp;
		Gigasupermon(int lvl)
		{
			this->name = "Gigasupermon";
			this->hp = 1000;
			this->level = lvl;
			this->basehp = 1000; 
			this->element = 'N';
			this->multiplier = 1.3;
		}
};

class InfernoStrike : public Skill
{
public:
    InfernoStrike()
    {
        this->skillName = "Inferno Strike";
        this->Power = 250;
        this->usage = 5 ;
    }
    };
class HydroBlaster : public Skill
{

public:
	
    HydroBlaster()
    {
        this->skillName = "Hydro Blaster";
        this->Power = 350;
        this->usage = 6 ;
    }};
class WaterTornado : public Skill
    {
    	public:
	WaterTornado()
    {
        this->skillName = "Water Tornado";
        this->Power = 300;
        this->usage = 6;
    }};
class PoisonScratch: public Skill

   {
   	public:
   PoisonScratch()
    {
        this->skillName = "Poison Scratch";
        this->Power = 200;
        this->usage = 4 ;
    }};
class NatureKiss : public Skill
{
public:
   NatureKiss()
    {
        this->skillName = "Nature Kiss";
        this->Power = 400;
        this->usage = 6 ;
    }};
int main()
{
	cout << "-------------WELCOME TO BINUSMON BattleGrounds (text based)-------------\n";
	cout<< "\nWhat is your name?\n(your first name only)\n";
	string name;
	cin>> name;
	Person main(name);
	cout<< "Hi there, "<< main.name<<" let me give u something\n";
	Gigasupermon mainmon(5);
	Valkyriemon Boss(10);
	cout<< "You have acquired "<< mainmon.name; 
	PoisonScratch skill2;
	InfernoStrike skill4;
	HydroBlaster skill5;
	WaterTornado skill6;
	cout<<"\n\nYou are currently in a city, would you like to:\n1.Look Around\n2.Go outside:\n";
	Skill skill7("AeroBlast", 3000,10);
	Skill skill8("HellFire", 1500,10);
	Skill skill1("Heaven Roar",1500,5);
	Skill skill3("AngelTears",450, 5);
	Skill MainmonSkill[2];
	MainmonSkill[1] = skill3;
	MainmonSkill[0] = skill1;
	Skill BossSkill[2];
	BossSkill[0] = skill7;
	BossSkill[1] = skill8;
	int a;
	int dead = 0;
	cin>> a;
	if(a==1)
	{
		cout<<"\n\nYou met a drug dealer and stop worrying about your adventure\n"
		<<"\nTHE END";
	}
	else if(a==2)
	{
		bool loop = true;
		cout<< "YOUR ADVENTURE BEGINS NOW!\n";
		while (loop==true)
		{
			Boss.updateHP(Boss.basehp);
			mainmon.updateHP(mainmon.basehp);
			cout<<"\nWhere do you want to go?\n";
		
			cout<<" 1.Crater Fields\n 2.Meteorite Mountain \n 3.Swampy River\n\n";
	
	int b;
	cin>> b;
	if (b == 1)
	{
	cout<< "\nYOU HAVE ARRIVED AT THE CRATER FIELDS!!\n"
		<< "WILD MONSTER APPEARED\n\n";
		cout << "1. Battle\n2. Run\n";
		int choice;
		cin>>choice;
		
		if(choice==1)
		{
			srand((int) time(0));
			int r = (rand() % 5)+1;
			Vilemon A(r);
			
			A.updateHP(A.basehp);
			cout<<"WILD "<< A.name <<" IS HERE\n";
			cout<<"\nit is level "<<A.level<<endl;
			for(int turn = 0; turn<10 ; turn++)
			{
				if(A.hp <=0)
				{
					cout<<"\nVilemon is dead";
					mainmon.updateLvl();
					break;
				}
				else if (A.hp>0)
				{
					cout<< A.name<< " has "<<A.hp<< " left\n";
					cout<<"Attack! use:\n1."<<MainmonSkill[0].skillName<<"\n2."<<MainmonSkill[1].skillName<<endl;
					int num;
					cin>>num;
					
					if(num==1)
					{
							cout<< mainmon.name<<" uses "<< MainmonSkill[0].skillName<<" and deals "<<MainmonSkill[0].Power<<"!!!\n";
							A.hp -= MainmonSkill[0].Power;
					}
					if(num==2)
					{
							cout<< mainmon.name<<" uses "<< MainmonSkill[1].skillName<<" and deals "<<MainmonSkill[1].Power<<"!!!\n";
							A.hp -= MainmonSkill[1].Power;
						
					}
					cout<< A.name<<" uses "<< skill2.skillName<< " and dealt "<< skill2.Power;
					mainmon.hp -= skill2.Power;
					cout<<"\n"<<mainmon.name<<" has "<< mainmon.hp<<" left\n\n";
				}
			}
		}
		else if(choice ==2)
		{
			cout<< "Ok you fled instead of fighting and died\n";
			cout<< "THE END";
			dead = 1;
			break;
		}
	}
	if (b == 3)
	{
	cout<< "\nYOU HAVE ARRIVED AT THE SWAMPY RIVER!!\n"
		<< "WILD MONSTER APPEARED\n\n";
		cout << "1. Battle\n2. Run\n";
		int choice;
		cin>>choice;
		
		if(choice==1)
		{
			srand((int) time(0));
			int r = (rand() % 5)+1;
			Leviamon A(r);
			
			A.updateHP(A.basehp);
			cout<<"WILD "<<A.name<<" IS HERE\n";
			cout<<"\nit is level "<<A.level<<endl;
			for(int turn = 0; turn<6 ; turn++)
			{
				if(A.hp <=0)
				{
					cout<<"\n" << A.name<<" is dead";
					mainmon.updateLvl();
					break;
				}
				else if (A.hp>0)
				{
					int uses;
					cout<< A.name<< " has "<<A.hp<< " left\n";
					cout<<"Attack! use:\n1."<<MainmonSkill[0].skillName<<"\n2."<<MainmonSkill[1].skillName<<endl;
					int num;
					cin>>num;
					if(num==1)
					{
							cout<< mainmon.name<<" uses "<< MainmonSkill[0].skillName<<" and deals "<<MainmonSkill[0].Power<<"!!!\n";
							A.hp -= MainmonSkill[0].Power;
					}
					if(num==2)
					{
							cout<< mainmon.name<<" uses "<< MainmonSkill[1].skillName<<" and deals "<<MainmonSkill[1].Power<<"!!!\n";
							A.hp -= MainmonSkill[1].Power;

					}
					cout<< A.name<<" uses "<< skill5.skillName<< " and dealt "<< skill5.Power;
					mainmon.hp -= skill5.Power;
					cout<<"\n"<<mainmon.name<<" has "<< mainmon.hp<<" left\n\n";
					
				}
				
			}
		}
		else if(choice ==2)
		{
			cout<< "Ok you fled instead of fighting and died\n";
			cout<< "THE END";
			dead = 1;
			break;
		}
	}
if (b == 2)
	{
	cout<< "\nYOU HAVE ARRIVED AT THE METEORITE MOUNTAIN!!\n"
		<< "WILD MONSTER APPEARED\n\n";
		cout << "1. Battle\n2. Run\n";
		int choice;
		cin>>choice;
		
		if(choice==1)
		{
			srand((int) time(0));
			int r = (rand() % 5)+1;
			Severnymon A(r);
			
			A.updateHP(A.basehp);
			cout<<"WILD "<<A.name<<" IS HERE\n";
			cout<<"\nit is level "<<A.level<<endl;
			for(int turn = 0; turn<6 ; turn++)
			{
				if(A.hp <=0)
				{
					cout<<"\n" << A.name<<" is dead";
					mainmon.updateLvl();
					break;
				}
				else if (A.hp>0)
				{
					cout<< A.name<< " has "<<A.hp<< " left\n";
					cout<<"Attack! use:\n1."<<MainmonSkill[0].skillName<<"\n2."<<MainmonSkill[1].skillName<<endl;
					int num;
					cin>>num;
					if(num==1)
					{
							cout<< mainmon.name<<" uses "<< MainmonSkill[0].skillName<<" and deals "<<MainmonSkill[0].Power<<"!!!\n";
							A.hp -= MainmonSkill[0].Power;
					}
					if(num==2)
					{
							cout<< mainmon.name<<" uses "<< MainmonSkill[1].skillName<<" and deals "<<MainmonSkill[1].Power<<"!!!\n";
							A.hp -= MainmonSkill[1].Power;

					}
					cout<< A.name<<" uses "<< skill4.skillName<< " and dealt "<< skill4.Power;
					mainmon.hp -= skill4.Power;
					cout<<"\n"<<mainmon.name<<" has "<< mainmon.hp<<" left\n\n";
					
				}
				
			}
		}
		else if(choice ==2)
		{
			cout<< "Ok you fled instead of fighting and died\n";
			cout<< "THE END";
			dead = 1;
			break;
		}
	}
theloop:
cout<< "\nWould you like to adventure still?Y/N \n";
char ans;
cin>> ans;
if (ans =='Y')
{
	loop = true;
}
else if(ans =='N')
{
	loop = false;
}
else
{
	goto theloop;
}
}
if(dead ==0)
{

cout<< "\n\nWILD BOSS APPEARED\n"
<<Boss.name<<" the 1egendary monster is here and you must fight it!\n";
while(mainmon.hp>0 && Boss.hp>0)
{
	srand((int) time(0));
	int r = (rand() % 2);
	cout<< Boss.name<< " has "<<Boss.hp<< " health left\n";
	cout<<"Attack! use:\n1."<<MainmonSkill[0].skillName<<"\n2."<<MainmonSkill[1].skillName<<endl;
	int num;
	cin>>num;
	if(num==1)
	{
			cout<< mainmon.name<<" uses "<< MainmonSkill[0].skillName<<" and deals "<<MainmonSkill[0].Power<<"!!!\n";
			Boss.hp -= MainmonSkill[0].Power;
	}
	if(num==2)
	{
			cout<< mainmon.name<<" uses "<< MainmonSkill[1].skillName<<" and deals "<<MainmonSkill[1].Power<<"!!!\n";
			Boss.hp -= MainmonSkill[1].Power;

	}
	cout<< Boss.name<<" has "<< Boss.hp<<" left\n";
	cout<< Boss.name<<" uses "<< BossSkill[r].skillName<< " and dealt "<< BossSkill[r].Power;
	mainmon.hp -= BossSkill[r].Power;
	cout<<"\n"<<mainmon.name<<" has "<< mainmon.hp<< " health \n\n ";
}


if(mainmon.hp<=0)
{
	cout<< "You lost against the boss";
}
else if(mainmon.hp > 0)
{
	cout<< "CONGRATS YOU WON";
}
}
}
cout<< "\n\nThank you for playing";
}





















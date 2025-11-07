class animal{
	public:
		void eat()
		{
			
			cout<<"eats every day\n";
		}
		void sleep()
		{
			cout<<"sleeps every day\n";
		}
};
class dog:public animal {
public:
	void bark()
	{
		cout<<"the sound of dog is bow\n";
	}
};
int main()
{
	dog d;
	d.eat();
	d.sleep();
	d.n
	return 0;
}


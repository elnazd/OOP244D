struct Cat
{
public:
 int GetAge();
 void SetAge(int Age);
 int GetWeight();
 void SetWeight(int Weight);
 void Meow();
 
 private:
 int itsAge;
 int itsWeight;

};

void Cat::SetAge(int age)
{
// set member variable its age to
// value passed in by parameter age
 itsAge = age;
 }
 
 int Cat::GetAge()
{
 return itsAge;
 }
 
 void Cat::SetWeight(int weight)
{
 itsWeight = weight;
}
 
 int Cat::GetWeight()
{
 return itsWeight;
}

 int Cat::Meow()
{
 cout<<"Meow...";
}

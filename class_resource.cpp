/*Localization: localizing the common code in a private member function and calling that member function from the copy constructor and the assignment operator*/

class pointerDataClass
{
public:
	//destructor 
	~pointerDataClass();
	//Copy constructor
	pointerDataClass::pointerDataClass(const pointerDataClass &otherObject);
	
	//Overloading assignment operator
	const pointerDataClass& operator=(const pointerDataClass&);
	
private:
	int x;
	int lenP;
	int *p;
};

int main()
{
	pointerDataClass objectOne;
	pointerDataClass objectTwo;
	
}

pointerDataClass::~pointerDataClass()
{
	delete [] p;
}

void pointerDataClass::init(const pointerDataClass &otherObject)
{

         // shallow copy non-resource variable
         x = otherObject.x;
		 lenP = otherObject.lenP;
	
        
         if (otherObject.p != nullptr) {
             p = new int[x];
             // copy the resource data
             for(int i=0;i<lenP;i++)
				p[i] = otherObbject.p[i];
         }
         else
             p = nullptr;
     }
 }

const pointerDataClass& pointerDataClass::operator=(const pointerDataClass& otherObject)
{

     // check for self-assignment
     if (this != &otherObject) {
         	
         // deallocate previously allocated dynamic memory
         delete [] p;
         init(otherObject);
     }
     return *this;
 }
 
 pointerDataClass::pointerDataClass(const pointerDataClass &otherObject)
{
	init(otherObject);
}

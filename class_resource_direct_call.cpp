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
	
	//Uses the Overloaded assignment operator
	objectOne = objectTwo;
	pointerDataClass objectThree(objectOne);
}

pointerDataClass::~pointerDataClass()
{
	delete [] p;
}

//copy constructor

pointerDataClass::pointerDataClass(const pointerDataClass &otherObject)
{
	p=nullptr;//Note that without the initialization in the copy constructor, the deallocation in the assignment operator (subsequently called from the copy constructor) would be a serious error. 
	*this = otherObject; // calls assignment operator

}


const pointerDataClass& pointerDataClass::operator=(const pointerDataClass& otherObject)

{

     // check for self-assignment
     if (this != &otherObject) {
         // shallow copy non-resource variable
         x = otherObject.x;
		 lenP = otherObject.lenP;
	
         // deallocate previously allocated dynamic memory
         delete [] p;
         // allocate new dynamic memory, if needed
         if (otherObject.p != nullptr) {
             p = new int[x];
             // copy the resource data
             for(int i=0;i<lenP;i++)
			   p[i] = otherObject.p[i];
         }
         else
             p = nullptr;
     }
     return *this;
 }

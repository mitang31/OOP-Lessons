class Person{
   char* name;
   int age;
public:
   Person()
   ~Person()
   Person &operator=(const Person& other);
   void setName(char* newName);
   void setAge(int newAge);
   char* getName();
   int getAge();
}


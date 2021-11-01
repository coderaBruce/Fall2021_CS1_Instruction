# Lab09 Class
- C++ is an object-oriented programming language. Class and object are the fundamental building blocks of object-oriented programming language.
- Class = Struct + methods.
- Class can be used only by instaniate an object of it.
- Usage:
```
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
  private:
    int myNum2;
    void method1();
    
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
```


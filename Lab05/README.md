# Lab05 Declarations, Prototypes, Definitions, and Implementations.
## Basal metabolic rate (milestone)
Prototype in Single file
## Figures. 
Prototypes in multiple files
## Why we need prototype
http://www.cplusplus.com/articles/yAqpX9L8/ 
1. C++ compliler follow *TOP-DOWN* order. 
2. Clear structure; easy to read, manage and maintain especially for large projects.
3. In C++, An entity can be declared multiple times, but only defined once. If a header file contains definitions, you can end up with the same entity being defined more than once.
4. Convention: Header files should contain **declarations**, sourch files should contain **definitions**.
5. Prototype, per its purpose, should only contain the variable type.
6. Prototype declaration should end up with `;`

## Why we need header files
https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-160
1. Too make program moduler and re-usable;
2. Big project includes tens of thousands of `.cpp` files. The compiler has no knowledge of what names are declared in other compilation units. That means that if you define a class or function or global variable, you must provide a declaration of that thing in each additional .cpp file that uses it.\
-- So, why not just use `#include xxx.hpp`

## C++ compile process (3-step processes) 
https://stackoverflow.com/a/6264256/12771563 \
Step1: Preprocess(majority replacing stuffs like `#include``#ifndef`)\
Step2: Compile(which produces `.o` file)\
Step3: Link(link these `.o` into exeutable) 


## How to write a header file
Include:
* include guards
* Function/Class Prototypes

Dont Include:
* built-in type definitions at namespace or global scope
* non-inline function definitions
* non-const variable definitions
* aggregate definitions
* unnamed namespaces
* using directives

A sample header file:
```
//XXX.hpp or XXX.h
#ifndef XXX_HPP
#define XXX_HPP

void filledSquare(int size, char ch);

#endif
```

## Notes On Mac And Linux User
Run below command for compiling multiple files:\
`g++ figures.cpp figuresInput.cpp -o <name-of-executable>`



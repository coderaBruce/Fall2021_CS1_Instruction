# Structures

Structures in C++ are user defined *abstract data types* which are used to store group of items of non-similar data types.

## Declaration
```
struct <structure-name>
{
    body to declare multiple items
}
```
e.g.,
```
struct Point
{
   int x, y;
   double a, b;
};
``` 

## Usage
Just use structure like a primitive type
``` <structure-name> <name>```\
e.g.,
`Point p1, p2;`

## Access structure element
e.g., `p1.x=10`

## Array of structure
e.g., `Point arr[10];`
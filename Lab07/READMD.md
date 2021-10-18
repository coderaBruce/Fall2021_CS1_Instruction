# Lab07 C++ String
New SVN: https://svn.cs.kent.edu/courses/cs13012/svn/USERNAME/ 
1. People do not like Cstring(likely to be deprecated)
2. String is a C++ class(object) and so does it has many methods, e.g., `s.size()`
3. Declaring String: `string s`
4. *Input a String* from Keyboard:\
   https://www.w3schools.com/cpp/cpp_strings_input.asp \
   `cin>>s` works but `cin` considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words)\
   `getline()` is usually used to read a line of text. e.g., `getline(cin, s)`
5. *Find Substring*:
+ `s.find(substring, pos)` and `s.rfind(substring, pos)`: returns the index of first occurrence of sub-string from staring from left/right. If no match, return `std::string::npos`
+ `s.find_first_of(substring, pos)` and `s.find_first_not_of(substring, pos)`: searches the string for the first character that does (not) matches any of the characters specified in its arguments 
+ `s.find_last_of(substring, pos)` and `s.find_last_not_of(substring, pos)`: Searches the string for the last character that does not match any of the characters specified in its arguments
6. *String Modification*
+ `s.append(substring)`
+ `s.insert(pos, subtring)`
+ `s.erase(pos, len)`
+ `s.replace(pos, len, substring)`



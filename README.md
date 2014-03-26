Compiled using GCC/G++

HubNode just adds and prints the hubs in the file: 
Tucson International Airport --> Phoenix
Los Angeles International Airport --> Los Angeles
San Francisco International Airport --> San Diego
Albany International Airport --> Chicago
Chicago O'Hare International Airport --> Boston
Mc Carran International Airport --> New York
Miami International Airport --> Honolulu
Denver International Airport --> NULL

Getting odd error when I compile FlightNode (and I don't know if it's because of memory or what:
Undefined symbols for architecture x86_64:
  "FlightNode::SetVar(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)", referenced from:
      List::Append(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) in FlightNode-SPztFr.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)

We're haven't included memory allocation/deallocation as we're just adding and printing from the lists and don't have a need for a menu (with like a while loop) quite yet. 


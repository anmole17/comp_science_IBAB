#!/bin/bash

echo "To demonstrate aspect of provate asscess specifier in C++"
sleep 2
cat q1.cpp|more
echo "let us see the output now"
sleep 2
g++ q1.cpp|more
sleep 2
echo "As we can observe that the variables and functions declared under the private access specifier cannot be accessed directly. This helps us with the concept of data hiding in C++"



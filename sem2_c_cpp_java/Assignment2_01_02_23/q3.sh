#!/bin/bash

echo "Q3: to demonstrate constructor, initialize the value and print it"
echo "The C++ file:"
sleep 2
cat q3.cpp|more

echo "running:"
sleep 2
g++ q3.cpp
./a.out
echo "we can see the data was initialized inside constructor and printed from within constructor"



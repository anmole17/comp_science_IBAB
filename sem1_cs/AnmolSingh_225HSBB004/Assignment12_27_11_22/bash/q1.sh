#!/bin/bash

function sum_num(){
    sum=$(($1+$2+$3))
}

function product_num(){
    product=$(($1*$2*$3))
}

echo Enter three numbers
read a
read b
read c

sum_num $a $b $c
echo Sum: $sum


product_num $a $b $c
echo Product: $product
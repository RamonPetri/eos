#!/bin/bash 

#! /usr/bin/env bash
read -p 'Name ouput file: ' outFile
echo 'type def for default(c++17)  else version exaple c++14, c++11,C++98 ect.'
read -p 'Name c++ version: ' version

if [ "$version" = "def" ]; then
        g++ -std=c++17 -o $outFile $1 $2 $3 $4 $5
else
        g++ -std=$version -o $outFile $1 $2 $3 $4 $5
fi
echo 
echo 'Done compiling' 
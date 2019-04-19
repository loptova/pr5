#!/bin/bash
g++ -O1 -o pr1_O1 pr1.cpp;	
g++ -O2 -o pr1_O2 pr1.cpp;	
g++ -O3 -o pr1_O3 pr1.cpp;	
g++ -Os -o pr1_Os pr1.cpp;	
g++ -Ofast -o pr1_Ofast pr1.cpp;	



./pr1_O1;
./pr1_O2;
./pr1_O3;
./pr1_Os;
./pr1_Ofast;

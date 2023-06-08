# Final Project Case 3: Vigenere Cipher Algorithms

* The program is designed to take in a plaintext message from the user, while asking for a key of their choice, and using the Vingener Cipher we are able to fully encrypt that message which is specifically controlled by the user. This Cipher is determined by the alphabet and basically shifting towards the left or right and using your key, mentioned earlier, will go to that column and find the letter that corresponds. Some programming approaches that I took are first incorporating the menu to direct the user to what they'd like to use my program for. After such, taking the lab that we had done this on and slowly approached a solution to, I was able to find the logic for taking the key and plain text realizing that the alphabet paired with the modulus.

# Authors

* Name: Michael Zita
* CWID: 2923432
* Email: mzita2@student.rccd.edu

# Published 

June 7, 2023

# How to use

First, change directory into src:
```
cd src
```

Then you can use the Makefile to compile and run the project.
Please, type:
```
make run
```

Or you can compile and run it by typing:
```
g++ -std=c++17 -o main main.cpp
./main
```

Either way works. 

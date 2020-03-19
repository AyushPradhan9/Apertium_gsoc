# Apertium robust tokenisation coding challenge
## Brief
The coding challenge was completed by taking in mind that the alphabetic characters consists of the L superset from Unicode(Lu, Ll, Lo, Lm). Repo was updated as suggested by the mentors, Tino Didriksen and Saurabh Rai.
## Compilation 
The classify-symbols.cpp was compiled with -
g++ -o classify-symbols classify-symbols.cpp `pkg-config --cflags icu-uc icu-io --libs`
## Test Example
Input - 
echo "This! Is a tešt тест ** % test." | ./classify-symbols

Output - 
C T
C h
C i
C s
X !
X  
C I
C s
X  
C a
X  
C t
C e
C š
C t
X  
C т
C е
C с
C т
X  
X *
X *
X  
X %
X  
C t
C e
C s
C t
X .

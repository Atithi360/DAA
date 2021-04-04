
# Daa C2 Assingment-2
#### Team Members

|Enrollment No.|Name|Github Id|
|--------------|----|--------|
|IIB2019025|Ritu Kiran Murmu|elixir-07|
|IIB2019026|Atithi Kumari|Atithi360|
|IIB2019027|Shahid|shahidsiddiqui786|



*Group No-* 28

*Faculty Name-* Dr. Rahul Kala 

*Mentor Name-* Md. Meraz

---
## Problem Statement
Locating vertically aligned points and horizontally aligned points given the points
with XY coordinates in a Cartesian space.

---
## How to use code
```
Download project
git clone https://github.com/Atithi360/DAA.git
```
Project Initialize 
```
#Opening Assingment folder
cd Assingment_03

#Compiling The code
g++ locate _horizontal_OR_vertical_align point.cpp -o output
```
---

Run the code
```
./output
```
Input
```
Input n (>= 50) is the no of points in the cartesian space, which is randomly generated 
and the next n points will also be generated randomly.

```
Ouput 
```
 x   vertical lines with starting and ending point  
 if there are no vertical line print -1
 
 y horizontal lines with starting and ending point
 if there are no horizontal lines print -1
```
---
*Test case*

Test Case-1
```
Output:
-403,2123 -403,-392
74, 294 74,-586
775,804  775,-256

3116,-741 -964,-741
427,499 935,499
184,988 -32,988
-692,3816 213,3816

```

Test Case-2
```
Output:
-1

320,-461 2314,-461
34,201 569,201
-510,762 -29,762

```

---
### Theory
Logic
```
1. Generate the random integer value greater than 50 for n no of  point.
2. Run the for loop n time and generate the x , y coordinates of points.
3. In the hash map for the vertical align point store the y coordinate value corresponding to the given x key.
4. In the hashmap for the horizontal align point store the x coordinate value corresponding to the given y key.
5. Traverse the map for  x key if more than or equal to  3 y coordinates are available print the start and end point of the vertical align point.
6. Traverse the map for  y key if more than or equal to  3 x coordinates are available print the start and end point of the horizontal align point.


---
### Analysis

*Time Complexity*
```
For all the cases : o(n*log(n))
```
*Space Complexity*
```
For all the cases : o(n)
```

---
### References

[Map of vector](https://www.geeksforgeeks.org/map-of-vectors-in-c-stl-with-examples/)
        
[Horizontal and Vertical lines](https://www.varsitytutors.com/hotmath/hotmath_help/topics/horizontal-vertical-lines)



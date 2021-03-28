
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
Find area of n- sided polygon using divide and conquer.

---
## How to use code
```
Download project
git clone https://github.com/Atithi360/DAA.git
```
Project Initialize 
```
#Opening Assingment folder
cd Assingment_02

#Compiling The code
```
---

Run the code
```
./output
```
Input
```
First line of input contains an integers n denoting number of side in the polygon.
Then next n line  input contains x and y coordinates of the vertex of polygon.

```
Ouput 
```
Area of n sided polygon
```
---
*Test case*

Test Case-1
```
Input:
4
0 0
0 2
2 2 
2 0 


Output:
4
```

Test Case-2
```
Input:
3
2 3
40 50
3 4

Output:
4.5

```

---
### Theory
Logic
```
1. We recursively call function to divide the polygon into sub-polygons until it is reduced to triangle, with one of it's vertex at origin.
2. On being reduced to triangle, the area of coresponding paralleogram is calculated by taking cross product of  vertices.
3. Then compute the area1 and area2 to conquer the overall area.
4. In the above process, The positive and negative area will overlap and the area between origin and polygon will be cancelled to zero, which gives the area.
5. As the above area was of parallelogram of the corresponding reduced triangles. So we divide it by 2 to obtain sum of area of thos triangles.
```

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
```
[Introduction to Divide and Conquer Technique: GFG](https://www.geeksforgeeks.org/divide-and-conquer-algorithm-introduction/)
[Shoelace Formula: wikipedia](https://en.wikipedia.org/wiki/Shoelace_formula)

```

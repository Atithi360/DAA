# Daa C2 Assingment-2
#### Team Members

|Enrollment No.|Name|Github Id|
|--------------|----|--------|
|IIB2019025|Ritu Kiran Murmu|elixir-07|
|IIB2019026|Atithi Kumari|Atithi360|
|IIB2019027|Sahid ||



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
1. We sort all points according to x coordinates.
2. Divide all points in two halves.
3. Recursively find the smallest distances in both subarrays.
4. Take the minimum of two smallest distances. Let the minimum be d.
5. Create an array strip[] that stores all points which are at most d distance away from the middle line dividing the two sets.
6. Find the smallest distance in strip[].
7. Return the minimum of d and the smallest distance calculated in above step 6.
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
where n is no. of points present in the 2D plane.

---
### References
```
Introduction to Divide and Conquer Technique: GFG
Introduction to Algorithms by Cormen,Charles, Rivest and Stein.
```

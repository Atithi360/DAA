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
```
Ouput 
```
```
---
*Test case*

Test Case-1
```
Input:
5
0 0
5 6
2 1 
2 0 
9 8 

Output:
1
{2 0} and {2 1}
```

Test Case-2
```
Input:
6
2 3
12 30
40 50
5 1
12 10
3 4

Output:
1.41421
{2 3} and {3 4}

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

# Tree Project

time limit per test: 1 seconds  
memory limit per test: 256 megabytes  
input: standard input  
output: standard output

---

One of your friends has a project in hand. In this project, he will have to plant some mango trees and some jackfruit trees on both sides of a road. He has `m` number of mango trees and `j` number of jackfruit trees, and he has to plant all the mango trees on one side of the road and all the jackfruit trees on the other side. He is given two conditions that there must be exactly a distance `a` between two consecutive mango trees, and there must be at least a distance `b` between two consecutive jackfruit trees. Your friend wants to plant the trees in such a way that he gets the maximum number of jackfruit trees so that there will be a mango tree on the opposite side of those jackfruit trees. But your friend can't find a way to plant trees in this way.

Now your task is to help your friend find the maximum number of jackfruit trees that will have at least one mango tree on the opposite side.

**Input**  
The first line contains an integer `t` (0 < t ≤ 10), the number of test cases. Every test case contains two lines. The first line contains two space-separated integers `m` (0 ≤ m ≤ 10^4) and `j` (0 ≤ j ≤ 10^4) — the number of mango trees and the number of jackfruit trees. The second line contains two integers `a` and `b` (0 ≤ a, b ≤ 10^4) — the exact distance between two consecutive mango trees and the minimum distance between two consecutive jackfruit trees.

**Output**  
Print an integer number, the maximum number of Jackfruit trees where there will be at least one mango tree on the opposite side of those jackfruit trees.

**Sample Input**
2
5 1
3 3
1 9
4 4

**Sample Output**
1
1


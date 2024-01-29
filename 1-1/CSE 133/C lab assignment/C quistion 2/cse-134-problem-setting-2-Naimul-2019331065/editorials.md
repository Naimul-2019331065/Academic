# Editorials for the Problem

We can solve this in two different way. The first way is to take a variable cnt = 0 and 
for every value a<sub>i</sub>(where 0<i<n+1), do the bitwise xor operation with every other value  a<sub>j</sub>(where 0<j<n+1 and i!=j) and if a<sub>i</sub> ^ a<sub>j</sub> = m then increase the value of cnt by one. But this is not the proper way because the time complexity of this process will take O(n<sup>2</sup>). So we should go for the second way.  
We know that if a^b = c then a^c = b. So for every value a<sub>i</sub> we will check how many times the value a<sub>i</sub>^m is occur. By doing so for every value a<sub>i</sub>, we will get our answer. The time complexity of this process is O(n).

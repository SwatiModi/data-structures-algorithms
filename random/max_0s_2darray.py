# 0 1 1 1
# 0 0 1 1
# 0 0 0 1
# 1 1 1 1  Has max num of 0s

# https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/

input = [[0, 1, 1, 1],
        [0, 0 ,1, 1],
        [0, 0, 0, 1],
        [1, 1, 1, 1]]

input = [[0, 0, 0, 1], 
        [0, 1, 1, 1], 
        [1, 1, 1, 1], 
        [0, 0, 1, 1]]
            
r = len(input)
c = len(input[0])

# brute force is n x n, go through whole rows and count max 0s

# n x log n  is when you use binary search + len - index of first 1 found 

i = 0
j = 0
max_row = 0
max_index = -1

def binary_search(low, high, array):
    # three cases, left side, middle element and right side
    mid = low + (high - low)//2
    # print(mid)

    if ((mid == 0 or array[mid - 1] == 0) and array[mid] == 1):
        return mid 

    elif array[mid] == 0:
        return binary_search(mid + 1, high, array)

    else: 
        return binary_search(low, mid - 1 , array)


for i in range(0, r):
    zero_index = binary_search(0, c -1 , input[i])
    # print(zero_index)
    if zero_index > max_index:
        # print("I updated")
        max_index = zero_index
        max_row = i
        # print("max row", max_row)
    
print(max_row)

# o(n) with below pseudo code
# https://stackoverflow.com/questions/5388571/which-row-has-the-most-1s-in-a-0-1-matrix-with-all-1s-on-the-left
i = 0
j = 0
max = 0

while(i < r and j < c):
    print("i, j", i, j)
    if input[i][j] == 0:
        j +=1
        max = j
    else:
        i +=1

print("max", j)

# bakchodi, terate through diagonal and you get n complexity, doesnt always work
max = 0

for i in range(m):
    if input[i][i] == 0:
        max = i
    elif input[i][i] == 1:
        pass
    else:
        print("out of bounds, Ill need this else only if i dont know total num of rows")

print(max)
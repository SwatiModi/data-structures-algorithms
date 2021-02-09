def longest_subseq_k_distinct(s, k):
    st = 0
    max_len = 0
    freq = {}

    for ed in range(len(s)):
        r = s[ed]
        if r not in freq:
            freq[r] = 0
        freq[r] += 1

        while len(freq) > k:
            l = s[st]
            freq[l] -= 1
            if freq[l] == 0:
                del freq[l]
            st += 1
        
        max_len = max(max_len, ed-st+1)
    
    return max_len


print(longest_subseq_k_distinct('araaci',2))
print(longest_subseq_k_distinct('araaci',1))
print(longest_subseq_k_distinct('cbbebi',3))

# Time complexity - O(n) -forloop + O(n) -whilelopp(process only 1 char at a time) = O(n)
class FreqStack:

    def __init__(self):
        self.counts = {}
        self.stack = {}
        self.maxc = 0
        

    def push(self, x: int) -> None:
        count = 1
        if x in self.counts.keys():
            count = self.counts[x] + 1
        self.counts[x] = count
        self.maxc = max(self.maxc, count)
        if count in self.stack:
            self.stack[count].append(x)
        else:
            self.stack[count] = [x]
        # print(self.stack)
        

    def pop(self) -> int:
        x = self.stack[self.maxc].pop()
        self.counts[x] -= 1
        
        if not self.stack[self.maxc]:
            self.maxc -= 1
        
        return x


# Your FreqStack object will be instantiated and called as such:
# obj = FreqStack()
# obj.push(x)
# param_2 = obj.pop()
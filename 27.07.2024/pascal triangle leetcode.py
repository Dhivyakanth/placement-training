class Solution(object):
    def generate(self, numRows):
        if numRows == 0:
            return []

        a= [[1]]

        for i in range(1,numRows):
            row = [1]
            for j in range(1,i):
                value = a[i-1][j-1]+a[i-1][j]
                row.append(value)
            row.append(1)
            a.append(row) 
        return a

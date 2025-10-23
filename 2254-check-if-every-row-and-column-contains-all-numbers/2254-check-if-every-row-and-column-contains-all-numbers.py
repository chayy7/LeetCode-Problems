class Solution:
    def checkValid(self, matrix: List[List[int]]) -> bool:
        c=[]
        n = len(matrix)
        print(n)
        for i in matrix:
            for j in range(1,n+1):
                if j not in i:
                    return False

        for col in range(n):
            for j in range(1, n + 1):
                if j not in [matrix[row][col] for row in range(n)]:
                    return False
                    


        return True
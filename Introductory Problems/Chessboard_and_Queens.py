class Solution:
    def isSafe(self,b,x,y,n):
        if(b[x][y]=='*'):
            return False
        for r in range(0,x+1):
            if(b[r][y]=='Q'):
                return False
        
        row = x
        col = y
        while (row >=0 and col >=0):
            if(b[row][col]=='Q'):
                return False
            row-=1
            col-=1
        row = x
        col = y
        while col<n and row>=0:
            if(b[row][col]=='Q'):
                return False
            row-=1
            col+=1
        return True
        
        
        
    def nQueens(self, b, x, y,n):
        
        if(x>=n):
            self.ans+=1
        else:
            for c in range(len(b)):
                if(self.isSafe(b,x,c,n)):
                    b[x][c] = 'Q'
                    self.nQueens(b,x+1,0,n)
                    b[x][c]='.'
                    # print(b)
        
    def solveNQueens(self, n):
            board = [ list(input()) for i in range(n) ];
            self.ans = 0
            # print(board)
            self.nQueens(board,0,0,n)
            return self.ans

a = Solution();

print(a.solveNQueens(n=8))
            
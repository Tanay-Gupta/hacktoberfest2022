class Solution {
    func isToeplitzMatrix(_ matrix: [[Int]]) -> Bool {
        let M = matrix.first!.count
        let N = matrix.count

        for j in 0...M-1 {
            if !checkDiagonal(matrix: matrix, i: 0, j: j){
                return false
            }
        }
        for i in 0...N-1 {
            if !checkDiagonal(matrix: matrix, i: i, j: 0){
                return false
            }
        }
        return true
    }
    
    private func checkDiagonal(matrix:[[Int]], i:Int, j:Int) -> Bool{
        let M = matrix.first!.count
        let N = matrix.count
        
        let num = matrix[i][j]
        var ni = i+1
        var nj = j+1
        while (ni < N && nj < M)
        {
            if (matrix[ni][nj] != num){
                return false
            }
            ni += 1
            nj += 1
        }
        return true
    }
}
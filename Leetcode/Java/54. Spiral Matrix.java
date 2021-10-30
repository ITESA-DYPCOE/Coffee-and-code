class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
                
        List<Integer> ans= new ArrayList<>();
        
        if (matrix.length == 0) {
            return ans;
        }
        
        int lastCol= matrix[0].length-1;
        int firstRow= 0;
        int firstCol= 0;
        int lastRow= matrix.length-1;
        
        while(firstRow<=lastRow && firstCol<=lastCol) {
            
            for(int j=firstCol; j<=lastCol; j++) {
                ans.add(matrix[firstRow][j]);
            }
            
            firstRow++;
            
            for(int i=firstRow; i<=lastRow; i++) {
                ans.add(matrix[i][lastCol]);
            }
            
            lastCol--;
            
            if(firstRow<=lastRow) {
                for(int j=lastCol; j>=firstCol; j--) {
                    ans.add(matrix[lastRow][j]);
                }
            }
            
            lastRow--;
            
            if(firstCol<=lastCol) {
                for(int i=lastRow; i>=firstRow; i--) {
                    ans.add(matrix[i][firstCol]);
                }
            }
            
            firstCol++;
            
        }
        
        return ans;
    }
}

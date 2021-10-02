public class TwoDArraySearch{
    public static void main(String[] args) {
        int[][] arr = { { 10, 20, 30, 40 }, { 15, 25, 35, 45 }, { 27, 29, 37, 48 }, { 32, 33, 39, 50 } };
        int[] output = search(arr, 33);
        System.out.println(output[0] + " " + output[1]);
    }
    
    static int[] search(int[][] arr, int target) {
        int i = 0;
        int j = arr[0].length - 1;
        while (j >= 0 && i<=arr.length-1) {
            if (arr[i][j] == target) {
                return new int[] { i, j };
            } else if (arr[i][j] > target) {
                j--;
            } else {
                i++;
            }
        }
        return new int[] {-1,-1};
    }
}
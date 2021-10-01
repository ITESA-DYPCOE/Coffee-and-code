class Solution
{
public
    boolean canReorderDoubled(int[] A)
    {
        Map<Integer, Integer> count = new HashMap();
        for (int x : A)
            count.put(x, count.getOrDefault(x, 0) + 1);

        Integer[] B = new Integer[A.length];
        for (int i = 0; i < A.length; ++i)
            B[i] = A[i];
        Arrays.sort(B, Comparator.comparingInt(Math::abs));

        for (int x : B)
        {
            
            if (count.get(x) == 0)
                continue;
            
            if (count.getOrDefault(2 * x, 0) <= 0)
                return false;

            
            count.put(x, count.get(x) - 1);
            count.put(2 * x, count.get(2 * x) - 1);
        }

        
        return true;
    }
}
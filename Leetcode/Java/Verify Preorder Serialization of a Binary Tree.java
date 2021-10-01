class Solution {
    public boolean isValidSerialization(String preorder) {
        Stack<String> stack = new Stack();
        String[] arr = preorder.split(",");
        for(String token : arr) {
            if("#".equals(token)) {
                while(stack.size() >= 2 && "#".equals(stack.peek())) {
                    stack.pop();
                    if(!"#".equals(stack.peek()))
                        stack.pop();
                }
            }
            stack.push(token);
        }
        return stack.size() == 1 && "#".equals(stack.pop());
    }
}
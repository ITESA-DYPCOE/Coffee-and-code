import java.util.*;
public class MyQueue {
 public static class Queue{
     Stack<Integer> input;
        Stack<Integer> output;

    public Queue() {
         input=new Stack();
         output=new Stack();
    }
    
    public void enQueue(int x) {
        input.push(x);
    }
    
    public int deQueue() {
        peek();
        return output.pop();
    }
    
    public int peek() {
        if(output.isEmpty()){
            while(!input.isEmpty()){
                output.push(input.pop());
            }
        }
        return output.peek();
    }
    
    public boolean empty() {
        return input.empty() && output.empty();
    }
}
public static void main(String[] args){
    Queue q = new Queue();
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
 
    System.out.println(q.deQueue());
    System.out.println(q.deQueue());
    System.out.println(q.deQueue());
}
}
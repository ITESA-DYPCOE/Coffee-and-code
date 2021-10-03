import java.util.*;
public class MyStack {
 public static class Stack{ 
    Queue<Integer> q1;
    Queue<Integer> q2;
    public Stack() {
        q1=new LinkedList();
        q2=new LinkedList();
    }
    
    public void push(int x) {
        q2.add(x);
        while(q1.size()>0){
            int ele=q1.remove();
            q2.add(ele);
            
        }
        while(q2.size()>0){
            int temp=q2.remove();
            q1.add(temp);
        }
        
    }
    
    public int pop() {
        return q1.remove();
    }
    
    public int top() {
       return q1.peek();
    }
    
    public boolean empty() {
        return q1.isEmpty() && q2.isEmpty();
    }
}
public static void main(String[] args){
    Stack s = new Stack();
    s.push(1);
        s.push(2);
        s.push(3);
        System.out.println(s.top());
        s.pop();
        System.out.println(s.top());
        s.pop();
        System.out.println(s.top());
    
}
}
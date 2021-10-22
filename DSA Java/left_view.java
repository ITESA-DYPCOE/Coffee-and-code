/* A Binary Tree node
class Node
{
    int data;
    Node left, right;

    Node(int item)
    {
        data = item;
        left = right = null;
    }
}*/
class Tree
{
    //Function to return list containing elements of left view of binary tree.
    ArrayList<Integer> leftView(Node root)
    {
      
      ArrayList<Integer> ans=new ArrayList<>();
      if(root==null) return ans;
      ans.add(root.data);
      Queue<Node> queue=new LinkedList<>();
      queue.add(root);
      queue.add(null);
      while(!queue.isEmpty()){
          Node curr=queue.poll();
          if(curr==null){
              if(queue.isEmpty()) break;
              ans.add(queue.peek().data);
              queue.add(null);
          }
          else{
              if(curr.left!=null) queue.add(curr.left);
              if(curr.right!=null) queue.add(curr.right);
          }
      }
      return ans;
    }
}

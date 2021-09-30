#include <iostream>
#include <string>

using namespace std;

class Stack
{

private:
    int top;
    int array[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            array[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++;
            array[top] = val;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            int popValue = array[top];
            array[top] = 0;
            
            if(top>0){
            	top--;
			}
			
            return popValue;
        }
    }

    int count()
    {
        return (top + 1);
    }

    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
            return 0;
        }
        else
        {
            return array[pos];
        }
    }

    void change(int pos, int val)
    {
        array[pos] = val;
        cout << "Value changed at position :" << pos << endl;
    }

    void display()
    {
        cout << "All the values in the Stack are :" << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << array[i] << endl;
        }
    }
};

int main()
{
    Stack s1;
    int option, position, val;

    do
    {
        cout << "What Operation you want to perform? Select Option no. "<<endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. isFull" << endl;
        cout << "6. Count" << endl;
        cout << "7. Change" << endl;
        cout << "8. Display" << endl;
        cout << "9. Clear-Screen" << endl;
        cout << "0. EXIT" << endl;
        
		cout << "Your Option -";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Push Function Called" << endl;
            cout << "Enter a value to Push- " << endl;
            cin >> val;
            s1.push(val);
            break;
        case 2:
            cout << "Pop Function Called" <<"\n"<<"Value Popped = "<< s1.pop() << endl;
            break;
        case 3:
        cout<<"Enter a postion to Peek - "<<endl;
        cin>>position;
		cout<< "Peek Function Called"<<"\n"<<"Value at position : "<<position<<" is "<<s1.peek(position)<<endl;
		break;
		
		case 4:
		if(s1.isEmpty()){
			cout<<"Stack is Empty "<<endl;
		}
		else{
			cout<<"Stack is not Empty "<<endl;
		}
		break;
		
		case 5:
		if(s1.isFull()){
			cout<<"Stack is Full "<<endl;
		}
		else{
			cout<<"Stack is not Full "<<endl;
		}
		break;
		
		case 6:
		cout<<"Count : "<<s1.count()<<endl;
		break;
		
		case 7:
		cout<<"Enter a postion to change"<<endl;
		cin>>position;
		
		cout<<"Enter a value "<<endl;
		cin>>val;
		s1.change(position, val);
		break;
		
		case 8:
		s1.display();	
		break;
		
		case 9:
		 system("cls");
		 break;
		 
		case 0:
		cout<<"Good-Bye..."<<endl;
        }
        
    } while (option != 0);
}
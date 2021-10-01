#include <iostream>
using namespace std;

class Queue{
	private:
		int arr[5];
		int front;
		int rear;
	
	public:
	Queue()
	{
		for(int i=0;i<5;i++)
		{
			arr[i] = 0;
		}
		
		front = -1;
		rear = -1;
	}	
	
	bool isEmpty()
	{
		if(front ==-1 && rear ==-1)
		{
			return true;
		}
		else{
			return false;
		}
	}
	
	bool isFull()
	{
		if(rear == 4)
		{
			return true;
		}
		else{
			return false;
		}
	}
	
	//INSERTION
	int enqueue(int val)
	{
		if(isFull())
		{
			cout<<"Queue is FULL"<<endl;
			return 0;
		}
		else if(isEmpty()){
			front = 0;
			rear = 0;		
		}
		else{
			rear++;
		}
		arr[rear] = val;
	}
	
	//DELETION
	int dequeue()
	{
		int x;
		if(isEmpty())
		{
			cout<<"Queue is EMPTY"<<endl;
			return 0;
		}
		else if(front == rear)
		{
			x = arr[front];
			arr[front] = 0;
			front = -1;
			rear = -1;
			return x;
		}
		else{
			x = arr[front];
			arr[front] = 0;
			front ++;
			return x;
		}
	}
	
	int count()
	{
		return (rear-front+1);
	}
	
	void display()
	{
		cout<<"Elements in an QUEUE :"<<endl;
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<" ";
		}
	}	
};



int main()
{
	//Queue -FIFO 
	Queue q;
	int option, value;
	
	do{
		cout<<"Queue"<<endl;
		cout<<"What operation you want to Perfrom ?"<<endl;
		cout<<"Select option no."<<endl;
		cout<<" 1.INSERTION -Enqueue"<<endl;
		cout<<" 2.DELETION -Dequeue"<<endl;
		cout<<" 3.COUNT"<<endl;
		cout<<" 4.DISPLAY"<<endl;
		cout<<" 5.Clear Screen"<<endl;
		cout<<" 6.isEmpty "<<endl;
		cout<<" 7.isFull "<<endl;
		cout<<" 0.EXIT"<<endl;
		
		cin>>option;
		
		switch(option)
		{
			case 0:
				cout<<"Good Bye.."<<endl;
				break;
				
			case 1:
				cout<<"Insertion Function Called"<<endl;
				cout<<"Enter a value to enqueue - ";
				cout<<endl;
				cin>>value;
				q.enqueue(value);
				break;
				
			case 2:
				cout<<"Deletion Function Called"<<endl;
				cout<<"Element : "<<q.dequeue()<<" "<<"deleted succesfully"<<endl;
				break;
			
			case 3:
				cout<<"Count : "<<q.count()<<endl;
				break;
			
			case 4:
				cout<<"Display function Called"<<endl;
				q.display();
				cout<<endl;
				break;
				
			case 5:
				system("cls");
				break;
				
			case 6:
				if(q.isEmpty())
				{
					cout<<"Queue is empty"<<endl;
				}
				else{
					cout<<"Queue is not empty"<<endl;
				}
				break;
				
			case 7:
			if(q.isFull())
				{
					cout<<"Queue is Full"<<endl;
				}
				else{
					cout<<"Queue is not Full"<<endl;
				}
				break;							
		}
		
	}while(option !=0);
		
	
	return 0;
}
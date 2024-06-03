#include "main.h"

using namespace std;
int main(int argc, char** argv) {
	
  	srand (time(NULL));//initialize random seed:
	
	LinkListQueue* queue = new LinkListQueue();
	QueueNode* tmpNode = NULL;
	int randomNumber = -1;
	
	/*Fill The Queue*/
	cout <<"Enqueue 100 random numbers(0-99)..."<<endl;
	for(int i=100; i>0 ;i--){// count backwards from 100 to 0
		randomNumber = rand() % 100;
		cout <<randomNumber<<"\t";
		tmpNode = new QueueNode();
		tmpNode->data = randomNumber;
		queue->enQueue(tmpNode);
	}
	
	/*Empty the queue*/
	cout <<endl<<endl<<"Dequeue the queue until it is empty..."<<endl;
	do{
		
		tmpNode = queue->deQueue();
		if(tmpNode != NULL)
			cout <<tmpNode->data<<"\t";
	}while(tmpNode != NULL);//while there are items in the queue
	
	
	cout <<endl<<"Press ENTER to exit.";
	cin.get();//Hold screen;	
	
	return 0;
}

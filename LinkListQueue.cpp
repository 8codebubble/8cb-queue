#include "main.h"


//constructor
LinkListQueue::LinkListQueue(){
	frontNode = NULL;
	backNode = NULL;
}
//enqueue implementation
QueueNode* LinkListQueue::enQueue(QueueNode* node){
	if(frontNode == NULL){//Queue is empty	
		node->next = NULL;
		node->prev = NULL;
		frontNode = node;
		backNode = node;
	} else {// add node to end of the queue
		node->prev = NULL;
		node->next = backNode;
		backNode->prev = node;
		backNode = node;
	}
	return backNode;
}

//dequeue implementation
QueueNode* LinkListQueue::deQueue(){
	QueueNode* node = NULL;
	if(frontNode == NULL){// Queue is empty
		return NULL;
	} else {
		node = frontNode;
		frontNode = frontNode->prev;
		if(frontNode!=NULL) frontNode->next = NULL;
	}
	return node;
}

//get first node in queue
QueueNode* LinkListQueue::getFrontNode(){
	return frontNode;	
}

//get last node in queue
QueueNode* LinkListQueue::getBackNode(){
	return backNode;
}

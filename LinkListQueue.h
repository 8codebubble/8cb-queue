#include"QueueNode.h"

#ifndef _LinkListQueue_class_included
#define _LinkListQueue_class_included
class LinkListQueue{
	private:
		QueueNode* frontNode;	
		QueueNode* backNode;	
	public:
		QueueNode* enQueue(QueueNode* node);
		QueueNode* deQueue();
		QueueNode* getFrontNode();
		QueueNode* getBackNode();
		LinkListQueue();
		
	
};


#endif

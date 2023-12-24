#ifndef QUEUETP_H_
#define QUEUETP_H_

template<class T>
class QueueTp{
private:
    struct Node
    {
        T data;
        Node* next;
        Node(const T& value):data(value),next(nullptr){}
    };
    
    Node* frontNode;
    Node* endNode;
public:
    QueueTp():frontNode(nullptr),endNode(nullptr){};
    ~QueueTp(){ while(!isempty()) dequeue(); }

    bool isempty(){ return frontNode==nullptr;}
    void enqueue(const T& item);
    void dequeue();
    T front();
};

template<class T>
void QueueTp<T>::enqueue(const T& item){
    Node* temp = new Node(item);
    if(frontNode==nullptr){
        frontNode = temp;
        endNode = temp;
    }else{
        endNode->next = temp;
        endNode = temp;
    }
}

template<class T>
void QueueTp<T>::dequeue(){
    if(frontNode==nullptr) return;
    Node* temp = frontNode;
    frontNode = frontNode->next;
    delete temp;
}

template<class T>
T QueueTp<T>::front(){
    return frontNode->data;
}

#endif
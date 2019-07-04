class stackusingarray{
  int * data;
  int nextindex;
  int capacity;

public:
  stackusingarray(int size){
    data = new int[size];
    nextindex = 0;
    capacity = size;
  }

  bool isempty(){
    return nextindex == 0;
  }

  void pushelement(int data){
    if(nextindex==capacity)
     {cout<<"The Stack is full"<<endl;
     return;}

    data[nextindex] = data;
    nextindex++;
  }

  int pop(){
    if(isempty()){
      cout<<"Stack is empty"<<endl;
      return INT_MIN;
    }
    nextindex--;
    return data[nextindex];
  }

  int top(){
    if(isempty()){
      cout<<"Stack is empty"<<endl;
      return INT_MIN;
    }
    return data[nextindex-1];
  }

};

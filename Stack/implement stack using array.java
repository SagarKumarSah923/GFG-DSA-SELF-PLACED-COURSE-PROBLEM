class MyStack{
  int top;
  int arr[]=new int[1000];
  MyStack(){
    top=-1;
  }
  void push(int a){
    if(top==999)
      return ;
      arr[++top]=a;
  }
  int pop(){
    if(top==-1)
     return -1;
     
  }
}
import java.util.*;

class Queue {
  String a[];
  int size;
  int front, rear;
  Queue(int size) {
    this.size = size;
    a = new String[size];
    front = -1;
    rear = -1;
  }

  public void enqueue(String data) {
    if(rear <= -1) {
      front = 0;
      rear = 0;
      a[rear] = data;
    } else if(rear + 1 >= size) {
      System.out.println("Overflow");
    } else {
      //front = 0;
      a[++rear] = data;
    }
  }

  public String dequeue() {
    String top = null;
    if(isEmpty()) {
      System.out.println("Underflow");
    } else {
      top = a[front];
      front = front+1;
    }
    return top;
  }

  public boolean isEmpty() {
    if(front == -1 || rear == -1) {
      return true;
    } else {
      return false;
    }
  }

  public void doubling() {
    String s = dequeue();
    for(int i = 0 ; i < 2; i++) {
      enqueue(s);
    }
  }

  public String findNth(int num) {
    for(int i = 1; i < num; i++) {
      doubling();
    }
    return dequeue();
  }

  public int getFront() {
    return front;
  }
  public int getRear() {
    return rear;
  }


  public void display() {
    for(int i = front; i <= rear; i++) {
      System.out.println(a[i]);
    }
  }
}

public class CF_82A_DoubleCola {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num = sc.nextInt();
    Queue q = new Queue(1000000000);
    q.enqueue("Sheldon");
    q.enqueue("Leonard");
    q.enqueue("Penny");
    q.enqueue("Rajesh");
    q.enqueue("Howard");

    //System.out.println(q.getRear());
    System.out.println(q.findNth(num));
    //System.out.println(q.getFront());
    q.display();
  }
}

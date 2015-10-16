
public class VectorQueue implements VectorQueue{
	//vector containing the elements
	private Object[] A;

	//Number of elements in the queue
	private int n;

	//Top elements in the queue
	private int head;

	public VectorQueue(int dim){
		n=0;
		head=0;
		A= new Object[dim];
	}

	public boolean isEmpty(){
		return n==0;
	}

	public Object top(){
		if(n==0)
			throw new IllegalStateException ("Queue is Empty");
		return A[head];
	}

	public Object dequeue(){
		if(n==0)
			throw new IllegalStateException ("Queue is Empty");
		Object t = A[head];
		head = (head+1) % A.length;
		n = n-1;
		return t;
	}

	public void enqueue(Object v){
		if(n==A.length){
			throw new IllegalStateException ("Queue is Empty");
			A[(head+n)%A.length] = v;
			n = n+1;
		}
	}
}
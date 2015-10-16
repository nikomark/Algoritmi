public class List{
	//first element of the list
	private Pos head;

	//last element of the list
	private Pos tail;

	public List(){
		head = tail = null;
	}

	public Pos head (){
		return head;
	}

	public Pos tail(){
		return tail;
	}

	public Pos next(Pos pos){
		return (pos != null ? pos.succ : null);
	}

	public Pos prev(Pos pos){
		return (pos != null ? pos.pred : null);	
	}

	public boolean finished(Pos pos){
		return pos == null;
	}

	public boolean isEmpty(){
		return head == null;
	}

	public Object read(Pos p){
		return p.v;
	}

	public void write(Pos p, Object v){
		p.v = v;
	}

	public Pos Insert(Pos pos, Object v){
		Pos t = new Pos(v);
		if(head == null){
			//insert in a empty list
			head = tail =t;
		}
		else if(pos==null){
			//insert at the end
			t.pred = tail;
			tail.succ = t;
			tail = t;
		}
		else{
			//insert in the front of an existing position
			t.pred = pos.pred;
			if(t.pred != null)
				t.rep.succ = t;
			else
				head = t;
			t.succ = pos;
			pos.pred = t;
		}
		return t;
	}

	public void remove (Pos pos){
		if(pos.pred == null)
			head = pos.succ;
		else
			pos.pred.succ = pos.succ;
		if(pos.succ == null)
			tail = pos.pred;
		else
			pos.succ.pred = pos.pred;

	}
}
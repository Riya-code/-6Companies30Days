	ull getNthUglyNo(int n) {
	    // code here
	    set<long long> q;
    	q.insert(1);
    	long long f;
        while(n--){
            auto it = q.begin();
            f=*it;
            q.erase(it);
            q.insert(f*2);
            q.insert(f*3);
            q.insert(f*5);
        }
        return f;
  }

https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#

vector<vector<string> > Anagrams(vector<string>& v1) {
        vector<string> v2;
        for(int i=0;i<v1.size();i++){
            string tmp=v1[i];
            sort(tmp.begin(),tmp.end());
            v2.push_back(tmp);
        }
        bool a[v1.size()]={0};
        vector<vector<string>> v3;
        for(int i=0;i<v1.size();i++){
            if(!a[i]){
                a[i]=1;
                string tmp=v2[i];
                vector<string> v4;
                v4.push_back(v1[i]);
                for(int j=i+1;j<v1.size();j++){
                    if(tmp==v2[j]){
                        v4.push_back(v1[j]);
                        a[j]=1;
                    }
                }
                v3.push_back(v4);
            }
        }
        return v3;
    }

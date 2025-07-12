class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) 
    {
        int n = arr.size() ;
        vector<int> one ;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i])
            {
                one.push_back(i) ;
            }
        }
        int cnt = one.size() ;
        if(cnt == 0)
        {
            return {0 , n - 1} ;
        }
        if(cnt%3)          
        {
            return {-1 , -1} ;
        }
        int s = one[0] , t = one[cnt/3] , u = one[(cnt/3)*2] ;
        while(u < n && arr[s] == arr[t] && arr[s] == arr[u])
        {
            s++ ;
            t++ ;
            u++ ;
        }
        if(u == n)
        {
            return {s - 1 , t} ;
        }
        return {-1 , -1} ;
    }
};
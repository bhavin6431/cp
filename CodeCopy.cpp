    #include <bits/stdc++.h>
    #include <utility>
    #include <math.h>
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp>
#include <conio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
    using namespace std;
    using namespace __gnu_pbds;
    #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

    template <typename T> 
    using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
    typedef long long ll;
    typedef long long int lli;
    typedef unsigned long long ull;
    typedef long double lld;
    typedef pair<int,int> pii;
    #ifdef LOCAL_JUDGE
    #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
    #else
    #define debug(x)
    #endif
    #define p(x) cout << x;
    #define p_e(x) cout << x << endl;
    #define p_s(x) cout << x << " ";
    #define p_t_s(x, y) cout << x << " " << y;
    #define p_t_s_e(x, y) cout << x << " " << y << endl;

    //fstream myfile("c:\\tmp\\in.txt", ios_base::in);
    //myfile >> n;
    //fstream mf("c:\\tmp\\out.txt", ios_base::out);
    //mf << n;

    void _print(ll t) {cerr << t;}
    void _print(int t) {cerr << t;}
    void _print(string t) {cerr << t;}
    void _print(char t) {cerr << t;}
    void _print(lld t) {cerr << t;}
    void _print(double t) {cerr << t;}
    void _print(ull t) {cerr << t;}
    #define ff first
    #define ss second

    template <class T, class V> void _print(pair <T, V> p);
    template <class T> void _print(vector <T> v);
    template <class T> void _print(set <T> v);
    template <class T, class V> void _print(map <T, V> v);
    template <class T> void _print(multiset <T> v);
    template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
    template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
    #define loop(i, s, e) for(i=s;i<e;i++)
    #define loopr(i, s, e) for(i=e;i>=s;i--)
    #define read(a) cin >> a
    #define read_2(a,b) cin >> a >> b;
    #define read_array(a, n) loop(n) {cin >> a[i];}
    #define read_vector_l(v, n) loop(i, 0, n) { ll val; cin >> val; v.pb(val);};
    #define read_vector_i(v, n) loop(i, 0, n) { int val; cin >> val; v.pb(val);};
    #define read_arrays(a, n, s) loops(n, s) {cin >> a[i];}
    #define p_m(m, r, c) loopi(r) { loopj(c) {p(m[i][j]); p(" ");} p_e("");}
    #define p_a(m, n) loopi(n)  {p(m[i]); p(" ");}
    #define map_insert(m, a, b) m.insert({a,b})
    #define map_erase(m, a) m.erase(a)
    #define loopm(map) for(auto it = map.begin(); it != map.end();it++)
    #define MOD 1000000007
    #define INF 1e18
    #define mp make_pair
    #define pb push_back
    #define g_p(tc, t, ans) cout << "Case #" << (tc-t) << ": " << ans << endl;
    #define g_p_s(t, ans) cout << "Case #" << t << ": " << ans << endl;

    int main() {

        #ifdef LOCAL_JUDGE
        freopen("Error.txt", "w", stderr);
        #endif
        fastio();
        //string stringpath = "C:/dev/cp/codeforce/Problems";
        string stringpath = "C:/tmp/";
        

    ofstream myofile;
        string line;
          ifstream myfile ("c:/tmp/file.txt");
          if (myfile.is_open())
          {
            while ( getline (myfile,line) )
            {
                if(line.substr(0,2) == "**"){
                    string fullPath = stringpath + line.substr(2, line.length());
                    string outFile = fullPath + "Solution.java";
                    mkdir(fullPath.c_str());
                    cout << fullPath + "/Solution.java";
                 myofile.close();
                 myofile.open(fullPath + "/Solution.java");
                } else {
                    myofile << line << '\n';
                }
            }
            myfile.close();
          }
        return 0;
    }   
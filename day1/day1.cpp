#include<bits/stdc++.h>
using namespace std;

void solve(string& line, long long & sum){
    long long i = 0, j = line.size()-1;
    while(i <= j){
        if(!isdigit(line[i])) i++;
        if(!isdigit(line[j])) j--;
        if(isdigit(line[j]) && isdigit(line[i])) break;
    }
    // cout<<line[i]<<line[j]<<'\n';
    // long long n = line[i] + line[j];
    int a = line[i] - '0';
    int b = line[j] - '0';
    long long n = a*10 + b;
    // cout<<n<<" ";
    sum = sum + n;
}

int main(){
    string line;
    long long  sum = 0;
    ifstream ifs("day1.txt");
    while(getline(ifs, line)){
        solve(line, sum);
    }
    cout<<sum<<" ";

    ifs.close(); 
    return 0;
}
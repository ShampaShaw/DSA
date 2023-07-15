#include<bits/stdc++.h>
using namespace std;

void print1(){
 for(int i=0; i<4; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<< endl;
    }
}


void print2(){
 for(int i=0; i<4; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<< endl;
    }
}

void print3(){
 for(int i=1; i<5; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<< endl;
    }
}

void print4(){
 for(int i=1; i<5; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<< endl;
    }
}

void print5(int n){
  for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<< endl;
    }
}

void print6(int n){
  for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j;
        }
        cout<< endl;
    }
}

void print7(int n){
  for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            if( j<=n-i || j>= n+i) {
                cout<< " ";
            }
            else{
                cout<< "*";
            }
        }
        cout<< endl;
    }
}

void print8(int n){
  for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            if( j>=i && j<= 2*n-i) {
                cout<< "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<< endl;
    }
}

void print10(int n){
    for(int i=1; i<=2*n-1;i++){
        int s=i;
        if(i>n) s= 2*n-i;
       for(int j=1; j<=s; j++){
            cout<<"* ";
       }
       cout<<endl;
    }
}

void print11(int n){
    for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if( i==j || (i%2==0 && j%2==0) || (i%2!=0 && j%2!=0) ){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
}

void print12(int n){
    int s=2*(n-1);
        for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }

        for(int j=1; j<=s; j++){
            cout << " ";
        }

        for(int j=i; j>=1; j--){
            cout << j;
        }

        cout<< endl;
        s-=2;
    }
}

void print13(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << s;
            s+=1;
        }
            cout<< endl;
    }
}

void print14(int n){
    for(int i=0; i<n; i++){
        for( char ch='A'; ch<='A'+i; ch++){
            cout<< ch;
        }
        cout << endl;
    }
}

void print15(int n){
    for(int i=0; i<n; i++){
        for( char ch='A'; ch<='A'+n-i-1; ch++){
            cout<< ch;
        }
        cout << endl;
    }
}

void print16(int n){
    char ch='A';
    for(int i=0; i<n; i++){
        for( int j=0; j<=i; j++){
            cout<< ch;
        }
        cout << endl;
        ch+= i;
    }
}



int main() {
    int n;
    cin >> n;

    print1();
    print2();
    print3();
    print4();
    print5(n);
    print6(n);
    print7(n);
    print8(n);
    print10(n);
    print11(n); 
    print12(n); 
    print13(n); 
    print14(n);
    print15(n);
    print16(n);
}
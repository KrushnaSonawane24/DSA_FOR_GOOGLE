//Square star pattern 
int main(){
    int n = 4;
    for(int i= 0; i<=n;i++){
        for(int j =1;j<=n;j++){
            cout<<"* ";

        }
        cout<<endl;
    }
    return 0 ;
}

//Right triangle
int main(){
    int n = 4 ;
    for(int i = 0;i<n;i++){
        for (int j = 0 ; j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//Right triangle revernce 

int main(){
    int n = 4 ;
    for(int i = n;i>n;i--){
        for (int j = 0 ; j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

//Pyramid

int main(){
    int n = 4 ;
    for(int i = 0;i<n;i++){
        for(int space=1;space<n-i;space++){
            cout<<" ";
        }
        for (int j = 0 ; j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0 ;
}

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
void imprimir(vector<vector<int>> matrix, int n){
    for (int a=0; a<matrix.size(); a++){
        for (int b=0; b<matrix[a].size(); b++){
            cout<<matrix[a][b]*n<<" \t";
        }
        cout<<endl;
    }
}
vector <vector<int>> transpuesta (vector<vector<int>> matrix){
    vector<vector<int>> nuevo;
    for(int i=0;i<matrix[0].size();i++){
        vector<int> vec;
        for(int j=0;j<matrix.size();j++){
            vec.push_back(matrix[j][i]);
        }
        nuevo.push_back(vec);
    }
    return nuevo;
}
int main() {
    int c=0; int f=0;
    cin>>f;
    cin>>c;
    int n; cin>>n;
    vector<vector<int>> matrix;
    for(int i=0;i<f;i++){
        vector <int> vector;
        for(int j=0;j<c;j++){
            int num=20+rand()%20;
            vector.push_back(num);
        }
        matrix.push_back(vector);
    }
    imprimir(matrix,n);
    vector<vector<int>> matrix2=transpuesta(matrix);
    cout<<"Transpuesta:"<<endl;
    imprimir(matrix2,1);

    return 0;
}
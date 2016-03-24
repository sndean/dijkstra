#include <armadillo>
using namespace arma;
int main(){
	mat matrix; 
	matrix.load("test.dat",raw_ascii);
	int nodes = matrix.n_rows; 
	mat low_col(1,nodes), mins = low_col;
	mat renew = matrix.row(0); 
	uword index; 
	for (int j=1;j<nodes;j++){
		mat C = renew;
		for (int z=0;z<nodes;z++){
			int zero = low_col[z]; 
			C[zero] = 0;
		}
		C.elem(find(C == 0)).fill(999);
		int min = C.min(index);
		mins[j] = min;
		low_col[j] = index;
		cout<<"shortest path to vertex "<<low_col[j]<<": "<<mins[j]<<endl;
		mat row = matrix.row(index);
		for (int i=0;i<nodes;i++){
			((renew[i] == 0 & row[i] == 0) || any(vectorise(low_col) == i)) ?
			renew[i] = renew[i] : 
				((row[i]+min<renew[i] & row[i] != 0) || renew[i] == 0) ?
				renew[i] = row[i]+min : renew[i] = renew[i];
		}
	}
}

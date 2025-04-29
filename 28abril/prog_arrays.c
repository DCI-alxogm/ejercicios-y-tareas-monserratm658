#include <stdio.h>		
#include <stdlib.h>
	int main(){
		int n_filas=3, m_cols=3;
		float array_2d[n_filas][m_cols];
		int i, j;
		//inicializacion en cero
		array_2d[1][2]=0.0;
		
		for(i=0; i<n_filas;i++){
			for(j=0;j<m_cols;j++){
				scanf("%f",&array_2d[i][j]);
			}
		}
		
		for (i=0;i<n_filas;i++){
			for(j=0; j<m_cols;j++){
				scanf("%f", &array_2d[i][j]);
			}
		}
	return 0;
}

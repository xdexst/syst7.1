#define ROWS 2
#define COLS 3
#include <stdio.h>
int main(){
int m[ROWS][COLS] = {{11, 12, 13},
                     {21, 22, 33}
                    };
					
	for(int ROW=0;ROW<ROWS;ROW++){
		for(int COL=0;COL<COLS;COL++){
			printf("%5d", m[ROW][COL]);
		}
		printf("\n" );
	}
	return 0;
}

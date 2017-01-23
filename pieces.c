#include "pieces.h"

int initPieces(struct_piece I_BLOCK,struct_piece J_BLOCK,
	       struct_piece L_BLOCK,struct_piece O_BLOCK,
	       struct_piece S_BLOCK,struct_piece T_BLOCK,
	       struct_piece Z_BLOCK){
  //struct_piece I_BLOCK;
  I_BLOCK.type = 1;
  I_BLOCK.xorigin = 5;
  I_BLOCK.yorigin = 2;
  I_BLOCK.x[0] = -1;
  I_BLOCK.y[0] = 0;
  I_BLOCK.x[1] = 0;
  I_BLOCK.y[1] = 0;
  I_BLOCK.x[2] = 1;
  I_BLOCK.y[2] = 0;
  I_BLOCK.x[3] = 2;
  I_BLOCK.y[3] = 0;
  //struct_piece J_BLOCK;
  J_BLOCK.type = 2;
  J_BLOCK.xorigin = 5;
  J_BLOCK.yorigin = 2;
  J_BLOCK.x[0] = -1;
  J_BLOCK.y[0] = 0;
  J_BLOCK.x[1] = 0;
  J_BLOCK.y[1] = 0;
  J_BLOCK.x[2] = 1;
  J_BLOCK.y[2] = 0;
  J_BLOCK.x[3] = 2;
  J_BLOCK.y[3] = 0;
  //struct_piece L_BLOCK;
  L_BLOCK.type = 3;
  L_BLOCK.xorigin = 5;
  L_BLOCK.yorigin = 2;
  L_BLOCK.x[0] = -1;
  L_BLOCK.y[0] = 0;
  L_BLOCK.x[1] = 0;
  L_BLOCK.y[1] = 0;
  L_BLOCK.x[2] = 1;
  L_BLOCK.y[2] = 0;
  L_BLOCK.x[3] = 2;
  L_BLOCK.y[3] = 0;
  //struct_piece O_BLOCK;
  O_BLOCK.type = 4;
  O_BLOCK.xorigin = 5;
  O_BLOCK.yorigin = 2;
  O_BLOCK.x[0] = 0;
  O_BLOCK.y[0] = 0;
  O_BLOCK.x[1] = 1;
  O_BLOCK.y[1] = 0;
  O_BLOCK.x[2] = 0;
  O_BLOCK.y[2] = 1;
  O_BLOCK.x[3] = 1;
  O_BLOCK.y[3] = 1;
  //struct_piece S_BLOCK;
  S_BLOCK.type = 5;
  S_BLOCK.xorigin = 5;
  S_BLOCK.yorigin = 2;
  S_BLOCK.x[0] = 0;
  S_BLOCK.y[0] = 0;
  S_BLOCK.x[1] = 1;
  S_BLOCK.y[1] = 0;
  S_BLOCK.x[2] = 0;
  S_BLOCK.y[2] = 1;
  S_BLOCK.x[3] = 1;
  S_BLOCK.y[3] = 1;
  //struct_piece T_BLOCK;
  T_BLOCK.type = 6;
  T_BLOCK.xorigin = 5;
  T_BLOCK.yorigin = 2;
  T_BLOCK.x[0] = -1;
  T_BLOCK.y[0] = 0;
  T_BLOCK.x[1] = 0;
  T_BLOCK.y[1] = 0;
  T_BLOCK.x[2] = 1;
  T_BLOCK.y[2] = 0;
  T_BLOCK.x[3] = 0;
  T_BLOCK.y[3] = 1;
  //struct_piece Z_BLOCK;
  Z_BLOCK.type = 7;
  Z_BLOCK.xorigin = 5;
  Z_BLOCK.yorigin = 2;
  Z_BLOCK.x[0] = -1;
  Z_BLOCK.y[0] = 0;
  Z_BLOCK.x[1] = 0;
  Z_BLOCK.y[1] = 0;
  Z_BLOCK.x[2] = 1;
  Z_BLOCK.y[2] = 0;
  Z_BLOCK.x[3] = 2;
  Z_BLOCK.x[3] = 0;
}


int dropDown(struct_piece Piece){
  int i;
  int y;
  for (i=0;i<4;i++){
    y = Piece.y[i] + Piece.yorigin;
    if (y+1>26) return 0;
  }
  Piece.yorigin++;
  return 1;  
}


//helpers
int shuffle(int arr[]) {
  srand(time(NULL));
  int i;
  for(i = 7; i > 0; i--) {
    int j = rand() % (i+1);
    swap(&arr[i], &arr[j]);
    //printf("pieces[%d] = %d",i,arr[j]);
  }
}

int swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

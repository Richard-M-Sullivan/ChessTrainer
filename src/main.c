#include "stdio.h"

int main(int argc, char** argv) {
    int num = 12;
    
    char* fen  = argv[1];
    char* move = argv[2];
    char* castling = argv[3];
    char* enpassant = argv[4];
    char* bTurn = argv[5];
    char* wTurn = argv[6];

    printf("fen:%s\n",fen);
    printf("move:%s\n",move);
    printf("castling:%s\n",castling);
    printf("enpassant:%s\n",enpassant);
    printf("bTurn:%s\n",bTurn);
    printf("wTurn:%s\n",wTurn);

    return 0;
}

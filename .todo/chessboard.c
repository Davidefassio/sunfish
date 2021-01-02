#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#define LIGHT  "\x1b[30;107m"
#define DARK   "\x1b[30;47m"
#define NORMAL "\x1b[0m"

int main(){
	setlocale(LC_CTYPE, "");

	// chess board
	char board[] = "rnbqkbnrpppppppp................................PPPPPPPPRNBQKBNR\n";
	
	// chess pieces
	wchar_t wk = 0x2654;
	wchar_t wq = 0x2655;
	wchar_t wr = 0x2656;
	wchar_t wb = 0x2657;
	wchar_t wn = 0x2658;
	wchar_t wp = 0x2659;
	wchar_t bk = 0x265A;
	wchar_t bq = 0x265B;
	wchar_t br = 0x265C;
	wchar_t bb = 0x265D;
	wchar_t bn = 0x265E;
	wchar_t bp = 0x265F;

	int i, j;
	
	for(i = 0; i < 8; ++i){
		wprintf(L"%d ", 8-i);
		for(j = 0; j < 8; ++j){
			switch(board[i*8 + j]){
				case 'r':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, br, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, br, NORMAL);
					break;
				case 'n':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, bn, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, bn, NORMAL);
					break;
				case 'b':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, bb, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, bb, NORMAL);
					break;
				case 'q':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, bq, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, bq, NORMAL);
					break;
				case 'k':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, bk, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, bk, NORMAL);
					break;
				case 'p':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, bp, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, bp, NORMAL);
					break;
				case 'R':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, wr, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, wr, NORMAL);
					break;
				case 'N':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, wn, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, wn, NORMAL);
					break;
				case 'B':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, wb, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, wb, NORMAL);
					break;
				case 'Q':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, wq, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, wq, NORMAL);
					break;
				case 'K':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, wk, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, wk, NORMAL);
					break;
				case 'P':
					if((i+j)%2==0)
						wprintf(L"%s%lc %s", DARK, wp, NORMAL);
					else
						wprintf(L"%s%lc %s", LIGHT, wp, NORMAL);
					break;
				case '.':
					if((i+j)%2==0)
						wprintf(L"%s  %s", DARK, NORMAL);
					else
						wprintf(L"%s  %s", LIGHT, NORMAL);
					break;
			}		
		}
		wprintf(L"\n");
	}
	wprintf(L"  a b c d e f g h\n");
		
	return 0;
}

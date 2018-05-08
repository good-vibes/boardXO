#include "Board.hpp"


using namespace std;

		Board::Board(int size){
			this->size = size;
			
			for (int i = 0; i < size; ++i) {
				vector<cell> tmp;
				for (int j = 0; j < size; ++j) {
					cell c{i, j, '.'};
					tmp.push_back(c);
				}
				board.push_back(tmp);
			}
			
		}
		Board::Board(const Board &b2) {
			this->size = b2.size;
			
			for (int i = 0; i < size; ++i) {
				vector<cell> tmp;
				for (int j = 0; j < size; ++j) {
					cell c(i, j, b2.board[i][j].c);
					tmp.push_back(c);
				}
				board.push_back(tmp);
			}
		}
		
		cell& Board::operator[](list<int> j){
			
			int x1 = j.front();
			int x2 = j.back();
			
			if(x1>=size || x2>=size || x1<0 || x2<0){
				IllegalCoordinateException ie(x1,x2);
				throw ie;
			}
			
			return this->board[x1][x2];
		}
				
		ostream& operator<< (ostream& os, const Board& b){
			for (int i = 0; i < b.size; ++i) {
				for (int j = 0; j < b.size; ++j) {
					os << b.board[i][j];
				}
				os<<endl;
			}
		return os ;
		}
		
		Board& Board::operator= (char n){
			
			if(n!='.' && n!='O' && n!='X'){
				IllegalCharException ie(n);
				throw ie;
			}
			
			for (int i = 0; i < size; ++i) {
				for (int j = 0; j < size; ++j) {
					board[i][j] = n;
				}
			}
		return *this;
		}
		
		
		
		Board& Board::operator= (Board n){
			this->size = b2.size;
			vector<vector<cell> > newBoard;
			for (int i = 0; i < size; ++i) {
				vector<cell> tmp;
				for (int j = 0; j < size; ++j) {
					cell c(i, j, b2.board[i][j].c);
					tmp.push_back(c);
				}
				newBoard.push_back(tmp);
			}
			
			board = newBoard;
			return *this;
		}
		
	

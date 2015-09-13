//
//  Board.h
//  Gomoku
//
//  Created by Thanh Dang on 9/3/15.
//  Copyright (c) 2015 ga. All rights reserved.
//

#ifndef __Gomoku__Board__
#define __Gomoku__Board__

#include <stdio.h>
using namespace std;


const int N = 15;
const int M = 5;


class Board{
	private:
	char board[N][N];
	char playerSymbol;
	char computerSymbol;
	int count;
	public:
	Board();
	void clear();
	void print();
	bool checkEmpty(int, int);
	bool win(int, int);
	bool draw();
	char getValue(int, int);
	void setValue(int, int, char);
	int getCount();
	char getPlayerSymbol(){
		return playerSymbol;
	}
	char getComputerSymbol(){
		return computerSymbol;
	}
	void setPlayerSymbol(char c){
		playerSymbol = c;
	}
	void setComputerSymbol(char c){
		computerSymbol = c;
	}
	bool rowOfFive(int, int);
	bool columnOfFive(int, int);
	bool mainDiagnolOfFive(int, int);
	bool reverseDiagnolOfFive(int, int);
	string toString();
	//bool checkEmpty(int, int);
};
#endif /* defined(__Gomoku__Board__) */

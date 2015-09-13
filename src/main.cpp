//
//  main.cpp
//  Gomoku
//
//  Created by Thanh Dang on 9/3/15.
//  Copyright (c) 2015 ga. All rights reserved.
//

#include <iostream>
#include "Board.h"
#include "Game.h"
#include "Computer.h"


using namespace std;

int main(int argc, const char * argv[]) {
	// insert code here...
	/*Board board ;
	//board.print();
	
	board.setValue(0,0,'O');
	board.setValue(1,0,'O');
	board.setValue(2,0,'O');
	board.setValue(3,0,'O');
	board.setValue(4,0,'O');
	//board.setValue(0,5,'O');
	board.print();
	cout <<endl<<board.win(0,0)<<endl<<endl;
	Computer computer;
	for (int i = 1; i < N; i++){
		for (int j = 0; j < N; j++){
			cout << computer.adjacentPlaced(board, i,j)<<endl;
		}
		cout <<endl;
	}
	computer.insertToHashMap(board, 5);
	Board board1 = board;
	//board1.setValue(0,0,'.');
	//cout << endl<<computer.checkVisitedBoard(board);
	//cout <<endl <<computer.getEvaluation(board1);
	//cout <<computer.evaluation(board,true);*/
	
//	cout << endl <<board.toString();*/


	Game game;
	game.run();
    return 0;
}

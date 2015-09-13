//
//  Game.h
//  Gomoku
//
//  Created by Thanh Dang on 9/3/15.
//  Copyright (c) 2015 ga. All rights reserved.
//

#ifndef __Gomoku__Game__
#define __Gomoku__Game__

#include <stdio.h>
#include "Board.h"
#include <vector>


class Game{
	private:
	Board board;

	
	public:
	Game();
	void playConsole();

	char getCurrentSymbol(int);

	void run();
};

#endif /* defined(__Gomoku__Game__) */

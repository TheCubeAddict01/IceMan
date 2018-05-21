#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GraphObject.h"""
#include "GameWorld.h"
#include "GameConstants.h"
#include <string>
#include <vector>
using namespace std; 
// Students:  Add code to this file, StudentWorld.cpp, Actor.h, and Actor.cpp


class StudentWorld : public GameWorld
{
public:

	StudentWorld(std::string assetDir)
		: GameWorld(assetDir)
	{
	}

	virtual int init()
	{
		for (int row = 0; row < 60; row++)
		{
			for (int col = 0; col < 63; col++)
			{
				GraphObject* temp = new GraphObject(IID_ICE, col, row, GraphObject::right, 0.25, 3);
				temp->setVisible(true);
				ice.push_back(temp);
			}
		}
		return GWSTATUS_CONTINUE_GAME;
	}

	virtual int move()
	{
		// This code is here merely to allow the game to build, run, and terminate after you hit enter a few times.
		// Notice that the return value GWSTATUS_PLAYER_DIED will cause our framework to end the current level.
		decLives();
		std::cout << "move" << std::endl;
		return  GWSTATUS_CONTINUE_GAME;
	}

	virtual void cleanUp()
	{
	}

private:
	vector<GraphObject*> ice;
};

#endif // STUDENTWORLD_H_

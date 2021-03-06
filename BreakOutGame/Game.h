#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

enum GameState
{
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};

class Game
{
public:
	GameState state;
	GLboolean keys[1024];
	GLuint width, height;

	Game(GLuint w, GLuint h);
	~Game();

	void Init();

	void ProcessInput(GLfloat dt);
	void Update(GLfloat dt);
	void Render();
};
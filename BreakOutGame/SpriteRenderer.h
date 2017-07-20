#pragma once

class SpriteRenderer
{
public:
	SpriteRenderer();
	~SpriteRenderer()
	{

	}

	void DrawSprite();

private:
	Shader shader;
	GLuint quadVAO;

	void initRenderData();

};
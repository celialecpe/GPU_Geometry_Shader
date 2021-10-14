#version 330 core

out vec4 color;

uniform float chrono;

void main()
{
	float r = (cos(chrono) + 1 ) / 2;
	float g = (cos(chrono + 3.14/3)+ 1 ) / 2;
	float b = (cos(chrono + 2 * 3.14/3)+ 1 ) / 2;
	color = vec4(r,g,b,1);
};
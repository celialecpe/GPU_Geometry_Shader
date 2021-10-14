#version 330 core

out vec4 color;

in vec2 v_text;
uniform sampler2D last_texture;

uniform float chrono;

void main()
{
    
	color = texture(last_texture,v_text);
};
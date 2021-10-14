#version 330 core

layout(triangles) in;
layout(triangles_strip, max_vertices = 3) out;

uniform mat4 MVP;

in vec3 v_pos[];

void main(void)
{
for (int i = 0; i < 3; i++)
	{
	  gl_Position = MVP * vec4(v_pos[i], 1.0);
	  EmitVertex();
	}
	EndPrimitive();
}
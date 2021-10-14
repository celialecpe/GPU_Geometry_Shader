CC = g++
CXXFLAGS = -Wall -Wextra -O2 -g -std=c++11 -I../extern



obj = glhelper.o mesh.o main.o camera.o

opengl: $(obj)
	$(CC) $^ -o $@ -lglut -lGLEW -lGL  -pthread

clean:
	rm -f *.o

mrproper: clean
	rm -rf opengl

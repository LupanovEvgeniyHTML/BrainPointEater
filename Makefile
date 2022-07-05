OUT_NAME = app-linux.run

all: ${OUT_NAME}
	./${OUT_NAME}

${OUT_NAME}: main.o Scene.o BrainPointEaterScene.o
	g++ main.o Scene.o BrainPointEaterScene.o -o ${OUT_NAME} -Wall -lpthread -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp

# 
Scene.o: Scene.cpp Scene.hpp
	g++ -c Scene.cpp

Object.o: Object.cpp Object.hpp
	g++ -c Object.cpp

# 
BrainPointEaterScene.o: BrainPointEaterScene.cpp BrainPointEaterScene.hpp
	g++ -c BrainPointEaterScene.cpp
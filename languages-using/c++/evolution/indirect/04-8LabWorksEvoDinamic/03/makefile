CC = g++
#CFLAGS = -O0 -D DEBUG
CFLAGS = -O0 -g -std=c++14

BUILD_PATH = _build/obj/
BUILD_PATHEXE = _build/

OBJ_TRANS  = $(BUILD_PATH)Main.o \
	$(BUILD_PATH)Container.o \
	$(BUILD_PATH)Rectangle.o \
	$(BUILD_PATH)Triangle.o \
	$(BUILD_PATH)Figure.o \
	$(BUILD_PATH)FigRectangle.o \
	$(BUILD_PATH)FigTriangle.o \
	$(BUILD_PATH)RectPerimeter.o \
	$(BUILD_PATH)TrianPerimeter.o \
	$(BUILD_PATH)FigPerimeter.o \
	$(BUILD_PATH)FigRectPerimeter.o \
	$(BUILD_PATH)FigTrianPerimeter.o \
	$(BUILD_PATH)ContainerTestPerimeter.o

all : labwork03

labwork03 : $(OBJ_TRANS)
	$(CC) -o $(BUILD_PATHEXE)labwork03 $(OBJ_TRANS) $(LIB_TRANS)

$(BUILD_PATH)Main.o : Figure.h Container.h Main.cpp
	$(CC) $(CFLAGS) -c Main.cpp -o $(BUILD_PATH)Main.o

$(BUILD_PATH)Container.o : Figure.h Container.h Container.cpp
	$(CC) $(CFLAGS) -c Container.cpp -o $(BUILD_PATH)Container.o

$(BUILD_PATH)Rectangle.o : Rectangle.h Rectangle.cpp
	$(CC) $(CFLAGS) -c Rectangle.cpp -o $(BUILD_PATH)Rectangle.o

$(BUILD_PATH)Triangle.o : Triangle.h Triangle.cpp
	$(CC) $(CFLAGS) -c Triangle.cpp -o $(BUILD_PATH)Triangle.o

$(BUILD_PATH)Figure.o : Figure.h Figure.cpp
	$(CC) $(CFLAGS) -c Figure.cpp -o $(BUILD_PATH)Figure.o

$(BUILD_PATH)FigRectangle.o : Figure.h FigRectangle.h FigRectangle.cpp
	$(CC) $(CFLAGS) -c FigRectangle.cpp -o $(BUILD_PATH)FigRectangle.o

$(BUILD_PATH)FigTriangle.o : Figure.h FigTriangle.h FigTriangle.cpp
	$(CC) $(CFLAGS) -c FigTriangle.cpp -o $(BUILD_PATH)FigTriangle.o

$(BUILD_PATH)RectPerimeter.o : Rectangle.h RectPerimeter.cpp
	$(CC) $(CFLAGS) -c RectPerimeter.cpp -o $(BUILD_PATH)RectPerimeter.o

$(BUILD_PATH)TrianPerimeter.o : Triangle.h TrianPerimeter.cpp
	$(CC) $(CFLAGS) -c TrianPerimeter.cpp -o $(BUILD_PATH)TrianPerimeter.o

$(BUILD_PATH)FigPerimeter.o : FigPerimeter.h FigPerimeter.cpp
	$(CC) $(CFLAGS) -c FigPerimeter.cpp -o $(BUILD_PATH)FigPerimeter.o

$(BUILD_PATH)FigRectPerimeter.o : FigRectangle.h FigRectPerimeter.cpp
	$(CC) $(CFLAGS) -c FigRectPerimeter.cpp -o $(BUILD_PATH)FigRectPerimeter.o

$(BUILD_PATH)FigTrianPerimeter.o : FigTriangle.h FigTrianPerimeter.cpp
	$(CC) $(CFLAGS) -c FigTrianPerimeter.cpp -o $(BUILD_PATH)FigTrianPerimeter.o

$(BUILD_PATH)ContainerTestPerimeter.o : Container.h ContainerTestPerimeter.cpp
	$(CC) $(CFLAGS) -c ContainerTestPerimeter.cpp -o $(BUILD_PATH)ContainerTestPerimeter.o

clean :
	rm _build/obj/*.o
	rm _build/labwork03
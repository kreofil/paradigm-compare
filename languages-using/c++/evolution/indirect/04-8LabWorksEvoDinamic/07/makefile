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
	$(BUILD_PATH)FigMm.o \
	$(BUILD_PATH)FigTrianRectMm.o \
	$(BUILD_PATH)ContainerMmTestOut.o

all : labwork07

labwork07 : $(OBJ_TRANS)
	$(CC) -o $(BUILD_PATHEXE)labwork07 $(OBJ_TRANS) $(LIB_TRANS)

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

$(BUILD_PATH)FigMm.o : Figure.h FigMm.h FigMm.cpp
	$(CC) $(CFLAGS) -c FigMm.cpp -o $(BUILD_PATH)FigMm.o

$(BUILD_PATH)FigTrianRectMm.o : Figure.h FigTriangle.h FigRectangle.h FigMm.h FigTrianRectMm.cpp
	$(CC) $(CFLAGS) -c FigTrianRectMm.cpp -o $(BUILD_PATH)FigTrianRectMm.o

$(BUILD_PATH)ContainerMmTestOut.o : Figure.h Container.h ContainerMmTestOut.cpp
	$(CC) $(CFLAGS) -c ContainerMmTestOut.cpp -o $(BUILD_PATH)ContainerMmTestOut.o

clean :
	rm _build/obj/*.o
	rm _build/labwork07
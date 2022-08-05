# probably wrong but it builds my shit TODO: add debug seperate

# my compiler my choice
CXX = g++

# cpp flags g for debug and the rest will expand for wxwidgets..
CXXFLAGS = -c -Wall -g `wx-config --cppflags`

# a list of objects to watch
OBJECTS = App.o myWindow.o

# for the linker
LDFLAGS = `wx-config --libs`

# the name of the final binary
OUT_FILE = loginApp

# build the output
${OUT_FILE}: ${OBJECTS}
		${CXX} ${OBJECTS} ${LDFLAGS} -o ${OUT_FILE}

# build all the objects.o
%.o: %.cpp
		${CXX} ${CXXFLAGS} $?


# this will clean everything in the build dir
clean: .PHONY
	${RM} ${OUT_FILE} ${OBJECTS}

.PHONY:
	@printf "******** Cleaning Up **********\n\n"
	@du -h ./loginApp *.o | xargs echo
	@printf "\n***** Will be cleaned ******\n"
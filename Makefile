# source files in this project 
PROJECT_NAME=assg13

assg_src = Card.cpp Deck.cpp

test_src  = ${PROJECT_NAME}-tests.cpp \
	    ${assg_src}

# template files, list all files that define template classes
# or functions and should not be compiled separately (template
# is included where used)
template_files =

# assignment description documentation
assg_doc  = ${PROJECT_NAME}.pdf

# common targets and variables used for all assignments/projects
include include/Makefile.inc

# assignment header file specific dependencies
${OBJ_DIR}/Card.o: ${SRC_DIR}/Card.cpp ${INC_DIR}/Card.hpp
${OBJ_DIR}/Deck.o: ${SRC_DIR}/Deck.cpp ${INC_DIR}/Deck.hpp ${INC_DIR}/Card.hpp
${OBJ_DIR}/${PROJECT_NAME}-tests.o: ${SRC_DIR}/${PROJECT_NAME}-tests.cpp ${INC_DIR}/Card.hpp ${INC_DIR}/Deck.hpp

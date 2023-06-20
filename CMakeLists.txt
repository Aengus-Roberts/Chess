cmake_minimum_required(VERSION 3.24)
project(Chess)

set(CMAKE_CXX_STANDARD 23)

add_executable(Chess main.cpp board.h board.cpp Pieces/King.cpp Pieces/Queen.cpp Pieces/Bishop.cpp Pieces/Knight.cpp Pieces/Rook.cpp Pieces/Pawn.cpp Pieces/King.h Pieces/Knight.h Pieces/Bishop.h Pieces/Pawn.h Pieces/Rook.h Pieces/Queen.h)

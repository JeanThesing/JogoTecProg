// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently

#pragma once

#define WIN32_LEAN_AND_MEAN     // Exclude rarely-used stuff from Windows headers

//Headers do Windows
#include <windows.h>

// Headers SFML
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

//Som
//#include <SFML/Audio.hpp>  // Se for usar som


//Headers padrão C++
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <cstdio>

//Usos de membros específicos de std
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ios;
using std::string;
using std::ifstream;
using std::ofstream;

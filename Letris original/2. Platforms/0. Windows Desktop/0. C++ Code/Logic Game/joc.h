#pragma once

///////////////////////////////////////////////////////////////////////////
//Llibreria grafica
#include "../Graphic Lib/libreria.h"
///////////////////////////////////////////////////////////////////////////

//========================================================================
// Mida Pantalla
const int MIDA_X = 480;
const int MIDA_Y = 850;


const int MAX_ALPHABET_ENGLISH_VOWELS = 5;
const int MAX_ALPHABET_ENGLISH_CONSONANTS = 21;
const int MAX_ALPHABET_ENGLISH = MAX_ALPHABET_ENGLISH_VOWELS + MAX_ALPHABET_ENGLISH_CONSONANTS;
const int MAX_NUM_WORDS = 1000;//200000;
// Mida d'una casella del tauler
const int TILE_WIDTH = 50;
const int TILE_HEIGHT = 50;
const int BOARD_COLS = 8;
const int BOARD_ROWS = 10;

// Inici del tauler respecte la cantonada superior esquerre
const int BOARD_INIT_X = MIDA_X*0.5f - TILE_WIDTH*8*0.5f;
const int BOARD_INIT_Y = 100;

void joc();

/*----- END --------------*/

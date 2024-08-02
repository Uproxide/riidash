#pragma once
#include <cstdio>
#include <cstdlib>
#include <malloc.h>
#include <ogcsys.h>
#include <wiiuse/wpad.h>
#include <asndlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <fat.h>
#include <wiisprite.h>
using namespace wsp;

#define init Initialise

void Initialise() {
	VIDEO_Init();
	ASND_Init();
}
#include "SADXModLoader.h"

const char MyString[] = "Ass";

extern "C" __declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
extern "C" __declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions & helperFunctions)
{
	WriteData((const char**)0x40BE98, "Now Saving...");
	WriteData((const char**)0x40BE09, "Now Loading...");
	WriteData((const char**)0x50342D, "Now Loading...");
	WriteData((const char**)0x503469, "Now Loading...");
	WriteData((const char**)0x504B5B, "Create New File");
	//Hedgehog Hammer japanese (?)
	WriteData((const char**)0x52843D, "HIGH SCORE");
	WriteData((const char**)0x528467, "PTS");
	WriteData((const char**)0x52849A, "PTS");
	WriteData((const char**)0x5284E5, "DOCTOR ROBOTNIK");
	WriteData((const char**)0x528549, "START");
	WriteData((const char**)0x528599, "TIME");
	WriteData((const char**)0x5285A8, "COUNT");
	WriteData((const char**)0x5285E9, "PTS");
	WriteData((const char**)0x528632, "PTS");
	WriteData((const char**)0x5286D1, "GAME OVER");
	WriteData((const char**)0x528728, "CONGRATULATIONS");
	WriteData((const char**)0x528790, "YOU GET THE WARRIOR FEATHER");
	WriteData((const char**)0x5287A3, "YOU GET THE LONG HAMMER");
	WriteData((const char**)0x5287FA, "YOU GOT THE HIGH SCORE");
	//Bosses
	WriteData((const char**)0x5482A8, "Chaos 0");
	WriteData((const char**)0x54CCFE, "Chaos 2");
	WriteData((const char**)0x5509DC, "Chaos 4");
	WriteData((const char**)0x559872, "Chaos 6");
	WriteData((const char**)0x56037F, "Perfect Chaos");
	WriteData((const char**)0x587DA4, "ZERO");
	//Hedgehog Hammer english (?)
	WriteData((const char**)0x62616D, "HIGH SCORE");
	WriteData((const char**)0x626197, "PTS");
	WriteData((const char**)0x6261CA, "PTS");
	WriteData((const char**)0x626215, "DOCTOR ROBOTNIK");
	WriteData((const char**)0x626279, "START");
	WriteData((const char**)0x6262C9, "TIME");
	WriteData((const char**)0x6262D8, "COUNT");
	WriteData((const char**)0x626319, "PTS");
	WriteData((const char**)0x626362, "PTS");
	WriteData((const char**)0x626401, "GAME OVER");
	WriteData((const char**)0x626458, "CONGRATULATIONS");
	WriteData((const char**)0x6264C0, "YOU GET THE WARRIOR FEATHER");
	WriteData((const char**)0x6264D3, "YOU GET THE LONG HAMMER");
	WriteData((const char**)0x62652A, "YOU GOT THE HIGH SCORE");
	WriteData((const char**)0x6283F5, "GAME OVER");
	WriteData((const char**)0x7595DF, "PRESS A BUTTON TO KILL THE CHAO");

}
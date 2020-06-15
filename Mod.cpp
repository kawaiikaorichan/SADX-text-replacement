#include "SADXModLoader.h"

const char MyString[] = "Ass";

extern "C" __declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
extern "C" __declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions & helperFunctions)
{
	WriteData((const char**)0x504B5B, " Crear Archivo");
	WriteData((const char**)0x5482A8, "Caos 0");
	WriteData((const char**)0x54CCFE, "Caos 2");
	WriteData((const char**)0x5509DC, "Caos 4");
	WriteData((const char**)0x559872, "Caos 6");
	WriteData((const char**)0x56037F, "Caos Perfecto");
	WriteData((const char**)0x587DA4, "CERO");

}
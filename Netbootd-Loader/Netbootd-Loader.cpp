// Netbootd-Loader.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "../Netbootd-Network/Netbootd/NetBootd.h"

int main()
{
	NetBootd netboot;
	netboot.Init();
	netboot.Listen();
	netboot.Close();
	return 0;
}

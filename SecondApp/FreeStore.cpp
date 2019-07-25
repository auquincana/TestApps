// FreeStore.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Resource.h"



int _tmain(int argc, _TCHAR* argv[])
{
	{
		Resource localResource("local");
		std::string localString = localResource.GetName();
	}
	Resource* pResource = new Resource(" created with new ");
	std::string newString = pResource->GetName();
	int j = 3;
	if (j == 3)
	{
		return 0; // never delete, leak memory return befor delete
	}
	Resource* p2 = pResource;
	std::string string2 = p2->GetName();
	delete pResource;
	//std::string string3 = pResource->GetName();
	//pResource = nullptr;
	//delete pResource; // limpiar un puntero ya limpiado es una mala idea
	//delete p2; // p2 apunta a una ubicación de memoria que ya ha sido liberada;

	std::string pause;
	std::cout << " Press any key to continue... " << std::endl;
	std::cin >> pause;
	return 0;
}


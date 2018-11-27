#pragma once

#include "Core.h"

namespace eKoSystem
{

	class EKO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in the client
	Application* CreateApplication();

 }
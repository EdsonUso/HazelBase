#pragma once
#include "Core.h"

namespace HazelBase{


	class HAZELBASE_API Application
	{
	public:
		Application();
		virtual ~Application();	

		void Run();

	};

	Application* CreateApplication();
}



#include <eKoSystem.h>

class Sandbox : public eKoSystem::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

eKoSystem::Application* eKoSystem::CreateApplication()
{
	return new Sandbox();
}
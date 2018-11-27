#pragma once

#ifdef EKO_PLATFORM_WINDOWS

extern eKoSystem::Application* eKoSystem::CreateApplication();

int main(int argc, char** argv)
{
	printf("eKoSystem Engine\n");
	auto app = eKoSystem::CreateApplication();
	app->Run();
	delete app;
}

#endif
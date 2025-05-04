#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern HazelBase::Application* HazelBase::CreateApplication();

int main(int argc, char** argv)
{
	printf("HazelBase Engine\n");

	auto app = HazelBase::CreateApplication();
	app->Run();

	delete app;
}

#endif
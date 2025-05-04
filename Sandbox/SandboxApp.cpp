#include <HazelBase.h>

class Sandbox : public HazelBase::Application
{
public:
	Sandbox()
	{
	}
	~Sandbox()
	{
	}
};


HazelBase::Application* HazelBase::CreateApplication()
{
	return new Sandbox();
}
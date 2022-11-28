#include <Hazel.h>

//#ifdef  HZ_PLATFORM_WINDOWS

//extern Hazel::Application* Hazel::CreateApplication();

class Sandbox:public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

//int main(int argc, char** argv)
//{
//	//Hazel::Print();
//	Sandbox * sb = new Sandbox();
//	sb->Run();
//	delete sb;
//}

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
//#endif //  HZ_PLATFORM_WINDOWS
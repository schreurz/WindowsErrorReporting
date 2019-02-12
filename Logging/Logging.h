#pragma once

#include <stdio.h>
#include <time.h>
#include <string>

namespace Logging {
	class Logger
	{
	private:
		std::string path;

	public:
		Logger(std::string path);
		void WriteLog(const char* msg);
	};
}
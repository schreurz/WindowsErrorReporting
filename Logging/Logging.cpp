// Logging.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Logging.h"

Logging::Logger::Logger(std::string path) {
	this->path = path;
}

void Logging::Logger::WriteLog(const char * msg)
{
	FILE * pFile;
	fopen_s(&pFile, (this->path + "\\wer.txt").c_str(), "a");
	if (pFile != NULL)
	{
		time_t now = time(0);  // Get system time
		struct tm timeInfo;
		char timeBuffer[256];

		localtime_s(&timeInfo, &now);  // Convert to local time
		strftime(timeBuffer, 256, "%D %r", &timeInfo);  // Format date/time as string

		fprintf(pFile, "%s: %s\r\n", timeBuffer, msg);  // Append new log entry
		fflush(pFile);  // Write to file now
		fclose(pFile);
	}
}

#ifndef SAMPLELIB_H
#define SAMPLELIB_H

#ifdef _WIN32
#define EXPORTDLL __declspec(dllexport)
#else
#define EXPORTDLL __attribute__((visibility("default")))
#endif

#ifdef __cplusplus
extern "C" {
#endif

EXPORTDLL void setMessage(char messageToSet[]);

EXPORTDLL void deleteMsg(char message[]);

EXPORTDLL void printMessage();

#ifdef __cplusplus
}
#endif

#endif // SAMPLELIB_H
//==============================================================================
//
// Title:		file.h
// Purpose:		A short description of the interface.
//
// Created on:	2023-03-08 at 10:17:29 by .
// Copyright:	. All Rights Reserved.
//
//==============================================================================

#ifndef __file_H__
#define __file_H__

#ifdef __cplusplus
extern "C" {
#endif

//==============================================================================
// Include files


//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// External variables

//==============================================================================
// Global functions

//int Declare_Your_Functions_Here (int x);

void SplitPath(const char* pathName, char *driveName, char *dirName, char *fileName);
int GetCurrentAllFile(const char *searchDir, char fileList[][300], int *numOfFile);
void GetCurrentAllDir(const char *searchDir, char dirList[][300], int *numOfDir);


#ifdef __cplusplus
}
#endif

#endif  /* ndef __lib_public_H__ */

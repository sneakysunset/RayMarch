// Copyright Epic Games, Inc. All Rights Reserved.

#include "RayMarch.h"
#include "Modules/ModuleManager.h"


void FRayMarchModule::StartupModule()
{
	FString ShaderDir =  FPaths::Combine(FPaths::ProjectDir(), "Shaders");
	if(FPaths::DirectoryExists(ShaderDir))
	{
		AddShaderSourceDirectoryMapping(TEXT("/RayMarch"), ShaderDir);
	}
}

void FRayMarchModule::ShutdownModule()
{

}


IMPLEMENT_PRIMARY_GAME_MODULE( FRayMarchModule, RayMarch, "RayMarch" );

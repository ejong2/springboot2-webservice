// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tenth_Project : ModuleRules
{
	public Tenth_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
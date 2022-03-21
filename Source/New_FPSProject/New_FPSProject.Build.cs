// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class New_FPSProject : ModuleRules
{
	public New_FPSProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

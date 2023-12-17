// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class demo_house : ModuleRules
{
	public demo_house(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

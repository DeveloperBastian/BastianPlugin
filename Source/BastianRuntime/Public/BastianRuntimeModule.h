// Developer Bastian - MIT license - https://www.youtube.com/@bastiandev

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FBastianRuntimeModule : public IModuleInterface
{	
public:
	static inline TSharedPtr<FSlateStyleSet> StyleSetInstance = nullptr;
	//~IModuleInterface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	//~End of IModuleInterface
};

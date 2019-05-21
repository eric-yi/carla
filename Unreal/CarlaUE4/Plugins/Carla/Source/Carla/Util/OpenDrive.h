// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "OpenDrive.generated.h"

UCLASS()
class CARLA_API UOpenDrive : public UBlueprintFunctionLibrary
{
  GENERATED_BODY()

public:

  static FString FindPathToXODRFile(const FString &MapName);

  /// Return the OpenDrive XML associated to @a MapName, or empty if the file
  /// is not found.
  static FString Load(const FString &MapName);
};

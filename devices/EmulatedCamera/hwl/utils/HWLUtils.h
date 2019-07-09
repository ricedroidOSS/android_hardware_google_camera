/*
 * Copyright (C) 2013-2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef EMULATOR_CAMERA_HAL_HWL_HWL_UTILS_H_
#define EMULATOR_CAMERA_HAL_HWL_HWL_UTILS_H_

#include "hwl_types.h"
#include "EmulatedSensor.h"
#include "system/camera_metadata.h"

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
#endif

namespace android {

using google_camera_hal::HalCameraMetadata;

// Metadata utility functions start
bool hasCapability(const HalCameraMetadata* metadata, uint8_t capability);
status_t getSensorCharacteristics(const HalCameraMetadata* metadata,
        SensorCharacteristics* sensorChars /*out*/);
// Metadata utility functions end

} // namespace android ends here

#endif  // EMULATOR_CAMERA_HAL_HWL_HWL_UTILS_H_

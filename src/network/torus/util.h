/*
 * Copyright 2016 Hewlett Packard Enterprise Development LP
 *
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef NETWORK_TORUS_UTIL_H_
#define NETWORK_TORUS_UTIL_H_

#include <prim/prim.h>

#include <vector>

namespace Torus {

// This function determines the dimension correspondance of an input port.
//  This returns U32_MAX for terminal ports.
u32 computeInputPortDim(const std::vector<u32>& _dimensionWidths,
                        u32 _concentration, u32 _inputPort);

void computeAddress(u32 _id, const std::vector<u32>& _widths,
                    u32 _concentration, std::vector<u32>* _address);

u32 computeId(const std::vector<u32>& _address, const std::vector<u32>& _widths,
              u32 _concentration);

}  // namespace Torus

#endif  // NETWORK_TORUS_UTIL_H_

// Copyright [yyyy] [name of copyright owner]
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//
// Brief description:
// Namespace and version macros

#ifndef _DYWOQ_CORE___NAMESPACE_HXX
#define _DYWOQ_CORE___NAMESPACE_HXX

#define _DYWOQ_CORE___NAMESPACE_VERSION_BEGIN(version)                         \
  inline namespace __##version {
#define _DYWOQ_CORE___NAMESPACE_VERSION_END }

#define _DYWOQ_CORE___NAMESPACE_BEGIN namespace dywoq::core {
#define _DYWOQ_CORE___NAMESPACE_END }

#endif

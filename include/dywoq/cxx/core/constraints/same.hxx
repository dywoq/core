/*
 * dywoq 2025
 *
 * Licensed under Apache License 2.0:
 * https://github.com/dywoq/cxx/blob/main/LICENSE
 *
 * Repository:
 * https://github.com/dywoq/cxx
 */

#ifndef _DYWOQ_CXX_CORE_CONSTRAINTS_SAME_HXX
#define _DYWOQ_CXX_CORE_CONSTRAINTS_SAME_HXX

#include "../../__config.hxx"
#include "satisfied.hxx"

#if _DYWOQ_CXX__VERSION_SUPPORTED
namespace dywoq::cxx::core::constraints {
  template <typename _Tp, typename _Ut> struct is_same : satisfied<_Tp, false> {};
  template <typename _Tp> struct is_same<_Tp, _Tp> : satisfied<_Tp, true> {};
  template <typename _Tp, typename _Ut> inline constexpr bool is_same_v = is_same<_Tp, _Ut>::yes;
} // namespace dywoq::cxx::core::constraints
#endif

#endif

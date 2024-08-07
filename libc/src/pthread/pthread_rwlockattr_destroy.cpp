//===-- Implementation of the pthread_rwlockattr_destroy ------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "pthread_rwlockattr_destroy.h"

#include "src/__support/common.h"
#include "src/__support/macros/config.h"

#include <pthread.h> // pthread_rwlockattr_t

namespace LIBC_NAMESPACE_DECL {

LLVM_LIBC_FUNCTION(int, pthread_rwlockattr_destroy,
                   (pthread_rwlockattr_t * attr [[gnu::unused]])) {
  // Initializing a pthread_rwlockattr_t acquires no resources, so this is a
  // no-op.
  return 0;
}

} // namespace LIBC_NAMESPACE_DECL

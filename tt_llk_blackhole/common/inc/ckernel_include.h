// SPDX-FileCopyrightText: © 2025 Tenstorrent AI ULC
//
// SPDX-License-Identifier: Apache-2.0


#pragma once

//
// This file lists the includes that are safe to be included for both firmware and ckernels
//

// MT: This should be dissolved and moved to the appropriate place
#include "tensix.h"

#include "ckernel_defs.h"
#include "ckernel_instr_params.h"
#include "ckernel_addrmod.h"
#include "ckernel_gpr_map.h"
#include "ckernel_structs.h"

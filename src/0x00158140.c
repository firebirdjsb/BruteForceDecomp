/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5ADD1479A05B47B4E86912462E96FFA10546BDDA9C1F972AB398D077A6EC8210
 * Entry: 0x00158140, Ghidra index: 4494, label: FUN_00158140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
undefined4 FUN_00158140(undefined4 param_1)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00157fe0(param_1);
  local_14 = &PTR_LAB_003a3fb4;
  local_4 = 0xffffffff;
  local_10 = 0xe;
  local_8 = param_1;
  local_c = 0;
  FUN_001fe3d0(&local_14);
  return 1;
}

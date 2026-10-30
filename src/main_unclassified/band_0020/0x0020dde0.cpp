/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16CA328C074E4694374748BE97E3E87FE95EBE74F72636DB4F493C449BDA7382
 * Entry: 0x0020dde0, Ghidra index: 7396, label: FUN_0020dde0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0020dde0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307fa0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307fa0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    if (param_3 != 0) {
      FUN_001fd1e0();
    }
    param_3 = param_3 + 0x24;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

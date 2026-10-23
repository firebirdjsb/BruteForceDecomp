/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDD3B0F0E69053221EEC5D0D4032EF6089A8F020FA811A63A962E41ECC22C679
 * Entry: 0x001da250, Ghidra index: 6494, label: FUN_001da250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001da250(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003087a0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003087a0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001c9660();
    }
    param_1 = param_1 + 0x68;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

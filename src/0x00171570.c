/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADBC5F4D600B45415F7340BD140C4DB920A1C7D023B7509E0BF20B1F90E63142
 * Entry: 0x00171570, Ghidra index: 4851, label: FUN_00171570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00171570(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003078b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001713d0();
    }
    param_1 = param_1 + 100;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

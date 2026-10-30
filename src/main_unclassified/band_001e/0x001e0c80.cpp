/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70990A19F3ECED24778F43FC200E9635D1DC764D4A55B1C912D422CF14D1DEC6
 * Entry: 0x001e0c80, Ghidra index: 6720, label: FUN_001e0c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e0c80(undefined2 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 *in_EDX;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = *in_EDX;
    }
    param_1 = param_1 + 1;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}

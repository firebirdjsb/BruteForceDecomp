/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B1F394A616DA22E75FB24AC972A16904AEB6B55E49D68DF144FCD70F3DCA489
 * Entry: 0x00144b10, Ghidra index: 4170, label: FUN_00144b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00144b10(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_EDX;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_EDX;
      param_1[1] = in_EDX[1];
    }
    param_1 = param_1 + 2;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}

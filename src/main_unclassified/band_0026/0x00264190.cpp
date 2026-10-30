/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7881DE328FFD6E7256E499EACAC2CDCBF454250725F8868F3EC21CC281700F88
 * Entry: 0x00264190, Ghidra index: 8697, label: FUN_00264190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00264190(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[1] = in_ECX[1];
    }
    param_1 = param_1 + 2;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}

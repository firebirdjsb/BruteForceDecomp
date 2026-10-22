/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7E37A020E6D613EB03CF6673E1326DA528A79F0D9EE6FD3793AA951E894CCD3
 * Entry: 0x0024c790, Ghidra index: 8293, label: FUN_0024c790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024c790(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = *in_ECX;
    }
    param_1 = param_1 + 1;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}

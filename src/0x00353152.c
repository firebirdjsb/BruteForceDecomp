/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDF2FBFC8E537A992EAA2C6A86168775F37CBAF64104A0613EBB64274C9AB2C4
 * Entry: 0x00353152, Ghidra index: 13079, label: FUN_00353152
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00353152(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac);
  if ((*(byte *)(param_1 + 0x7c) < 4) ||
     (*(int *)(param_1 + 0xa0) == iVar1 || *(int *)(param_1 + 0xa0) - iVar1 < 0)) {
    iVar1 = *(int *)(param_1 + 0xa0);
  }
  return iVar1;
}

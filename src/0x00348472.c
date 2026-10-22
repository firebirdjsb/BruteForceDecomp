/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C29A8629B42F5F5F33CC7C15D1F03BCA31838E64F78A4CEC9A8AA3F7B7C1E72A
 * Entry: 0x00348472, Ghidra index: 12895, label: FUN_00348472
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00348472(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  if ((((*(int *)(in_ECX + 0xac4) != 0) && (param_1 != 0)) && ((char)param_1 == '\0')) &&
     ((param_1 >> 0x18 < (uint)*(byte *)(in_ECX + 0xe) &&
      (iVar1 = (param_1 >> 0x18) * 0x130 + *(int *)(in_ECX + 0xac4), *(uint *)(iVar1 + 4) != param_1
      )))) {
    iVar1 = 0;
  }
  return iVar1;
}

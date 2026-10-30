/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 808F4A77D0DD615A862F0D8F03F4587F2A8BCF5AE13163288E3B52B1B0786E14
 * Entry: 0x002feb17, Ghidra index: 11044, label: FUN_002feb17
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002feb17(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[1];
  iVar2 = *in_ECX + in_EAX;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + in_EAX) + in_ECX[2]) + iVar1;
  }
  return iVar2;
}

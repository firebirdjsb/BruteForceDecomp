/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1182F8A53254F61361C7D2F6C5FB99833C99E0935405F8B12D109D5EFF57AE97
 * Entry: 0x001e9a10, Ghidra index: 6861, label: FUN_001e9a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001e9a10(int *param_1,int param_2,int param_3)

{
  uint *in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = param_3 - param_2 >> 5;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(uint *)(iVar1 * 0x20 + param_2) < *in_EAX) {
        param_2 = iVar1 * 0x20 + param_2 + 0x20;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  *param_1 = param_2;
  return param_1;
}

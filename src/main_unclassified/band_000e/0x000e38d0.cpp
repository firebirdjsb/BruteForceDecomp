/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3920F944C42887AC1FD81CB7CF662BB58FE4D91790497CD7FDCE96D58E60141
 * Entry: 0x000e38d0, Ghidra index: 2821, label: FUN_000e38d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e38d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_000e3ad0(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1),param_3);
  }
  return;
}

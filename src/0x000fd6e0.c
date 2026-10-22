/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E01E951EC3E54CCE4256FAEA787699B060E052F9D137CB7BE951A4F635A6FB42
 * Entry: 0x000fd6e0, Ghidra index: 3167, label: FUN_000fd6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000fd6e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*in_EAX == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar2 = FUN_000fd6a0(*in_EAX);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    for (iVar2 = *(int *)(iVar2 + 8); iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
      iVar3 = FUN_000fd550(param_1,param_2);
      iVar4 = iVar4 + iVar3;
    }
  }
  return iVar4;
}

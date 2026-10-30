/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22A10110DFBE48FD1C3658F67FADC345C87048EACD1CF3B4427AC2F8436FBC54
 * Entry: 0x0007d440, Ghidra index: 1491, label: FUN_0007d440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0007d440(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar2 = -1;
  if (iVar1 != *(int *)(in_ECX + 8)) {
    iVar3 = iVar1;
    while (*(int *)(iVar3 + 0x20) != *param_1) {
      iVar3 = iVar3 + 0x3c;
      if (iVar3 == *(int *)(in_ECX + 8)) {
        return iVar2;
      }
    }
    iVar2 = (iVar3 - iVar1) / 0x3c;
  }
  return iVar2;
}

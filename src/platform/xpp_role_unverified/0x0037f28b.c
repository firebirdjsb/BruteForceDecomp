/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 792528EFD86562B4962456608FD9532AF261394EA0C92A6417BF9C4D4C39828F
 * Entry: 0x0037f28b, Ghidra index: 13496, label: IUsbInit_GetMaxDeviceTypeCount
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__IUsbInit_GetMaxDeviceTypeCount(int param_1)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar1 = *(int **)(in_ECX + 0x9c);
  uVar2 = 0;
  if ((piVar1 != (int *)0x0) && (piVar3 = piVar1, *(uint *)(in_ECX + 0x98) != 0)) {
    do {
      if (*piVar3 == param_1) {
        return piVar1[uVar2 * 2 + 1];
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(uint *)(in_ECX + 0x98));
  }
  return 0;
}

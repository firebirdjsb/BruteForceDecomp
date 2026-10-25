/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8196A942FD11208025763B49594B291B12A0B9004D8833CD973EFF3AE3421131
 * Entry: 0x00236e30, Ghidra index: 7841, label: FUN_00236e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* x86 0x00236E30..0x00236E99: EAX retains the nonzero matched
 * element address or the recursive child's matched EAX word.
 * Xbox ECX and returned addresses remain 32-bit guest words. */
undefined4 FUN_00236e30(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3 = 0;
  int *in_ECX;
  int iVar4;
  
  if ((*in_ECX != 0) && (iVar4 = *(int *)(*in_ECX + 0x14), iVar4 != 0)) {
    piVar2 = *(int **)(iVar4 + 4);
    if (piVar2 != *(int **)(iVar4 + 8)) {
      do {
        if (*piVar2 == *param_1) goto LAB_00236e5e;
        piVar2 = piVar2 + 0xe;
      } while (piVar2 != *(int **)(iVar4 + 8));
    }
  }
  piVar2 = (int *)0x0;
LAB_00236e5e:
  if (piVar2 == (int *)0x0) {
    iVar4 = in_ECX[0x13];
    iVar1 = in_ECX[0x14];
    while ((iVar4 != iVar1 && (iVar3 = FUN_00236e30(param_1,param_2), iVar3 == 0))) {
      iVar4 = iVar4 + 4;
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    *param_2 = (undefined4)(uintptr_t)in_ECX;
    return (undefined4)(uintptr_t)piVar2;
  }
  return piVar2 == (int *)0x0 ? (undefined4)iVar3 : (undefined4)(uintptr_t)piVar2;
}

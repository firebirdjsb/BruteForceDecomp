/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C1A078F33871E2FCB80EF1CC59A148493FE4542292736587743D5224A59951F
 * Entry: 0x00122ed0, Ghidra index: 3668, label: FUN_00122ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00122ed0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (param_1 != (int *)0x0) {
    FUN_0014dc50();
    uVar3 = uVar4;
    if ((param_1 != (int *)0x0) && (iVar1 = (**(code **)(*param_1 + 0x5c))(), iVar1 != 0)) {
      (**(code **)(*param_1 + 0x5c))();
      piVar2 = (int *)FUN_0022b580();
      if (piVar2 == param_1) {
        uVar3 = 1;
      }
    }
    if ((in_ECX != (int *)0x0) && (iVar1 = (**(code **)(*in_ECX + 0x5c))(), iVar1 != 0)) {
      (**(code **)(*in_ECX + 0x5c))();
      piVar2 = (int *)FUN_0022b580();
      if (piVar2 == param_1) {
        return 1;
      }
    }
  }
  return uVar3;
}

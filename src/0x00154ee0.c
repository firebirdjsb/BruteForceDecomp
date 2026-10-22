/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4809DD569B4CDE2210FF060E89ADA5591F362D4E1348500051DC8037E431AEAC
 * Entry: 0x00154ee0, Ghidra index: 4454, label: FUN_00154ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00154ee0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  if (in_ECX[0x32] != 0) {
    iVar1 = FUN_002ea01d(0x1c4);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)FUN_00156930();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x9c))(param_1);
      uVar3 = (**(code **)(*in_ECX + 0x1c))(param_1,piVar2);
      return uVar3;
    }
  }
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 911A766CF78A43154D14195066C433968C812FA466062FBFC662EC4CA37592B1
 * Entry: 0x0023a890, Ghidra index: 7903, label: FUN_0023a890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0023a890(void)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  int local_8 [2];
  
  local_8[0] = 0;
  iVar1 = (**(code **)*unaff_EDI)();
  if (iVar1 < 0) {
    if (local_8 != (int *)0x0) {
      (**(code **)(local_8[0] + 8))(local_8);
      return iVar1;
    }
  }
  else {
    piVar2 = (int *)(**(code **)(local_8[0] + 0xc))(local_8,&stack0xfffffff0);
    if (*piVar2 != unaff_ESI) {
      if (unaff_EDI != (int *)0x0) {
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      return -0x7fffbffb;
    }
    piVar2 = (int *)0x1;
    iVar1 = (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,unaff_EBX);
    if (iVar1 < 0) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      return -0x7fffbffb;
    }
    (**(code **)(*unaff_EDI + 0x18))();
    (**(code **)(*in_EAX + 0x18))();
    iVar1 = (**(code **)(*unaff_EDI + 0x24))();
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*unaff_EDI + 0x28))();
    }
    FUN_00239dc0();
    (**(code **)(iRam00000002 + 8))(2);
  }
  return iVar1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E61815CD861B5E40DD062EEBB8D9750062FA8491CA9F0E0BD55433FEA96B44D8
 * Entry: 0x000aece0, Ghidra index: 2090, label: FUN_000aece0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000aece0(void)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined3 uVar5;
  undefined3 extraout_var;
  int unaff_ESI;
  int *unaff_EDI;
  
  cVar2 = FUN_000ae360();
  (**(code **)(*unaff_EDI + 0x40))();
  cVar3 = FUN_000b0940();
  if ((cVar3 != '\0') || (cVar2 == '\0')) {
    FUN_000b0550();
    if (0.0 < (float)unaff_EDI[0x43] * 0.5) {
      FUN_002ea51b();
    }
    iVar1 = *(int *)(unaff_ESI + 0x40);
    iVar4 = FUN_000b1240(unaff_ESI + 0x3c);
    FUN_000b12d0();
    *(int *)(iVar1 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    uVar5 = (undefined3)((uint)iVar4 >> 8);
    if (cVar3 != '\0') goto LAB_000aeef0;
  }
  FUN_000b0ad0();
  FUN_000b0550();
  FUN_000b0550();
  if (0.0 < (float)unaff_EDI[0x43] * 0.5) {
    FUN_002ea51b((double)((float)unaff_EDI[0x43] * 0.5));
  }
  FUN_000b0f50();
  uVar5 = extraout_var;
LAB_000aeef0:
  return CONCAT31(uVar5,1);
}

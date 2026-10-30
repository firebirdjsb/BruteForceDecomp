/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 985B471F36B71E41941ACFCD53E6AF681B58492D4DF300F939561C5D8CAB9E74
 * Entry: 0x0022daf0, Ghidra index: 7713, label: FUN_0022daf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0022daf0(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EDI;
  char unaff_retaddr;
  
  if (0 < *(int *)(unaff_EDI + 0x28c)) {
    *(undefined4 *)(unaff_EDI + 0x28c) = 0;
    *(byte *)(unaff_EDI + 0x224) = *(byte *)(unaff_EDI + 0x224) & 0xfa;
    if (*(int *)(unaff_EDI + 0x360) != 0) {
      FUN_0008f6a0(0);
    }
  }
  if ((*(int *)(*(int *)(unaff_EDI + 0x228) + 0xec) != 0) &&
     (*(int *)(unaff_EDI + 0x1f8) < *(int *)(*(int *)(unaff_EDI + 0x228) + 0xe4))) {
    if ((*(int *)(unaff_EDI + 0x1b0) != 0) &&
       (iVar4 = *(int *)(*(int *)(unaff_EDI + 0x1b0) + 8), iVar4 != 0)) {
      piVar2 = (int *)FUN_0022da80();
      if (piVar2 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar2 + 0x5c))();
        cVar1 = (**(code **)(*piVar2 + 0x3c))(iVar4);
        if (cVar1 != '\0') {
          if (unaff_retaddr == '\0') {
            *(undefined4 *)(unaff_EDI + 0x1f8) = *(undefined4 *)(unaff_EDI + 0x1e8);
            *(undefined4 *)(unaff_EDI + 0x1e8) = 0;
          }
          else {
            iVar4 = FUN_0014ab50();
            if (iVar4 != 0) {
              iVar4 = *(int *)(iVar4 + 0x2e8);
              (**(code **)(*(int *)(iVar4 + 0xf0) + 0x28))(uVar3);
              (**(code **)(*(int *)(iVar4 + 0xf0) + 0x24))(*(undefined4 *)(unaff_EDI + 0x1e8));
              return 1;
            }
          }
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}

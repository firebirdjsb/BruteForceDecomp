/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 807CB4C054A6B6BA74DC5697F3F186969D8B64DDDEDE41F150393DB3BF80A4DA
 * Entry: 0x00224950, Ghidra index: 7622, label: FUN_00224950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00224950(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0x60) != 0) {
    piVar1 = *(int **)(unaff_EBX + 0x5c);
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      iVar3 = piVar2[4];
      if (iVar3 != 0) {
        if (*(int *)(iVar3 + 0x28) != 0) {
          FUN_0008f6e0();
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar3);
      }
      FUN_0012aba0();
    }
    FUN_00225d60(*(undefined4 *)(*(int *)(unaff_EBX + 0x5c) + 4));
    *(int *)(*(int *)(unaff_EBX + 0x5c) + 4) = *(int *)(unaff_EBX + 0x5c);
    *(undefined4 *)(unaff_EBX + 0x60) = 0;
    *(undefined4 *)*(undefined4 *)(unaff_EBX + 0x5c) = *(undefined4 *)(unaff_EBX + 0x5c);
    *(int *)(*(int *)(unaff_EBX + 0x5c) + 8) = *(int *)(unaff_EBX + 0x5c);
  }
  return;
}

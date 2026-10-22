/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C11292D59707E43FC75B1DB48A2F3A9D832F973DC70F1081C500F04B04A681F4
 * Entry: 0x00257a70, Ghidra index: 8460, label: FUN_00257a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00257b32) */

undefined4 FUN_00257a70(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined4 uVar4;
  int unaff_EDI;
  
  FUN_00258600(*(undefined4 *)(*(int *)(unaff_EDI + 0x28) + 4));
  *(int *)(*(int *)(unaff_EDI + 0x28) + 4) = *(int *)(unaff_EDI + 0x28);
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  *(undefined4 *)*(undefined4 *)(unaff_EDI + 0x28) = *(undefined4 *)(unaff_EDI + 0x28);
  *(int *)(*(int *)(unaff_EDI + 0x28) + 8) = *(int *)(unaff_EDI + 0x28);
  *(undefined4 *)(unaff_EDI + 0x30) = 0;
  iVar3 = FUN_00257860();
  if ((-1 < iVar3) && (iVar3 = FUN_002578c0(in_EAX), -1 < iVar3)) {
    FUN_00252c60();
    FUN_0014c470(0);
    piVar1 = *(int **)(unaff_EDI + 0x28);
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      *(int *)(piVar2[4] * 4) = piVar2[3];
      FUN_0012aba0();
    }
    uVar4 = (**(code **)(**(int **)(unaff_EDI + 0x14) + 0x14))
                      (*(int **)(unaff_EDI + 0x14),0,*(int *)(unaff_EDI + 0x30) << 2,0);
    return uVar4;
  }
  return 0x80004005;
}

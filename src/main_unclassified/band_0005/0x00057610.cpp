/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F834AFDAAD48320B3AEF7DF8331CF5DFEBA27B421591BB7458BFDE0C658E36EA
 * Entry: 0x00057610, Ghidra index: 851, label: FUN_00057610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_0004b9c0(void);
extern undefined4 FUN_000456c0(void);
extern undefined1 FUN_0004d140(int *param_1,undefined4 param_2,undefined4 param_3);
extern int FUN_000388b0(int param_1);

undefined4
FUN_00057610(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBX;
  int *unaff_ESI;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  piVar3 = (int *)(**(code **)(*unaff_EBX + 0xec))();
  piVar4 = (int *)(**(code **)(*unaff_ESI + 0xec))();
  if (((piVar3 == (int *)0x0) || ((*(byte *)(unaff_EBX + 0x1c) & 1) != 0)) ||
     (iVar5 = (**(code **)(*unaff_EBX + 0xf4))(), iVar5 == 0)) {
    return 0;
  }
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar3 + 0x9c))();
    iVar6 = (**(code **)(*piVar4 + 0x9c))();
    if ((iVar5 == iVar6) && (cVar1 = FUN_0004b9c0(), cVar1 != '\0')) {
      iVar5 = (**(code **)(*unaff_EBX + 0xf4))();
      piVar3 = (int *)FUN_000456c0();
      if (piVar3 != unaff_ESI) {
        return 1;
      }
      iVar5 = *(int *)(iVar5 + 0x58);
      if (((iVar5 != 2) && (iVar5 != 1)) && (iVar5 != 4)) {
        return 1;
      }
      *param_2 = 1;
      *param_3 = 1;
      *param_4 = 1;
      return 1;
    }
  }
  if (*(int *)(unaff_ESI[3] + 4) == 0x1d) {
    FUN_0004d140();
    *param_3 = 1;
  }
  else {
    uVar2 = FUN_0004d140();
    *param_3 = uVar2;
  }
  iVar5 = (**(code **)(*unaff_EBX + 0xf4))();
  iVar5 = FUN_000388b0(*(undefined4 *)(iVar5 + 0x358));
  *param_2 = iVar5 != 0;
  return 1;
}

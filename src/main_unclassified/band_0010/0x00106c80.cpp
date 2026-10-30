/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CF5CBA90D34F7BA9BF94C448AB1C63B2F1B4F82A275DE5D2B37D2FA21A5701D
 * Entry: 0x00106c80, Ghidra index: 3365, label: FUN_00106c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00106c80(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int *unaff_EDI;
  undefined1 auStack_4 [4];
  
  if (unaff_EDI != (int *)0x0) {
    iVar5 = (**(code **)(*unaff_EDI + 4))();
    if (iVar5 == 1) {
      puVar6 = (undefined1 *)FUN_000ef3a0(auStack_4);
      uVar1 = puVar6[3];
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      uVar4 = puVar6[2];
      if (unaff_EDI[0x29] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(unaff_EDI[0x29]);
      }
      unaff_EDI[0x28] = 0;
      puVar7 = (undefined4 *)thunk_FUN_002ea01d(8);
      unaff_EDI[0x29] = (int)puVar7;
      *puVar7 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
      puVar7[1] = 0xfffb6464;
      unaff_EDI[0x28] = 2;
    }
  }
  return;
}

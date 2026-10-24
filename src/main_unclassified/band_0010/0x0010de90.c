/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DEC61452C2C6F0A49DD4A4B46EBFF2B95B9D65EEB4950B6FBBFB1613DB07F69
 * Entry: 0x0010de90, Ghidra index: 3507, label: FUN_0010de90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010de90(int param_1)

{
  short *psVar1;
  short sVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_18;
  undefined4 uStack_8;
  uint uStack_4;
  
  piVar3 = *(int **)(in_EAX + 0x78);
  piVar8 = (int *)0x0;
  if (piVar3 != *(int **)(in_EAX + 0x7c)) {
    do {
      piVar8 = (int *)*piVar3;
      if (((int *)*piVar3)[9] == 0xb75a0fb) break;
      piVar3 = piVar3 + 1;
      piVar8 = (int *)0x0;
    } while (piVar3 != *(int **)(in_EAX + 0x7c));
  }
  if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 4))(), iVar4 == 6)) {
    uVar6 = (uint)(*(char *)(param_1 + 0x91) != '\0');
    psVar5 = (short *)FUN_001e97c0();
    iVar4 = 0;
    uStack_4 = 7;
    uStack_8 = 0;
    /* 0x0010DF06 MOV WORD PTR [ESP+0x18],DI (DI=0): clear only the low 16 bits.
       * Guest stack high 16 bits remain unknown (ABI_UNVERIFIED). */
      uStack_18 &= UINT32_C(0xffff0000);
    sVar2 = *psVar5;
    while (sVar2 != 0) {
      if (sVar2 == 0x20) {
        iVar4 = iVar4 + 1;
        if (iVar4 <= (int)uVar6) {
          puVar7 = uStack_18;
          if (uStack_4 < 8) {
            puVar7 = &uStack_18;
          }
          FUN_00106590(&param_1,puVar7);
        }
      }
      else if (iVar4 <= (int)uVar6) {
        FUN_0010aed0();
      }
      psVar1 = psVar5 + 1;
      psVar5 = psVar5 + 1;
      sVar2 = *psVar1;
    }
    iVar4 = FUN_001098f0();
    if (iVar4 != 0) {
      FUN_0010a7d0();
    }
    if (7 < uStack_4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
  }
  return;
}

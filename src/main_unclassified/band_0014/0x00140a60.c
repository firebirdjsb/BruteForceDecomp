/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E62F93A64226307B9C623DC0D55C30EC31D85EC4BABEB87A3D6CCB5874DC174E
 * Entry: 0x00140a60, Ghidra index: 4089, label: FUN_00140a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040c9dc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00140a60(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  int unaff_retaddr;
  int iStack_8;
  
  iVar9 = 0;
  if ((((*(int *)(param_1 + 0x24) == 0) &&
       ((*(byte *)(*(int *)(param_1 + 0x18) + 0xc50) & 0x10) == 0)) && (param_2 != (int *)0x0)) &&
     (((*(byte *)((int)param_2 + 0x26) & 8) != 0 && (cVar6 = FUN_001263e0(), cVar6 != '\0')))) {
    iVar7 = FUN_001353c0();
    piVar3 = *(int **)(param_2[2] + 0xbec);
    iVar8 = (**(code **)(*param_2 + 0x40))();
    fVar10 = (float10)(**(code **)(*piVar3 + 0x24))(iVar8 + 0x24);
    if ((((iVar7 != 0) &&
         (((*(byte *)(iVar7 + 0x48) & 0x10) == 0 ||
          (cVar6 = FUN_001409a0(unaff_retaddr,(float)fVar10), cVar6 == '\0')))) &&
        (cVar6 = FUN_001372c0(param_2), cVar6 != '\0')) && (cVar6 = FUN_001374c0(), cVar6 != '\0'))
    {
      iStack_8 = *(int *)(iVar7 + 8);
      cVar6 = FUN_001409c0(unaff_retaddr,(float)fVar10);
      if ((cVar6 != '\0') && ((*(byte *)(iVar7 + 0x48) & 8) != 0)) {
        iStack_8 = iStack_8 + -1;
      }
      if (iStack_8 != 0) {
        fVar10 = (float10)FUN_00141020(unaff_retaddr,10);
        fVar11 = (float10)FUN_00141020(unaff_retaddr,iStack_8);
        fVar1 = (float)fVar11;
        param_2 = (int *)0x7f7fffff;
        fVar4 = (float)fVar10 - fVar1;
        fVar2 = *(float *)(iVar7 + 0x50);
        if ((((fVar1 <= 0.0) || (fVar5 = _DAT_0040c9dc + fVar1, fVar5 < fVar2 == (fVar5 == fVar2)))
            && (fVar5 = fVar1, fVar1 < fVar2 == (fVar1 == fVar2))) &&
           (((fVar4 <= 0.0 || (fVar5 = _DAT_0040c9dc + fVar4, fVar5 < fVar2 == (fVar5 == fVar2))) &&
            (fVar5 = (float)param_2, fVar4 < fVar2 != (fVar4 == fVar2))))) {
          fVar5 = fVar4;
        }
        param_2 = (int *)fVar5;
        if (((float)param_2 < fVar2 != ((float)param_2 == fVar2)) &&
           (cVar6 = FUN_00140a40(iStack_8), cVar6 != '\0')) {
          FUN_00141000();
          iVar9 = FUN_002ea01d(0x50);
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_0013feb0();
          }
          FUN_0013ffc0(iVar9);
          FUN_001400d0(iVar9,iVar7,param_1,1,0);
          FUN_00140040();
          *(int *)(iVar9 + 8) = iStack_8;
          *(byte *)(iVar9 + 0xc) =
               ((*(byte *)(iVar7 + 0x48) >> 2 & 1) << 2 | *(byte *)(iVar7 + 0x48) & 2) << 1 |
               *(byte *)(iVar9 + 0xc) & 0xf3;
          if (0.0 < (float)param_2) {
            *(int *)(unaff_retaddr + 4) = iVar9;
            *(int **)(unaff_retaddr + 8) = param_2;
            return iVar9;
          }
          FUN_00140cd0(unaff_retaddr,iVar9,0);
        }
      }
    }
  }
  return iVar9;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AF74A7F843FBE38C22902698F006890C644264C97157C9B65F340537B5F1D07
 * Entry: 0x000ae580, Ghidra index: 2087, label: FUN_000ae580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
void FUN_000ae580(void)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  int unaff_EBX;
  int *local_4;
  
  if (*(int *)(unaff_EBX + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 0x4c));
  }
  *(undefined4 *)(unaff_EBX + 0x4c) = 0;
  *(undefined4 *)(unaff_EBX + 0x50) = 0;
  *(undefined4 *)(unaff_EBX + 0x54) = 0;
  if (*(int *)(unaff_EBX + 0x5c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 0x5c));
  }
  *(undefined4 *)(unaff_EBX + 0x5c) = 0;
  *(undefined4 *)(unaff_EBX + 0x60) = 0;
  *(undefined4 *)(unaff_EBX + 100) = 0;
  if (*(int *)(unaff_EBX + 0x6c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 0x6c));
  }
  *(undefined4 *)(unaff_EBX + 0x6c) = 0;
  *(undefined4 *)(unaff_EBX + 0x70) = 0;
  *(undefined4 *)(unaff_EBX + 0x74) = 0;
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(unaff_EBX + 0x84) + 0x34) + 0x48) + 0x68);
  puVar3 = *(undefined4 **)(*(int *)(iVar2 + 8) + 0xec);
  if (puVar3 == (undefined4 *)0x0) {
    local_4 = (int *)0x0;
  }
  else {
    local_4 = (int *)*puVar3;
  }
  if (((*(byte *)(iVar2 + 0x26) & 8) != 0) &&
     (FUN_000aec10(), local_4 != *(int **)(*(int *)(iVar2 + 8) + 0xec))) {
    do {
      piVar4 = (int *)local_4[2];
      if ((piVar4 != (int *)0x0) &&
         (((uint)piVar4 & -(uint)((*(byte *)((int)piVar4 + 0x26) & 0x40) != 0)) != 0)) {
        if (((*(int *)(piVar4[3] + 4) == 3) && (*(int *)(iVar2 + 0x59c) != 0)) &&
           (*(int *)(iVar2 + 0x59c) == piVar4[0x167])) goto LAB_000ae790;
        cVar5 = *(char *)((int)piVar4 + 0x7a);
        if ((cVar5 == '\x01') || (cVar5 == '\x06')) {
          iVar6 = (**(code **)(*piVar4 + 0xec))();
          if (iVar6 != 0) {
            piVar7 = (int *)(**(code **)(*piVar4 + 0xec))();
            iVar6 = (**(code **)(*piVar7 + 0x9c))();
            iVar8 = (**(code **)(*(int *)(iVar2 + 0x1b4) + 0x9c))();
            if (((iVar8 == -1) || (iVar6 == -1)) || ((&DAT_003ffd80)[iVar8 * 10 + iVar6] == '\0')) {
LAB_000ae790:
              FUN_000ae7c0(piVar4,iVar2);
            }
            else if ((*(byte *)(unaff_EBX + 0x2c) & 4) == 0) {
              cVar5 = FUN_000ae470(unaff_EBX,iVar2,piVar4);
              if (cVar5 != '\0') goto LAB_000ae790;
            }
            else {
              if (*(int *)(piVar4[3] + 4) == 3) {
                cVar5 = FUN_00126ba0();
                if (cVar5 == '\0') goto LAB_000ae790;
                iVar6 = FUN_0014d2e0();
                if (iVar6 == 0) goto LAB_000ae799;
                iVar6 = FUN_0014d2e0();
                fVar1 = *(float *)(iVar6 + 0x218);
              }
              else {
                pfVar9 = (float *)(**(code **)(*piVar4 + 0x54))();
                fVar1 = pfVar9[2] * pfVar9[2] + pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9;
              }
              if (0.0 < fVar1) goto LAB_000ae790;
            }
          }
        }
        else if ((((cVar5 == '\x02') || (cVar5 == '\x03')) || (cVar5 == '\a')) &&
                (FUN_000aece0(iVar2), *(char *)((int)piVar4 + 0x7a) == '\x02')) {
          iVar6 = (**(code **)(*piVar4 + 0x40))();
          FUN_00052db0(iVar6 + 0x24);
        }
      }
LAB_000ae799:
      local_4 = (int *)*local_4;
    } while (local_4 != (int *)*(int *)(*(int *)(iVar2 + 8) + 0xec));
  }
  return;
}

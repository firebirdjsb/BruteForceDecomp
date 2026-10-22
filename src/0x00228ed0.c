/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32D78807D1705B5693ABA002EED05F5613A7F802FBA8C3DC6DD2BE0A29A850DF
 * Entry: 0x00228ed0, Ghidra index: 7662, label: FUN_00228ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_00228ed0(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *unaff_ESI;
  int iVar7;
  undefined4 *puVar8;
  int local_4;
  
  iVar7 = in_EAX >> 2;
  unaff_ESI[1] = in_EAX - iVar7;
  iVar6 = 0;
  *unaff_ESI = param_1;
  unaff_ESI[2] = iVar7;
  unaff_ESI[0xb] = param_2;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  piVar2 = (int *)thunk_FUN_002ea01d(iVar7 * 0xc + 4);
  if (piVar2 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar2 + 1;
    *piVar2 = iVar7;
    FUN_0001fe40(piVar4,0xc,iVar7,&LAB_00228e90);
  }
  iVar7 = unaff_ESI[1];
  unaff_ESI[9] = piVar4;
  piVar2 = (int *)thunk_FUN_002ea01d(iVar7 * 0xc + 4);
  if (piVar2 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar2 + 1;
    *piVar2 = iVar7;
    FUN_0001fe40(piVar4,0xc,iVar7,&LAB_00228e90);
  }
  unaff_ESI[10] = piVar4;
  param_3[4] = param_3[4] + 1;
  unaff_ESI[0xc] = param_3;
  param_2 = 0;
  if (0 < (int)unaff_ESI[2]) {
    do {
      piVar2 = (int *)(**(code **)(*param_3 + 8))(param_1);
      if (piVar2 != (int *)0x0) {
        FUN_000da880(param_1,piVar2,1);
        FUN_000da8f0(param_1);
      }
      piVar2[0x46] = 0;
      piVar2[0x47] = (int)piVar2;
      (**(code **)(*piVar2 + 0xa0))();
      piVar4 = *(int **)(unaff_ESI[9] + 4 + iVar6);
      puVar8 = (undefined4 *)(unaff_ESI[9] + iVar6);
      if (piVar4 != piVar2) {
        if (piVar4 != (int *)0x0) {
          FUN_0008f6e0();
        }
        puVar8[1] = piVar2;
        if (((uint)piVar2 & 1) == 0) {
          uVar5 = (int)piVar2 * 0x19660d + 0x3c6ef35fU >> 0x15;
          *puVar8 = *(undefined4 *)(&DAT_00414da0 + uVar5 * 4);
          *(undefined4 **)(&DAT_00414da0 + uVar5 * 4) = puVar8;
        }
      }
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 0xc;
    } while (param_2 < (int)unaff_ESI[2]);
  }
  param_2 = 0;
  if (0 < (int)unaff_ESI[1]) {
    local_4 = 0;
    do {
      piVar2 = (int *)(**(code **)(*param_3 + 8))(param_1);
      if (piVar2 != (int *)0x0) {
        FUN_000da880(param_1,piVar2,1);
        FUN_000da8f0(param_1);
      }
      piVar2[0x46] = 7;
      piVar2[0x47] = 0;
      (**(code **)(*piVar2 + 0xa0))();
      piVar4 = *(int **)(unaff_ESI[10] + 4 + local_4);
      piVar3 = (int *)(unaff_ESI[10] + local_4);
      if (piVar4 != piVar2) {
        if ((piVar4 != (int *)0x0) && (((uint)piVar4 & 1) == 0)) {
          piVar3[1] = 0;
          iVar6 = *(int *)(&DAT_00414da0 + ((int)piVar4 * 0x19660d + 0x3c6ef35fU >> 0x15) * 4);
          piVar4 = (int *)(&DAT_00414da0 + ((int)piVar4 * 0x19660d + 0x3c6ef35fU >> 0x15) * 4);
          while (iVar6 != 0) {
            piVar1 = (int *)*piVar4;
            if (piVar1 == piVar3) {
              *piVar4 = *(int *)*piVar4;
              break;
            }
            piVar4 = piVar1;
            iVar6 = *piVar1;
          }
        }
        piVar3[1] = (int)piVar2;
        if (((uint)piVar2 & 1) == 0) {
          uVar5 = (int)piVar2 * 0x19660d + 0x3c6ef35fU >> 0x15;
          *piVar3 = *(int *)(&DAT_00414da0 + uVar5 * 4);
          *(int **)(&DAT_00414da0 + uVar5 * 4) = piVar3;
        }
      }
      param_2 = param_2 + 1;
      local_4 = local_4 + 0xc;
    } while (param_2 < (int)unaff_ESI[1]);
  }
  return;
}

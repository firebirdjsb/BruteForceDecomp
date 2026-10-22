/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89EDE44B866868A6C03B41B0288562363AD536D6A5A48B0ED7DA9AB925C3E8CD
 * Entry: 0x0007ba50, Ghidra index: 1470, label: FUN_0007ba50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dcc8;
extern uint32_t *DAT_004432f8;
extern uint32_t DAT_004698bc;
extern uint32_t *DAT_00469908;
extern uint32_t DAT_00469924;
extern uint32_t DAT_00469974;
extern uint32_t DAT_00469b58;
extern uint32_t _DAT_00000000;
/* WARNING: Removing unreachable block (ram,0x0007bc00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0007ba50(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int in_EAX;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int *****pppppiVar8;
  undefined4 unaff_ESI;
  int ****ppppiStack_3c;
  undefined1 uVar9;
  int ****ppppiStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  int ****local_18 [3];
  uint uStack_c;
  undefined4 local_8;
  uint local_4;
  
  uVar9 = (undefined1)((uint)unaff_ESI >> 0x18);
  ppppiStack_2c = (int ****)(uint)(uint3)ppppiStack_2c;
  if (*(int *)(in_EAX + 0x64c) == 0) {
    return 0;
  }
  local_4 = 0xf;
  local_8 = 0;
  local_18[0] = (int ****)((uint)local_18[0] & 0xffffff00);
  pcVar1 = &DAT_0040dcc8;
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ppppiStack_3c = (int ****)(pcVar5 + -0x40dcc8);
  FUN_0001fed0(&DAT_0040dcc8);
  ppppiStack_3c = (int ****)0x0;
  FUN_000784c0();
  ppppiStack_3c = local_18[0];
  if (local_4 < 0x10) {
    ppppiStack_3c = (int ****)local_18;
  }
  cVar4 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8);
  if (cVar4 != '\0') {
    ppppiStack_2c = (int ****)0x0;
    iVar6 = FUN_00076f10(&ppppiStack_2c,*(int *)(in_EAX + 0x64c) + 0x10,
                         *(undefined4 *)(*(int *)(in_EAX + 0x64c) + 0x28));
    uVar2 = DAT_004698bc;
    uVar3 = DAT_00469924;
    if (-1 < iVar6) {
      piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      auStack_28[0] = 0x7246856;
      (**(code **)(*piVar7 + 8))(auStack_28,0x3f000000,0);
      if ((int *****)ppppiStack_3c != (int *****)0x0) {
        (*(code *)(*ppppiStack_3c)[2])(ppppiStack_3c);
        ppppiStack_3c = (int ****)0x0;
      }
      pppppiVar8 = (int *****)ppppiStack_2c;
      if (local_18[0] < (int *****)0x10) {
        pppppiVar8 = &ppppiStack_2c;
      }
      iVar6 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,pppppiVar8,0x40000001,&ppppiStack_3c);
      uVar3 = DAT_00469924;
      uVar2 = DAT_004698bc;
      if (-1 < iVar6) {
        if (DAT_00469974 != '\0') {
          DAT_00469924 = 1;
          DAT_004698bc = 7;
          (**(code **)(_DAT_00000000 + 0x38))(0,7);
        }
        iVar6 = FUN_00076f80();
        if (-1 < iVar6) {
          FUN_00079060();
          FUN_00079310();
          uVar9 = 1;
        }
      }
    }
    DAT_00469924 = uVar3;
    DAT_004698bc = uVar2;
    if ((int *****)ppppiStack_2c != (int *****)0x0) {
      (*(code *)(*ppppiStack_2c)[2])(ppppiStack_2c);
    }
  }
  if (uStack_c < 0x10) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uStack_20);
}

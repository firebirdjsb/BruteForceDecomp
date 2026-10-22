/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B0A88773BA612C9381E921DF35140F622332B48BB5B091FCEB97898166CD540
 * Entry: 0x002b28e0, Ghidra index: 9748, label: FUN_002b28e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004027a8;
extern uint32_t DAT_004027ac;
extern uint32_t _DAT_00000000;
extern char s_23_23_IFxAppearance_00402ddc[];
/* WARNING: Removing unreachable block (ram,0x002b2a4b) */
/* WARNING: Removing unreachable block (ram,0x002b2a82) */
/* WARNING: Removing unreachable block (ram,0x002b2a5d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002b28e0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  int *unaff_EDI;
  int **ppiVar5;
  int *piStack_48;
  int **ppiStack_44;
  int iStack_30;
  int *piStack_2c;
  int *local_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_14;
  int *piStack_c;
  undefined4 *puStack_8;
  int *piStack_4;
  
  ppiStack_44 = &local_28;
  *param_2 = 0;
  piStack_48 = param_1;
  (**(code **)(*param_1 + 0x74))();
  if (DAT_004027a8 != 0) {
    piVar2 = &DAT_004027a8;
    puVar4 = &DAT_004027ac;
    do {
      if (iStack_30 == *piVar2) {
        local_28 = (int *)0x8;
        piStack_24 = (int *)0x111035aa;
        iVar3 = FUN_00238080(s_23_23_IFxAppearance_00402ddc,&stack0xffffffcc);
        if (iVar3 < 0) {
          return iVar3;
        }
        piStack_4 = (int *)0x0;
        piStack_14 = (int *)0x0;
        piStack_1c = param_1;
        iVar3 = (**(code **)(_DAT_00000000 + 0x84))(0,&stack0xffffffc8);
        if (iVar3 < 0) {
LAB_002b2ad2:
          if (piStack_c != (int *)0x0) {
            (**(code **)(*piStack_c + 8))(piStack_c);
            piStack_c = (int *)0x0;
          }
          if (unaff_EDI != (int *)0x0) {
            (**(code **)(*unaff_EDI + 8))(unaff_EDI);
          }
          if (unaff_ESI != (int *)0x0) {
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
          }
          return iVar3;
        }
        if (piStack_c != (int *)0x0) {
          (**(code **)(*piStack_c + 8))(piStack_c);
          piStack_c = (int *)0x0;
        }
        ppiVar5 = &piStack_c;
        iVar3 = (**(code **)(*piStack_24 + 0x84))(piStack_24);
        if (iVar3 < 0) {
          if (piStack_14 != (int *)0x0) {
            (**(code **)(*piStack_14 + 8))(piStack_14);
            piStack_14 = (int *)0x0;
          }
          if (piStack_48 != (int *)0x0) {
            (**(code **)(*piStack_48 + 8))(piStack_48);
            piStack_48 = (int *)0x0;
          }
          if (ppiStack_44 != (int **)0x0) {
            (*(code *)(*ppiStack_44)[2])(ppiStack_44);
          }
          return iVar3;
        }
        local_28 = piStack_14;
        piStack_20 = piStack_48;
        iStack_30 = 0;
        (**(code **)(*piStack_48 + 0x28))(piStack_48,0xe3542300,puVar4[1]);
        (*(code *)(*ppiVar5)[10])(ppiVar5,0x17d45550,*puVar4);
        iVar3 = (**(code **)(*piStack_2c + 0x68))(piStack_2c,puVar4[2],&piStack_48);
        if (iVar3 < 0) goto LAB_002b2ad2;
        if (local_28 != (int *)0x0) {
          (**(code **)(*piStack_c + 0x10))(piStack_c,&stack0xffffffcc);
        }
        *puStack_8 = unaff_ESI;
        (**(code **)(*unaff_ESI + 4))(unaff_ESI);
        if (piStack_4 != (int *)0x0) {
          (**(code **)(*piStack_4 + 8))(piStack_4);
          piStack_4 = (int *)0x0;
        }
      }
      piVar1 = puVar4 + 3;
      piVar2 = puVar4 + 3;
      puVar4 = puVar4 + 4;
    } while (*piVar1 != 0);
  }
  return 0;
}

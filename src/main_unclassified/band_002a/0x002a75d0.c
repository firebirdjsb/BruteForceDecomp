/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F51E4A7788CBA1D5040A9EBD0E1E9F47A77F7B2DAD17D081E2FE0DBE4BCB7A44
 * Entry: 0x002a75d0, Ghidra index: 9596, label: FUN_002a75d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00402b7c;
extern uint32_t DAT_00443648;
extern uint32_t _DAT_00000000;
extern char s_23_23_IFxAppearance_00402ddc[];
extern char s_23_23_IFxNode_00402b90[];
/* WARNING: Removing unreachable block (ram,0x002a7701) */
/* WARNING: Removing unreachable block (ram,0x002a7875) */
/* WARNING: Removing unreachable block (ram,0x002a7792) */
/* WARNING: Removing unreachable block (ram,0x002a779a) */
/* WARNING: Removing unreachable block (ram,0x002a77a4) */
/* WARNING: Removing unreachable block (ram,0x002a77ba) */
/* WARNING: Removing unreachable block (ram,0x002a77be) */
/* WARNING: Removing unreachable block (ram,0x002a77c4) */
/* WARNING: Removing unreachable block (ram,0x002a77d2) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x002a77e0 */
/* WARNING: Removing unreachable block (ram,0x002a77e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_002a75d0(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  float unaff_EBX;
  undefined4 *puStack_17c;
  int *piStack_16c;
  uint uStack_168;
  int *piStack_164;
  int *piStack_160;
  int *piStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iVar6;
  int iStack_144;
  int iStack_134;
  char cStack_130;
  char acStack_12f [7];
  int local_128 [55];
  int *piStack_4c;
  
  uStack_154 = 0;
  uStack_158 = 4;
  piStack_15c = local_128;
  piStack_160 = param_2;
  piStack_164 = (int *)0x2a75f3;
  (**(code **)(*param_2 + 0x10))();
  piStack_164 = (int *)0x0;
  uStack_168 = 4;
  piStack_16c = &iStack_134;
  (**(code **)(*param_2 + 0x10))();
  iVar6 = 0;
  if (iStack_144 < 1) {
    return 0;
  }
  while( true ) {
    if (1.2 <= unaff_EBX) {
      puStack_17c = (undefined4 *)0x4;
      (**(code **)(*param_2 + 0x10))();
    }
    else {
      puStack_17c = (undefined4 *)0x2;
      (**(code **)(*param_2 + 0x10))();
      if ((short)uStack_168 == 0) {
        cStack_130 = '\0';
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2,&cStack_130,uStack_168 & 0xffff,0);
        if ((uStack_168 & 1) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2,&stack0xfffffeb4,1,0);
        }
      }
      pcVar5 = &cStack_130;
      cVar2 = cStack_130;
      while (cVar2 != '\0') {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar1;
      }
    }
    DAT_00443648 = 1;
    piStack_16c = (int *)0x0;
    iVar4 = FUN_00238080(&DAT_00402b7c,&piStack_16c);
    if ((iVar4 < 0) ||
       (iVar4 = (**(code **)*piStack_16c)(piStack_16c,s_23_23_IFxNode_00402b90,&stack0xfffffe8c),
       iVar4 < 0)) break;
    (**(code **)(_DAT_00000000 + 0x84))(0);
    piVar3 = piStack_160;
    FUN_002a7510();
    pcVar5 = s_23_23_IFxAppearance_00402ddc;
    piStack_16c = (int *)0x0;
    iVar4 = (**(code **)*puStack_17c)(puStack_17c,s_23_23_IFxAppearance_00402ddc,&piStack_16c);
    if (-1 < iVar4) {
      FUN_002b28e0(0,&stack0xfffffe8c);
    }
    (**(code **)(*param_2 + 0x48))(param_2,0xefa8ce01,&piStack_15c);
    (**(code **)(*piStack_4c + 0x14))(piStack_4c,uStack_168,pcVar5,0);
    if (piStack_160 != (int *)0x0) {
      (**(code **)(*piStack_160 + 8))();
      piStack_160 = (int *)0x0;
    }
    if (piStack_164 != (int *)0x0) {
      (**(code **)(*piStack_164 + 8))();
      piStack_164 = (int *)0x0;
    }
    if (piStack_15c != (int *)0x0) {
      (**(code **)(*piStack_15c + 8))();
      piStack_15c = (int *)0x0;
    }
    iVar6 = iVar6 + 1;
    if ((int)piVar3 <= iVar6) {
      return 0;
    }
  }
  if (piStack_16c != (int *)0x0) {
    (**(code **)(*piStack_16c + 8))(piStack_16c);
  }
  return 0x80004005;
}

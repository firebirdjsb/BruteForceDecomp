/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80CD001325456561471D31B51FA2168A9F44756683D84FA98579D3E81CF39878
 * Entry: 0x00080790, Ghidra index: 1514, label: FUN_00080790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0658;
extern uint32_t DAT_0040dd4c;
extern uint32_t *DAT_00469908;
extern char s_campaign_0040dd68[];
extern char s_package_name_dat_0040dd28[];
undefined1 FUN_00080790(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 ****ppppuVar6;
  undefined4 unaff_EBX;
  undefined1 uVar7;
  int *piStack_940;
  int *piStack_93c;
  undefined4 uStack_938;
  undefined1 auStack_934 [4];
  undefined4 ***apppuStack_930 [4];
  undefined4 uStack_920;
  uint uStack_91c;
  undefined1 auStack_918 [260];
  undefined1 auStack_814 [260];
  undefined1 auStack_710 [260];
  undefined1 auStack_60c [520];
  undefined1 auStack_404 [1028];
  
  uVar7 = (undefined1)((uint)unaff_EBX >> 0x18);
  piStack_940 = (int *)(uint)(uint3)piStack_940;
  iVar2 = (**(code **)(*param_1 + 0x1b4))(param_2);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      iVar3 = (**(code **)(*param_1 + 0x1a4))(*(int *)(iVar2 + 4));
      if (iVar3 == 0) {
        iVar3 = FUN_0007f4b0(param_1,iVar2 + 8,1,1,0x104);
        if (iVar3 == 0) {
          FUN_002eaa86(auStack_710,&DAT_0040dd4c,auStack_814,s_package_name_dat_0040dd28);
          iVar3 = FUN_002f2b3f(auStack_710,0x80000000,0,0,3,0,0);
          if (iVar3 != -1) {
            XAPILIB__ReadFile(iVar3,auStack_934,0x14,&piStack_93c,0);
            XAPILIB__ReadFile(iVar3,auStack_60c,0x208,&piStack_93c,0);
            piStack_940 = (int *)0xec654c2f;
            uVar4 = FUN_001e97c0(iVar2 + 8,auStack_60c);
            FUN_002ea9a9(auStack_404,0x200,uVar4);
            uStack_938 = 0;
            iVar2 = *(int *)param_1[0x171];
            piStack_940 = (int *)0xcc05846;
            uVar4 = FUN_001e97c0(auStack_404,0,DAT_003c0658,0);
            (**(code **)(iVar2 + 0x34))(&uStack_938,uVar4);
            XAPILIB__CloseHandle(iVar3);
          }
        }
        return 0;
      }
    }
    param_1[0x172] = *(int *)(iVar2 + 4);
    iVar2 = FUN_0007f4b0(param_1,iVar2 + 8,1,1,0x104);
    if (iVar2 == 0) {
      piStack_940 = (int *)0x0;
      piStack_93c = (int *)0x0;
      FUN_0001fe90(auStack_918);
      pcVar5 = s_campaign_0040dd68;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00087af0();
      FUN_000784c0(0);
      cVar1 = FUN_00078280(param_1[param_1[0x172] + 0x173],&piStack_93c);
      if (cVar1 != '\0') {
        FUN_00078230();
        if (piStack_940 != (int *)0x0) {
          (**(code **)(*piStack_940 + 8))(piStack_940);
          piStack_940 = (int *)0x0;
        }
        ppppuVar6 = (undefined4 ****)apppuStack_930[0];
        if (uStack_91c < 0x10) {
          ppppuVar6 = apppuStack_930;
        }
        iVar2 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,ppppuVar6,0x80000000,&piStack_940);
        if (-1 < iVar2) {
          iVar2 = FUN_00076a80();
          if (-1 < iVar2) {
            param_1[0x163] = *param_1;
            FUN_00078f90();
            uVar7 = 1;
          }
        }
      }
      if (0xf < uStack_91c) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(apppuStack_930[0]);
      }
      uStack_91c = 0xf;
      uStack_920 = 0;
      apppuStack_930[0] = (undefined4 ***)((uint)apppuStack_930[0] & 0xffffff00);
      if (piStack_93c != (int *)0x0) {
        (**(code **)(*piStack_93c + 8))(piStack_93c);
      }
      if (piStack_940 != (int *)0x0) {
        (**(code **)(*piStack_940 + 8))(piStack_940);
      }
    }
  }
  return uVar7;
}

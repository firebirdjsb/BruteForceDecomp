/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03754BC37FC1B8711A1C4F67C1A8AC902FC4CADD3417514EC2614F77A2F23471
 * Entry: 0x0003b750, Ghidra index: 419, label: FUN_0003b750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_0030dec0(void).  Xbox callback/register ABI remains
 * ABI_UNVERIFIED; this forward declaration is for C11 source inspection only. */
extern uint32_t FUN_0001ba10(uint32_t unaff_ESI);
extern void FUN_0003bad0(void);
extern void FUN_00048360(int param_1,int param_2);
extern undefined4 FUN_00022f70(void);
extern void FUN_00055d30(undefined4 param_1);
extern void FUN_001611d0(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern void FUN_0001fe80(void);
extern int FUN_00054bc0(void);
extern int FUN_00054c40(int param_1,uint param_2,undefined4 param_3,int param_4);
extern undefined4 FUN_0003aa10(int param_1,undefined1 *param_2);
extern void FUN_00022dc0(void);
extern void FUN_00048da0(int param_1,int param_2);
extern undefined4 FUN_00055aa0(void);
extern void FUN_000122d0(uint32_t param_1, uint32_t* in_EAX);
extern void FUN_0004dff0(void);
extern void FUN_00016150(int in_EAX);

extern void FUN_0030dec0(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc930;
extern uint32_t DAT_004a8948;
extern uint32_t DAT_004a8cc0;
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_FUN_003a4f68;
undefined1 FUN_0003b750(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 local_111;
  int local_110;
  undefined1 uStack_105;
  undefined1 local_104 [4];
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int iStack_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 auStack_e4 [4];
  undefined **appuStack_e0 [5];
  int iStack_cc;
  undefined **ppuStack_c4;
  int iStack_b8;
  int iStack_a4;
  int iStack_88;
  undefined4 uStack_84;
  
  local_111 = 1;
  piVar4 = (int *)FUN_0001ba10();
  iVar10 = *piVar4;
  if ((DAT_004a8cc0 & 1) == 0) {
    DAT_004a8cc0 = DAT_004a8cc0 | 1;
    FUN_0003bad0();
    _atexit(FUN_0030dec0);
  }
  FUN_00048360(&DAT_004a8948,in_EAX);
  local_110 = 0;
  FUN_00022f70();
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  if (DAT_003bc930 != '\x01') {
    return 1;
  }
  do {
    FUN_00055d30(param_1);
    iVar6 = *(int *)(param_1 + 0x5c);
    *(int *)(in_EAX + 0x44) = iVar6;
    if (((iVar6 == 0) || (iVar6 < 0)) || (0x86 < iVar6)) {
LAB_0003b83a:
      local_110 = local_110 + 1;
      FUN_001611d0();
      if (*(int *)(in_EAX + 0x42c) != 0) {
        uVar7 = *(int *)(in_EAX + 0x42c) + -1 + *(int *)(in_EAX + 0x428);
        if (*(uint *)(in_EAX + 0x424) <= uVar7) {
          uVar7 = uVar7 - *(uint *)(in_EAX + 0x424);
        }
        puVar5 = *(undefined4 **)(*(int *)(in_EAX + 0x420) + uVar7 * 4);
        if (puVar5[0x16] != 0) {
          FUN_0008f6e0();
        }
        puVar5[7] = &PTR_FUN_003a4f64;
        FUN_00012080();
        FUN_00012080();
        *puVar5 = &PTR_FUN_003a4f68;
        FUN_0001fe80();
        piVar4 = (int *)(in_EAX + 0x42c);
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          *(undefined4 *)(in_EAX + 0x428) = 0;
        }
      }
      iVar6 = FUN_00054bc0();
      if (local_110 < iVar6) {
        iVar6 = *(int *)(in_EAX + 0x58);
        iVar1 = *(int *)(in_EAX + 0x3f8);
        iVar2 = *(int *)(iVar1 + 4 + iVar6 * 0xc);
        iStack_f4 = -1;
        piVar4 = (int *)FUN_00023010(auStack_e4,*(undefined4 *)(iVar10 + 4));
        iVar8 = iStack_f4;
        if (*piVar4 != *(int *)(iVar2 + 0xc)) {
          iVar8 = *piVar4 - *(int *)(iVar2 + 8) >> 2;
        }
        uVar9 = FUN_00054c40(iVar1 + iVar6 * 0xc,iVar8,iVar10,local_104);
        *(undefined4 *)(param_1 + 0x5c) = uVar9;
        cVar3 = FUN_0003aa10(iVar10,&uStack_105);
        if (cVar3 == '\0') {
          if (*(int *)(in_EAX + 0x42c) == 0) {
            FUN_00022dc0();
            uStack_84 = 1;
            FUN_00055d30(appuStack_e0);
            if (iStack_88 != 0) {
              FUN_0008f6e0();
            }
            ppuStack_c4 = &PTR_FUN_003a4f64;
            if (iStack_a4 != 0) {
              FUN_0008f6e0();
            }
            if (iStack_b8 != 0) {
              FUN_0008f6e0();
            }
            appuStack_e0[0] = &PTR_FUN_003a4f68;
            if (iStack_cc != 0) {
              FUN_0008f6e0();
            }
          }
          iStack_f4 = *(int *)(in_EAX + 0x428) + *(int *)(in_EAX + 0x42c);
          uVar7 = iStack_f4 - 1;
          if (*(uint *)(in_EAX + 0x424) <= uVar7) {
            uVar7 = uVar7 - *(uint *)(in_EAX + 0x424);
          }
          *(undefined4 *)(in_EAX + 0x44) =
               *(undefined4 *)(*(int *)(*(int *)(in_EAX + 0x420) + uVar7 * 4) + 0x5c);
          goto LAB_0003b9de;
        }
        FUN_00048da0(&DAT_004a8948,in_EAX);
        iVar10 = FUN_00055aa0();
        *(undefined4 *)(in_EAX + 0x44) = *(undefined4 *)(iVar10 + 0x5c);
      }
      else {
        if ((*(int *)(in_EAX + 0x40c) != 0) &&
           (*(int *)(in_EAX + 0x410) - *(int *)(in_EAX + 0x40c) >> 2 == 1)) {
          FUN_0001ba10();
          FUN_000122d0(3);
          FUN_0004dff0(in_EAX);
          FUN_0001ba10();
          FUN_00055aa0();
          FUN_00012440();
        }
        FUN_00016150();
        FUN_0001ba10();
        FUN_00048da0(&DAT_004a8948,in_EAX);
        iVar10 = FUN_00055aa0();
        *(undefined4 *)(in_EAX + 0x44) = *(undefined4 *)(iVar10 + 0x5c);
      }
      local_111 = 0;
      break;
    }
    local_ec = *(undefined4 *)(iVar6 * 0x40 + 8 + *(int *)(in_EAX + 0x4c));
    puVar5 = (undefined4 *)(iVar6 * 0x40 + *(int *)(in_EAX + 0x4c));
    local_e8 = puVar5[3];
    iVar6 = (*(code *)*puVar5)();
    if (iVar6 == 1) break;
    if (iVar6 == 0) goto LAB_0003b83a;
LAB_0003b9de:
  } while (DAT_003bc930 == '\x01');
  if (local_100 == 0) {
    return local_111;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_100);
}

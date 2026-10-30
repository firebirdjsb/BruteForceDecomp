/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 989D3DBC987CD5909234185CCA8327FA666AD37D2E3FADFD107F837CE12752FD
 * Entry: 0x0004a860, Ghidra index: 599, label: FUN_0004a860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00055a60(void);
extern undefined4 FUN_00055aa0(void);
extern int FUN_0004a780(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern uint FUN_00034b20(int *param_1,float *param_2,float param_3);
extern void FUN_00023ca0(void);
extern void FUN_00012250(uint32_t in_EAX, int32_t in_ECX);
extern char FUN_000395d0(int param_1);
extern void FUN_0004dff0(void);
extern int32_t FUN_000125b0(int32_t in_EAX);
extern undefined4 FUN_00022fc0(void);
extern void FUN_00055b10(void);
extern void FUN_000121f0(uint32_t* in_ECX);
extern int FUN_000388b0(int param_1);
extern undefined1 FUN_00039880(int param_1);
extern void FUN_0004b5f0(void);
extern void FUN_0004ad70(undefined4 param_1);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern void FUN_00056e20(void);
extern undefined1 FUN_000571e0(undefined4 *param_1);
extern void FUN_00057730(undefined4 param_1);

extern uint32_t DAT_004a5908;
extern uint32_t PTR_FUN_003a4f64;
int * FUN_0004a860(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte bStack_44;
  
  local_88 = (int *)0x0;
  if (*(int *)(param_1 + 0x42c) == 0) {
    FUN_00055a60(param_1 + 0x41c);
  }
  local_80 = *(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c);
  uVar3 = local_80 - 1;
  if (*(uint *)(param_1 + 0x424) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(param_1 + 0x424);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x420) + uVar3 * 4);
  if ((*(uint *)(iVar4 + 0x88) >> 0xd & 1) == 0) {
    iVar4 = FUN_00055aa0();
    if ((((*(uint *)(iVar4 + 0x88) & 0x6000) == 0) &&
        ((*(byte *)(&DAT_004a5908 + *(int *)(iVar4 + 0x5c)) & 0x20) == 0)) &&
       (local_88 = (int *)FUN_0004a780(), local_88 != (int *)0x0)) {
      iVar4 = FUN_000120f0();
      cVar2 = (**(code **)(**(int **)(iVar4 + 0x5a4) + 0x10c))();
      if (cVar2 != '\0') {
        iVar6 = (**(code **)(*local_88 + 0x40))();
        cVar2 = FUN_00034b20(iVar4,iVar6 + 0x24,0x41a00000);
        if (cVar2 == '\0') {
          FUN_00023ca0();
        }
      }
      bStack_44 = bStack_44 & 0xfe;
      uStack_6c = 0;
      uStack_58 = 0;
      ppuStack_78 = &PTR_FUN_003a4f64;
      uStack_60 = 0;
      uStack_64 = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_54 = 0;
      uStack_74 = 4;
      FUN_00012250();
      local_84 = *(int *)(param_1 + 0x410);
      piVar5 = (int *)FUN_000161b0();
      if (*piVar5 == local_84) {
        FUN_000395d0(4);
        FUN_00012320(4);
        FUN_0004dff0(param_1);
        FUN_00055aa0();
        iVar4 = FUN_000125b0();
        if ((iVar4 != 0) && (*(int *)(iVar4 + 4) == 4)) {
          FUN_00055aa0();
          FUN_00022fc0();
          FUN_00055b10();
        }
        FUN_000395d0(7);
        FUN_000395d0(0x21);
        FUN_00012440();
      }
      FUN_000121f0();
    }
  }
  else {
    local_88 = *(int **)(iVar4 + 0x58);
    if (local_88 == (int *)0x0) {
      piVar5 = (int *)FUN_0004a780();
      return piVar5;
    }
    if ((*(byte *)(&DAT_004a5908 + *(int *)(param_1 + 0x44)) & 2) != 0) {
      if ((*(byte *)((int)local_88 + 0x26) & 8) == 0) {
        FUN_00055b10();
        return local_88;
      }
      iVar4 = FUN_000388b0(*(undefined4 *)(param_1 + 0x358));
      if ((iVar4 == 0) && (piVar5 = (int *)FUN_000120f0(), local_88 != piVar5)) {
        FUN_00039880(6);
        FUN_0004b5f0();
        FUN_0004ad70(&local_80);
        if (local_7c != 0) {
          FUN_0008f6e0();
        }
        iVar4 = FUN_000120f0();
        uVar1 = *(undefined4 *)(*(int *)(iVar4 + 8) + 0x1f8);
        FUN_00056e20();
        local_84 = 0;
        cVar2 = FUN_000571e0(&local_84);
        if (cVar2 != '\0') {
          FUN_00057730(uVar1);
          return local_88;
        }
      }
    }
  }
  return local_88;
}

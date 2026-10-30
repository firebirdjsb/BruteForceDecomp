/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EBAEB2EFD90760F5D648DCCEF44A16B4FFB1E1D6C3FF3BCFF8CDAFFEE833B8A
 * Entry: 0x00056530, Ghidra index: 831, label: FUN_00056530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3f84;
void FUN_00056530(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auStack_154 [4];
  undefined4 uStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined4 uStack_130;
  undefined1 auStack_12c [12];
  undefined1 auStack_120 [12];
  undefined **appuStack_114 [65];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  piVar3 = (int *)FUN_000120f0();
  if (*(int *)(param_2 + 0x3c8) == 0) {
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x54))();
    fVar1 = *pfVar4 * *pfVar4 + pfVar4[2] * pfVar4[2];
    if (fVar1 < 1.4210855e-14 == (fVar1 == 1.4210855e-14)) {
      rsqrtss(in_XMM0,fVar1);
      fVar1 = *(float *)(param_1 + 0x38) * 0.017453292;
      FUN_0004bef0(fVar1);
      FUN_0004bef0(-fVar1);
      uStack_150 = 0;
      iStack_14c = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_144 = 0xffffffff;
      uStack_138 = 0;
      uStack_13c = 0x7f7fffff;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_10 = 0;
      uStack_8 = 0;
      appuStack_114[0] = &PTR_LAB_003a3f84;
      uStack_c = 0x600080;
      FUN_0011dfa0();
      cVar2 = FUN_0004bbd0(auStack_12c,0x3f19999a,*(undefined4 *)(param_1 + 0x3c),auStack_154,
                           appuStack_114);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iStack_14c + -4);
      }
      FUN_000563b0(uVar5);
      uVar5 = FUN_000563f0();
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      cVar2 = FUN_0004bbd0(auStack_120,0x3f19999a,*(undefined4 *)(param_1 + 0x3c),auStack_154,
                           appuStack_114);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iStack_14c + -4);
      }
      FUN_000563b0(uVar5);
      uVar5 = FUN_000563f0();
      *(undefined4 *)(param_1 + 0x34) = uVar5;
      FUN_0001bc90();
      return;
    }
  }
  return;
}

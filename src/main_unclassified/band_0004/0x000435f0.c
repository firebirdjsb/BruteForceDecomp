/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05E19F342177E62806D7AAF95B246C2731CDA5DD93D04CB18C45743D336F0FA5
 * Entry: 0x000435f0, Ghidra index: 524, label: FUN_000435f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f64;
undefined4 FUN_000435f0(int param_1,int *param_2)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [6];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte bStack_44;
  
  piVar3 = (int *)FUN_000120f0();
  iVar4 = (**(code **)(*piVar3 + 0x40))();
  iVar5 = (**(code **)(*param_2 + 0x40))();
  fStack_88 = *(float *)(iVar5 + 0x2c) - *(float *)(iVar4 + 0x2c);
  fStack_8c = *(float *)(iVar5 + 0x28) - *(float *)(iVar4 + 0x28);
  fVar1 = *(float *)(iVar5 + 0x24) - *(float *)(iVar4 + 0x24);
  fStack_80 = fStack_8c;
  fStack_7c = fStack_88;
  if (2500.0 <= fVar1 * fVar1 + fStack_8c * fStack_8c + fStack_88 * fStack_88) {
    if ((*(uint *)(param_1 + 0x3c4) & 0x100) == 0) {
      cVar2 = FUN_000572a0(&fStack_8c,piVar3);
      if ((cVar2 != '\0') && (fStack_8c._0_1_ != '\0')) {
        cVar2 = *(char *)(*(int *)(param_1 + 0x794) + 0xd);
        if (cVar2 == '\0') {
          *(undefined4 *)(*(int *)(param_1 + 0x794) + 0x14) = 0;
        }
        else if (cVar2 != '\0') {
          FUN_00055390();
          return 1;
        }
      }
    }
  }
  else {
    iVar4 = FUN_000388b0(*(undefined4 *)(param_1 + 0x358));
    if (iVar4 == 0) {
      cVar2 = FUN_000572a0(&fStack_8c,piVar3);
      if ((cVar2 != '\0') && (fStack_8c._0_1_ != '\0')) {
        FUN_00039880(5);
      }
    }
    puVar6 = auStack_70;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    ppuStack_78 = (undefined **)0x0;
    uStack_74 = (uint)uStack_74._2_2_ << 0x10;
    FUN_00043000(param_1,param_2,5);
    if ((char)ppuStack_78 != '\0') {
      FUN_00039880(5);
      return 1;
    }
    if ((char)uStack_74 != '\0') {
      *(byte *)(param_1 + 0x464) = *(byte *)(param_1 + 0x464) | 1;
      bStack_44 = bStack_44 & 0xfe;
      auStack_70[1] = 0;
      uStack_58 = 0;
      ppuStack_78 = &PTR_FUN_003a4f64;
      uStack_74 = 0;
      auStack_70[4] = 0;
      auStack_70[3] = 0;
      auStack_70[2] = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_54 = 0;
      FUN_00012250();
      iVar4 = *(int *)(param_1 + 0x410);
      uStack_74 = 0x5f;
      piVar3 = (int *)FUN_000161b0();
      if (*piVar3 == iVar4) {
        FUN_00012320(0x5f);
        FUN_0004dff0(param_1);
        FUN_00012440();
      }
      FUN_000121f0();
      return 1;
    }
  }
  return 1;
}

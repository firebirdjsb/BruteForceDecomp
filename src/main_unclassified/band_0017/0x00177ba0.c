/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3577379CD79B0EF7F73BB8F6A13509FB3AA82B2CDABD689789D45C9DC4C25FBE
 * Entry: 0x00177ba0, Ghidra index: 4957, label: FUN_00177ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00177ba0(short *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x736) != -1) && ((*(byte *)(param_1 + 1) & 2) != 0)) {
    *(float *)(param_1 + 0x738) =
         param_2 * *(float *)(param_1 + 0x73e) + *(float *)(param_1 + 0x738);
    *(float *)(param_1 + 0x73a) =
         param_2 * *(float *)(param_1 + 0x740) + *(float *)(param_1 + 0x73a);
    *(float *)(param_1 + 0x73c) =
         param_2 * *(float *)(param_1 + 0x742) + *(float *)(param_1 + 0x73c);
    uStack_8 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    local_4 = 0x3f800000;
    local_14 = 0x3f800000;
    local_24 = 0x3f800000;
    FUN_00072010(&local_24,*(undefined4 *)(param_1 + 0x738));
    FUN_000720d0(&local_24,*(undefined4 *)(param_1 + 0x73a));
    FUN_00073d80(&local_24,*(undefined4 *)(param_1 + 0x73c));
    iVar4 = *(int *)(param_1 + 0x736);
    *(undefined4 *)(iVar4 + 0x14) = local_24;
    *(undefined4 *)(iVar4 + 0x18) = uStack_20;
    *(undefined4 *)(iVar4 + 0x1c) = uStack_1c;
    *(undefined4 *)(iVar4 + 0x20) = uStack_18;
    *(undefined4 *)(iVar4 + 0x34) = local_4;
    *(undefined4 *)(iVar4 + 0x24) = local_14;
    *(undefined4 *)(iVar4 + 0x28) = uStack_10;
    *(undefined4 *)(iVar4 + 0x2c) = uStack_c;
    *(undefined4 *)(iVar4 + 0x30) = uStack_8;
  }
  if ((((*(byte *)(param_1 + 1) & 1) != 0) || (*(int *)(param_1 + 0x736) == -1)) &&
     (iVar4 = 0, 0 < *param_1)) {
    iVar6 = 0;
    do {
      iVar5 = 0x40;
      fVar1 = *(float *)(param_1 + iVar4 * 4 + 300);
      fVar2 = *(float *)(param_1 + iVar4 * 4 + 0x12e);
      pfVar3 = (float *)(iVar6 + 0x27c + (int)param_1);
      do {
        iVar5 = iVar5 + -1;
        pfVar3[-1] = param_2 * fVar1 + pfVar3[-1];
        *pfVar3 = param_2 * fVar2 + *pfVar3;
        pfVar3 = pfVar3 + 6;
      } while (iVar5 != 0);
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x600;
    } while (iVar4 < *param_1);
  }
  return;
}

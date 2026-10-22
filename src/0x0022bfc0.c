/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB6EF8B4C35E714FD3864F52BEE112FA34D8A16ADF263D542EC558C4E2D4F9A9
 * Entry: 0x0022bfc0, Ghidra index: 7691, label: FUN_0022bfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t DAT_0046cfd8;
void FUN_0022bfc0(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  int *unaff_EBX;
  float10 fVar7;
  
  pbVar5 = (byte *)FUN_002250b0(*(undefined4 *)(DAT_00469aac + 0x1fc));
  if (pbVar5 != (byte *)0x0) {
    if (*unaff_EBX == 0) {
      fVar7 = (float10)FUN_0022c940();
    }
    else {
      fVar7 = (float10)FUN_00225060();
    }
    *(float *)(pbVar5 + 0x20) = (float)(fVar7 * (float10)param_2);
    if (*(int *)(pbVar5 + 0x48) != unaff_EBX[0xd]) {
      FUN_0008f6a0(unaff_EBX[0xd]);
    }
    if (*(int *)(pbVar5 + 0x6c) != unaff_EBX[0xe]) {
      FUN_0008f6a0(unaff_EBX[0xe]);
    }
    *(int *)(pbVar5 + 0x54) = param_1;
    uVar1 = *(undefined4 *)(param_1 + 0x204);
    *(undefined4 *)(pbVar5 + 0x28) = uVar1;
    bVar4 = *pbVar5 | 1;
    *pbVar5 = bVar4;
    *(undefined4 *)(pbVar5 + 0x30) = uVar1;
    *(undefined4 *)(pbVar5 + 0x24) = *(undefined4 *)(param_1 + 0x1fc);
    *pbVar5 = (*(char *)(param_1 + 0x201) << 4 ^ bVar4) & 0x10 ^ bVar4;
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    uVar6 = DAT_0046cfd8 >> 9;
    pbVar5[0x1c] = 0;
    pbVar5[0x1d] = 0;
    pbVar5[0x1e] = 0;
    pbVar5[0x1f] = 0;
    *(float *)(pbVar5 + 0x2c) = ((float)(uVar6 | 0x3f800000) - 1.0) * 0.2 + 0.05;
    pbVar5[0x18] = 0;
    pbVar5[0x19] = 0;
    pbVar5[0x1a] = 0;
    pbVar5[0x1b] = 0;
    pbVar5[0x14] = 0;
    pbVar5[0x15] = 0;
    pbVar5[0x16] = 0;
    pbVar5[0x17] = 0;
    pbVar5[0x10] = 0;
    pbVar5[0x11] = 0;
    pbVar5[0x12] = 0;
    pbVar5[0x13] = 0;
    bVar4 = *pbVar5;
    pbVar5[0x40] = 0xff;
    pbVar5[0x41] = 0xff;
    pbVar5[0x42] = 0xff;
    pbVar5[0x43] = 0xff;
    *pbVar5 = bVar4 & 0xdf;
    *pbVar5 = ((char)unaff_EBX[0x16] << 6 ^ bVar4 & 0xdf) & 0x7f ^ (char)unaff_EBX[0x16] << 6;
    iVar2 = unaff_EBX[3];
    iVar3 = unaff_EBX[2];
    *(int *)(pbVar5 + 4) = unaff_EBX[1];
    *(int *)(pbVar5 + 8) = iVar3;
    *(int *)(pbVar5 + 0xc) = iVar2;
    *(undefined4 *)(pbVar5 + 0x70) = *(undefined4 *)(pbVar5 + 4);
    *(int *)(pbVar5 + 0x74) = iVar3;
    *(int *)(pbVar5 + 0x78) = iVar2;
    pbVar5[0x34] = 0;
    pbVar5[0x35] = 0;
    pbVar5[0x36] = 0;
    pbVar5[0x37] = 0;
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C12C95CB97BEA5B49CE41E7719CB0BE9FF447C747B23FC89068CDF28030CAB89
 * Entry: 0x00156938, Ghidra index: 4479, label: FUN_00156938
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039add0;
extern uint32_t PTR_FUN_00394874;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039adf8;
extern uint32_t PTR_FUN_0039af70;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_00394860;
extern uint32_t PTR_LAB_0039486c;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039add8;
extern uint32_t PTR_LAB_0039ade4;
extern uint32_t PTR_LAB_0039af54;
extern uint32_t PTR_LAB_0039efdc;
void FUN_00156938(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 unaff_EBX;
  bool in_ZF;
  
  if (!in_ZF) {
    in_ECX[0x13] = DAT_0039add0;
    in_ECX[0x70] = PTR_FUN_0039efec;
    in_ECX[0x6f] = PTR_LAB_0039efdc;
    in_ECX[0x70] = PTR_FUN_0039efd0;
  }
  FUN_00155340();
  in_ECX[0x12] = &PTR_FUN_00394874;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039486c;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_00394860;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x20;
  in_ECX[0x16] = unaff_EBX;
  in_ECX[0x18] = unaff_EBX;
  uVar4 = (undefined1)unaff_EBX;
  *(undefined1 *)(in_ECX + 0x17) = uVar4;
  in_ECX[0x14] = 0x42200000;
  in_ECX[0x15] = 0x42200000;
  in_ECX[0x1a] = &PTR_FUN_0039af70;
  *in_ECX = &PTR_FUN_0039adf8;
  in_ECX[0x12] = &PTR_FUN_0039adec;
  in_ECX[0x1a] = &PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039ade4;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039add8;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x170;
  puVar1 = in_ECX + 0x22;
  iVar3 = 8;
  do {
    *puVar1 = unaff_EBX;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  in_ECX[0x32] = unaff_EBX;
  in_ECX[0x33] = unaff_EBX;
  in_ECX[0x34] = unaff_EBX;
  in_ECX[0x37] = unaff_EBX;
  in_ECX[0x39] = unaff_EBX;
  uVar2 = FUN_000e0c80(in_ECX + 0x4e);
  in_ECX[0x4f] = uVar2;
  in_ECX[0x50] = unaff_EBX;
  *(undefined1 *)(in_ECX + 0x51) = uVar4;
  in_ECX[0x55] = &PTR_LAB_0039af54;
  in_ECX[0x56] = 0x3f800000;
  in_ECX[0x57] = 0x3f800000;
  in_ECX[0x58] = 0x3f800000;
  in_ECX[0x5a] = unaff_EBX;
  in_ECX[0x5b] = unaff_EBX;
  in_ECX[0x5c] = unaff_EBX;
  in_ECX[0x5e] = unaff_EBX;
  in_ECX[0x5f] = unaff_EBX;
  in_ECX[0x60] = unaff_EBX;
  uVar2 = FUN_001fad20(in_ECX + 0x66);
  in_ECX[0x67] = uVar2;
  in_ECX[0x68] = unaff_EBX;
  *(undefined1 *)((int)in_ECX + 0x79) = uVar4;
  uVar5 = (undefined2)unaff_EBX;
  *(undefined2 *)((int)in_ECX + 0x106) = uVar5;
  in_ECX[0x42] = unaff_EBX;
  *(undefined2 *)((int)in_ECX + 0x72) = uVar5;
  in_ECX[0x44] = unaff_EBX;
  in_ECX[0x45] = 0x40a00000;
  *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) & 0xe8 | 0x20;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) & 0x6d | 0x12;
  in_ECX[0x1b] = 0xffffffff;
  in_ECX[0x46] = unaff_EBX;
  in_ECX[0x47] = in_ECX;
  *(undefined1 *)((int)in_ECX + 0x7a) = uVar4;
  in_ECX[0x52] = unaff_EBX;
  in_ECX[0x43] = unaff_EBX;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) | 1;
  in_ECX[0x4a] = unaff_EBX;
  in_ECX[0x49] = unaff_EBX;
  in_ECX[0x48] = unaff_EBX;
  in_ECX[0x4d] = unaff_EBX;
  in_ECX[0x4c] = unaff_EBX;
  in_ECX[0x4b] = unaff_EBX;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) | 0x20;
  in_ECX[0x6a] = unaff_EBX;
  in_ECX[0x54] = unaff_EBX;
  *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) & 0x37 | 0x80;
  in_ECX[0x6b] = in_ECX[0x6b] & 0xfffffffc;
  in_ECX[0x3c] = unaff_EBX;
  in_ECX[0x3b] = unaff_EBX;
  in_ECX[0x3a] = unaff_EBX;
  in_ECX[0x3f] = unaff_EBX;
  in_ECX[0x3e] = unaff_EBX;
  in_ECX[0x3d] = unaff_EBX;
  in_ECX[0x40] = unaff_EBX;
  in_ECX[0x53] = unaff_EBX;
  *(undefined1 *)(in_ECX + 0x1d) = uVar4;
  *(undefined2 *)(in_ECX + 0x41) = uVar5;
  *(undefined1 *)(in_ECX + 0x1e) = uVar4;
  in_ECX[0x62] = unaff_EBX;
  *(undefined2 *)(in_ECX + 0x1f) = 0xffff;
  *(byte *)((int)in_ECX + 0x26) = *(byte *)((int)in_ECX + 0x26) | 0x40;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) | 0xc;
  in_ECX[0x20] = unaff_EBX;
  in_ECX[0x61] = unaff_EBX;
  in_ECX[0x69] = unaff_EBX;
  in_ECX[0x11] = 3;
  in_ECX[99] = 0x49742400;
  in_ECX[100] = 0x49742400;
  in_ECX[0x65] = 0x49742400;
  return;
}

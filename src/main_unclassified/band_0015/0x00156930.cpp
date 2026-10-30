/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 031EE4034A89282ACCEECEAD3A127958959FA771C2D5FE77821F2F9288A97C54
 * Entry: 0x00156930, Ghidra index: 4478, label: FUN_00156930
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
void FUN_00156930(void)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  if (in_EAX != 0) {
    in_ECX[0x13] = &DAT_0039add0;
    in_ECX[0x70] = &PTR_FUN_0039efec;
    in_ECX[0x6f] = &PTR_LAB_0039efdc;
    in_ECX[0x70] = &PTR_FUN_0039efd0;
  }
  FUN_00155340();
  in_ECX[0x12] = &PTR_FUN_00394874;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039486c;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_00394860;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x20;
  in_ECX[0x16] = 0;
  in_ECX[0x18] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
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
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x39] = 0;
  uVar2 = FUN_000e0c80(in_ECX + 0x4e);
  in_ECX[0x4f] = uVar2;
  in_ECX[0x50] = 0;
  *(undefined1 *)(in_ECX + 0x51) = 0;
  in_ECX[0x55] = &PTR_LAB_0039af54;
  in_ECX[0x56] = 0x3f800000;
  in_ECX[0x57] = 0x3f800000;
  in_ECX[0x58] = 0x3f800000;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x60] = 0;
  uVar2 = FUN_001fad20(in_ECX + 0x66);
  in_ECX[0x67] = uVar2;
  in_ECX[0x68] = 0;
  *(undefined1 *)((int)in_ECX + 0x79) = 0;
  *(undefined2 *)((int)in_ECX + 0x106) = 0;
  in_ECX[0x42] = 0;
  *(undefined2 *)((int)in_ECX + 0x72) = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0x40a00000;
  *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) & 0xe8 | 0x20;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) & 0x6d | 0x12;
  in_ECX[0x1b] = 0xffffffff;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = in_ECX;
  *(undefined1 *)((int)in_ECX + 0x7a) = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x43] = 0;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) | 1;
  in_ECX[0x4a] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4b] = 0;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) | 0x20;
  in_ECX[0x6a] = 0;
  in_ECX[0x54] = 0;
  *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) & 0x37 | 0x80;
  in_ECX[0x6b] = in_ECX[0x6b] & 0xfffffffc;
  in_ECX[0x3c] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x53] = 0;
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  *(undefined2 *)(in_ECX + 0x41) = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  in_ECX[0x62] = 0;
  *(undefined2 *)(in_ECX + 0x1f) = 0xffff;
  *(byte *)((int)in_ECX + 0x26) = *(byte *)((int)in_ECX + 0x26) | 0x40;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) | 0xc;
  in_ECX[0x20] = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x69] = 0;
  in_ECX[0x11] = 3;
  in_ECX[99] = 0x49742400;
  in_ECX[100] = 0x49742400;
  in_ECX[0x65] = 0x49742400;
  return;
}

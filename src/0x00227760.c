/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60F0E7895F8C7B0FB0FA0F576DC2321AFE8A063F005B95E6B97FB822BDCC8495
 * Entry: 0x00227760, Ghidra index: 7653, label: FUN_00227760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
void FUN_00227760(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 local_60 [10];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte bStack_8;
  
  if ((*(byte *)(in_EAX + 0x88) & 2) == 0) {
    local_1c = 0;
    puVar2 = local_60;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    iVar1 = (**(code **)(*in_EAX + 0x40))();
    iStack_2c = in_EAX[0x6d];
    iStack_28 = in_EAX[0x6f];
    local_60[3] = *(undefined4 *)(iVar1 + 0x2c);
    puVar2 = (undefined4 *)(iVar1 + 0x24);
    local_60[2] = *(undefined4 *)(iVar1 + 0x28);
    local_60[1] = *puVar2;
    uStack_38 = *puVar2;
    uStack_30 = *(undefined4 *)(iVar1 + 0x2c);
    uStack_18 = 0;
    bStack_8 = bStack_8 ^ ((0 < (short)in_EAX[0x41]) << 1 ^ bStack_8) & 2;
    uStack_14 = 0x3f800000;
    uStack_34 = local_60[2];
    FUN_0022bfc0(in_EAX[0x8d],0x3f800000);
    FUN_0022cea0(in_EAX[2],puVar2);
    *(byte *)(in_EAX + 0x88) = *(byte *)(in_EAX + 0x88) | 2;
    FUN_00228c70(in_EAX,*(undefined4 *)(in_EAX[0x8d] + 0x1f0));
    ppuStack_74 = &PTR_LAB_003a3fb4;
    uStack_64 = 0xffffffff;
    uStack_70 = 6;
    uStack_6c = 0;
    FUN_001fe3d0(&ppuStack_74);
    FUN_0004d490(in_EAX[0x6d],0x42960000);
    *(int *)(in_EAX[2] + 0xc68) = *(int *)(in_EAX[2] + 0xc68) + 1;
    if (local_1c != 0) {
      FUN_0008f6e0();
    }
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 319325D62055D1258398F70628BF94A4BFD8068EA99F08162C852D35EC3D3865
 * Entry: 0x001f99a0, Ghidra index: 7079, label: FUN_001f99a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0039df40;
void FUN_001f99a0(void)

{
  undefined4 uVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58 [3];
  undefined4 local_4c;
  undefined4 local_48;
  
  if (*(int *)(in_EAX + 0xf8) == 0) {
    iVar4 = *(int *)(in_EAX + 0x108);
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_EAX + 0x10) + 0xa44) + 0xe4);
    if (iVar4 != 0) {
      puVar2 = (undefined4 *)FUN_002ea01d(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = iVar4;
        *puVar2 = &PTR_LAB_0039df40;
      }
      FUN_002b4710();
      local_58[1] = 1;
      local_48 = 0;
      local_70 = 0;
      local_4c = uVar1;
      puVar3 = (undefined4 *)(**(code **)(*(int *)(in_EAX + 8) + 4))();
      uStack_78 = puVar3[1];
      uStack_7c = *puVar3;
      uStack_74 = puVar3[2];
      (**(code **)(*(int *)(in_EAX + 0xc) + 8))();
      FUN_002339d0(&uStack_8c);
      uStack_68 = uStack_84;
      iVar4 = *(int *)(*(int *)(in_EAX + 0x10) + 0xa44);
      uStack_6c = uStack_88;
      uStack_64 = uStack_80;
      uStack_60 = uStack_8c;
      if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0xe0), iVar4 != 0)) {
        iVar4 = FUN_002b54f0(iVar4,puVar2,local_58,&uStack_6c,&uStack_7c);
        *(int *)(in_EAX + 0xf8) = iVar4;
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x9c) = in_EAX + 0xfc;
          *(uint *)(*(int *)(in_EAX + 0xf8) + 0x8c) = *(uint *)(in_EAX + 4) | 0x80000000;
          FUN_002b59e0();
          uStack_6c = 1;
          uStack_68 = 0;
          FUN_002b39a0(&uStack_6c);
          FUN_002b5a00(in_EAX + 0x7c);
          iVar4 = *(int *)(in_EAX + 0xf8);
          if ((*(uint *)(iVar4 + 0x70) & 0x300) == 0) {
            FUN_002c00d0(*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x10));
            *(uint *)(iVar4 + 0x70) = *(uint *)(iVar4 + 0x70) & 0xfffffdff | 0x100;
          }
        }
      }
      if (local_58[0] != 0) {
        (*(code *)PTR_FUN_003bc654)(local_58[0]);
        return;
      }
    }
  }
  return;
}

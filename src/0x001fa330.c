/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D40C8A7875D73DD8820B52449F9331C2B688A3545BAAEB4A51E8CBA022A6E216
 * Entry: 0x001fa330, Ghidra index: 7086, label: FUN_001fa330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_001fa330(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  int local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_80 = *(undefined4 *)(in_EAX + 0x118);
  local_58[0] = 0;
  local_34 = 0;
  local_1c = 0;
  piVar4 = local_58;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_58[3] = *(undefined4 *)(*(int *)(*(int *)(in_EAX + 0x10) + 0xa44) + 0xe4);
  local_44 = 1;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_30 = 0x3cf5c28f;
  local_2c = 0x3c23d70a;
  local_28 = 0x3c23d70a;
  local_24 = 0x3c23d70a;
  local_20 = 0x3c23d70a;
  local_58[1] = 1;
  local_48 = 0;
  local_70 = 0;
  puVar1 = (undefined4 *)(**(code **)(*(int *)(in_EAX + 8) + 4))();
  uStack_7c = *puVar1;
  uStack_78 = puVar1[1];
  uStack_74 = puVar1[2];
  FUN_002b4070(auStack_68,0,0,0);
  iVar3 = *(int *)(*(int *)(*(int *)(in_EAX + 0x10) + 0xa44) + 0xe0);
  iVar2 = FUN_002ea01d(0xa0);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_002cce90(**(undefined4 **)(iVar3 + 0xc),&local_80,auStack_68);
  }
  *(int *)(in_EAX + 0xf8) = iVar3;
  *(int *)(iVar3 + 0x9c) = in_EAX + 0xfc;
  *(uint *)(*(int *)(in_EAX + 0xf8) + 0x8c) = *(uint *)(in_EAX + 4) | 0x80000000;
  uStack_74 = 0;
  uStack_78 = 0;
  local_70 = 0x3f000000;
  uStack_6c = 0x3f000000;
  uStack_7c = 1;
  FUN_002b39a0(&uStack_7c);
  iVar3 = *(int *)(*(int *)(in_EAX + 0xf8) + 0x18);
  if (*(ushort *)(iVar3 + 8) <= *(ushort *)(iVar3 + 10)) {
    FUN_002ccf80();
  }
  *(int *)(*(int *)(iVar3 + 0xc) + (uint)*(ushort *)(iVar3 + 10) * 4) = in_EAX + 0x7c;
  *(short *)(iVar3 + 10) = *(short *)(iVar3 + 10) + 1;
  iVar3 = *(int *)(in_EAX + 0xf8);
  if ((*(uint *)(iVar3 + 0x70) & 0x300) == 0) {
    FUN_002c00d0(*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x10));
    *(uint *)(iVar3 + 0x70) = *(uint *)(iVar3 + 0x70) & 0xfffffdff | 0x100;
  }
  if (local_58[0] != 0) {
    (*(code *)PTR_FUN_003bc654)(local_58[0]);
    return;
  }
  return;
}

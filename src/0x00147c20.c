/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDEDDF14707EDE768454978447094D4CEA3AFC171D36628E1C02C355E2E599D1
 * Entry: 0x00147c20, Ghidra index: 4243, label: FUN_00147c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
undefined1 FUN_00147c20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 uVar3;
  undefined1 auStack_78 [3];
  undefined1 local_75;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 uStack_4;
  
  uVar3 = (undefined1)((uint)unaff_EDI >> 0x18);
  local_75 = 0;
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(*(int *)(unaff_ESI + 0x18),0);
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
  }
  *(byte *)(unaff_ESI + 0xc) = *(byte *)(unaff_ESI + 0xc) & 0xf1;
  iVar2 = FUN_0017c170(DAT_00469984);
  *(int *)(unaff_ESI + 0x18) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = FUN_0022dcc0();
  *(byte *)(unaff_ESI + 0xc) =
       *(byte *)(unaff_ESI + 0xc) ^ (cVar1 << 3 ^ *(byte *)(unaff_ESI + 0xc)) & 8;
  FUN_0003f010();
  if ((*(byte *)(unaff_ESI + 0xc) & 8) == 0) {
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 8) + 0x40))();
    uStack_74 = *(undefined4 *)(iVar2 + 0x2c);
    uStack_70 = *(undefined4 *)(iVar2 + 0x28);
    uStack_6c = *(undefined4 *)(iVar2 + 0x24);
    uStack_60 = 1;
    uStack_68 = uStack_70;
    uStack_64 = uStack_74;
  }
  else {
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 8) + 0x40))();
    uStack_70 = *(undefined4 *)(iVar2 + 0x2c);
    uStack_74 = *(undefined4 *)(iVar2 + 0x28);
    uStack_5c = *(undefined4 *)(iVar2 + 0x24);
    uStack_50 = 1;
    uStack_58 = uStack_74;
    uStack_54 = uStack_70;
  }
  (**(code **)(*DAT_00469940 + 0x50))(*(undefined4 *)(unaff_ESI + 0x18),0,0x3dcccccd);
  cVar1 = FUN_0017c110(auStack_78,uStack_4);
  if (cVar1 != '\0') {
    *(undefined4 *)(unaff_ESI + 0x1c) = *param_1;
    return 1;
  }
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(*(int *)(unaff_ESI + 0x18),0);
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
  }
  *(byte *)(unaff_ESI + 0xc) = *(byte *)(unaff_ESI + 0xc) & 0xf1;
  return uVar3;
}

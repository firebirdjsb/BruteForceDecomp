/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B31154F55E5F7E73646DDD16F570EC4B9DE90825AB296DD05D53CF96DE270284
 * Entry: 0x00154a20, Ghidra index: 4452, label: FUN_00154a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
extern uint32_t *DAT_00443314;
extern uint32_t DAT_0046d064;
void FUN_00154a20(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iStack_18;
  uint uStack_10;
  undefined1 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = param_1;
  *(byte *)(in_ECX + 0xc) =
       *(byte *)(in_ECX + 0xc) ^ (*(char *)(param_1 + 0xd) << 1 ^ *(byte *)(in_ECX + 0xc)) & 2;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(byte *)(in_ECX + 0xc) =
       *(byte *)(in_ECX + 0xc) ^ (*(char *)(param_1 + 0x2c) == '\0' ^ *(byte *)(in_ECX + 0xc)) & 1;
  *(uint *)(in_ECX + 0xa8) =
       *(uint *)(in_ECX + 0xa8) ^
       ((uint)*(byte *)(param_1 + 0x20) << 10 ^ *(uint *)(in_ECX + 0xa8)) & 0x400;
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(uint *)(in_ECX + 0xa8) ^
          ((uint)*(byte *)(param_1 + 0x2d) << 7 ^ *(uint *)(in_ECX + 0xa8)) & 0x80;
  *(uint *)(in_ECX + 0xa8) = uVar6;
  *(uint *)(in_ECX + 0xa8) = ((uint)*(byte *)(param_1 + 0x2e) << 8 ^ uVar6) & 0x100 ^ uVar6;
  FUN_001546d0();
  *(uint *)(in_ECX + 0xa8) =
       *(uint *)(in_ECX + 0xa8) ^
       ((uint)*(byte *)(iVar2 + 0x35) << 4 ^ *(uint *)(in_ECX + 0xa8)) & 0x10;
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(iVar2 + 0x38);
  *(uint *)(in_ECX + 0xa8) =
       *(uint *)(in_ECX + 0xa8) ^
       ((uint)*(byte *)(iVar2 + 0x3c) << 5 ^ *(uint *)(in_ECX + 0xa8)) & 0x20;
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(iVar2 + 0x4c);
  *(uint *)(in_ECX + 0xac) = (*(uint *)(iVar2 + 0x48) == DAT_0046d064) - 1 & *(uint *)(iVar2 + 0x48)
  ;
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(iVar2 + 0xec);
  uVar6 = *(uint *)(in_ECX + 0xa8) ^
          ((uint)*(byte *)(iVar2 + 0xf0) << 9 ^ *(uint *)(in_ECX + 0xa8)) & 0x200;
  *(uint *)(in_ECX + 0xa8) = uVar6;
  *(uint *)(in_ECX + 0xa8) = ((uint)*(byte *)(iVar2 + 0xf1) << 0xb ^ uVar6) & 0x800 ^ uVar6;
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(iVar2 + 0xf4);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(iVar2 + 0x11c);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(iVar2 + 0x120);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(iVar2 + 0x124);
  iVar5 = *(int *)(iVar2 + 0xe8);
  *(int *)(in_ECX + 0x120) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(in_ECX + 0x120) = 0x1ac9db24;
  }
  *(uint *)(in_ECX + 0xa8) =
       *(uint *)(in_ECX + 0xa8) ^
       ((uint)*(byte *)(iVar2 + 0x34) << 6 ^ *(uint *)(in_ECX + 0xa8)) & 0x40;
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(iVar2 + 0xa8);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(iVar2 + 0xac);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(iVar2 + 0xb0);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(iVar2 + 0xb4);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(iVar2 + 0xbc);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(iVar2 + 0xc0);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(iVar2 + 0xc4);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(iVar2 + 200);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(iVar2 + 0xcc);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(iVar2 + 0xd0);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(iVar2 + 0xd4);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(iVar2 + 0xd8);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(iVar2 + 0xdc);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(iVar2 + 0xe0);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(iVar2 + 0xe4);
  if (*(uint *)(iVar2 + 0x10) != DAT_0046d064) {
    uVar4 = (**(code **)(*DAT_00443310 + 0x40))(iVar2 + 0x10);
    *(undefined4 *)(in_ECX + 200) = uVar4;
    if (*(uint *)(iVar2 + 0x14) != DAT_0046d064) {
      param_1 = 0;
      cVar3 = FUN_0023c570(&param_1);
      if (cVar3 != '\0') {
        *(int *)(in_ECX + 200) = param_1;
      }
    }
  }
  if (*(uint *)(iVar2 + 0x1c) == DAT_0046d064) {
    *(undefined4 *)(in_ECX + 0xcc) = 0;
  }
  else {
    uVar4 = (**(code **)(*DAT_00443314 + 0x18))(DAT_00443314,iVar2 + 0x1c);
    *(undefined4 *)(in_ECX + 0xcc) = uVar4;
  }
  if (*(int *)(iVar2 + 0xfc) == 0) {
    iStack_18 = 0;
  }
  else {
    iStack_18 = *(int *)(iVar2 + 0x100) - *(int *)(iVar2 + 0xfc) >> 4;
  }
  if (0 < iStack_18) {
    param_1 = 0;
    do {
      uVar6 = *(uint *)(*(int *)(iVar2 + 0xfc) + param_1);
      iVar5 = *(int *)(iVar2 + 0xfc) + param_1;
      if (uVar6 != DAT_0046d064) {
        uStack_8 = *(undefined4 *)(iVar5 + 8);
        iVar1 = *(int *)(in_ECX + 0x148);
        uStack_c = *(undefined1 *)(iVar5 + 4);
        uStack_4 = *(undefined4 *)(iVar5 + 0xc);
        uStack_10 = uVar6;
        iVar5 = FUN_00155150(in_ECX + 0x144,iVar1,*(undefined4 *)(iVar1 + 4),&uStack_10);
        FUN_0017a4b0();
        *(int *)(iVar1 + 4) = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
      }
      param_1 = param_1 + 0x10;
      iStack_18 = iStack_18 + -1;
    } while (iStack_18 != 0);
  }
  uVar6 = *(uint *)(in_ECX + 0xa8) ^
          ((uint)*(byte *)(iVar2 + 0x118) << 0xc ^ *(uint *)(in_ECX + 0xa8)) & 0x1000;
  *(uint *)(in_ECX + 0xa8) = uVar6;
  *(uint *)(in_ECX + 0xa8) = ((uint)*(byte *)(iVar2 + 0x119) << 0xd ^ uVar6) & 0x2000 ^ uVar6;
  FUN_0010bc40();
  return;
}

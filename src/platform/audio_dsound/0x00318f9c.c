/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AC4DC7422F248FF5FB860924C02A5DBB01E974C73D8BA2842C0EF1F6DF24CCE
 * Entry: 0x00318f9c, Ghidra index: 12214, label: FUN_00318f9c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff48;
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe8202fc;
extern uint32_t _DAT_fe820304;
extern uint32_t _DAT_fe820360;
extern uint32_t _DAT_fe820364;
extern uint32_t _DAT_fe820368;
extern uint32_t _DAT_fe8203a0;
extern uint32_t _DAT_fe8203a4;
extern uint32_t _DAT_fe8203d8;
extern uint32_t _DAT_fe8203dc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00318f9c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 local_30 [10];
  undefined4 local_8;
  
  puVar5 = local_30;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  local_8 = 0;
  FUN_003118f0();
  *(byte *)(in_ECX + 0x17) = *(byte *)(in_ECX + 0x17) | 2;
  do {
  } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 10);
  uVar1 = 0;
  if (*(byte *)(in_ECX + 100) != 0) {
    puVar4 = (ushort *)(in_ECX + 0xc);
    do {
      _DAT_fe8202f8 = (uint)*puVar4;
      _DAT_fe820304 = *(uint *)(in_ECX + 0x14);
      if (uVar1 != 0) {
        _DAT_fe820304 = _DAT_fe820304 | 0x400000;
      }
      _DAT_fe820360 = local_30[uVar1];
      _DAT_fe820364 = local_30[uVar1 + 3];
      _DAT_fe820368 = local_30[uVar1 + 6];
      _DAT_fe8203a0 = *(undefined4 *)(in_ECX + 0x15c);
      _DAT_fe8203dc = 0x20;
      _DAT_fe8203a4 = 0;
      _DAT_fe8202fc = 0;
      uVar1 = uVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar1 < *(byte *)(in_ECX + 100));
  }
  FUN_00311923();
  FUN_00318bb6();
  do {
  } while ((*(uint *)((uint)*(ushort *)(in_ECX + 10 + (uint)*(byte *)(in_ECX + 100) * 2) * 0x80 +
                      0x54 + DAT_0032ff48) & 0x100000) != 0);
  FUN_00318e5b(param_2);
  FUN_003118f0();
  FUN_0031786d(local_30);
  uVar2 = FUN_003166f1(param_1);
  do {
  } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 7);
  uVar1 = 0;
  if (*(byte *)(in_ECX + 100) != 0) {
    puVar4 = (ushort *)(in_ECX + 0xc);
    do {
      _DAT_fe8202f8 = (uint)*puVar4;
      _DAT_fe820360 = local_30[uVar1];
      _DAT_fe820364 = local_30[uVar1 + 3];
      _DAT_fe820368 = local_30[uVar1 + 6];
      _DAT_fe8202fc = 0;
      uVar1 = uVar1 + 1;
      puVar4 = puVar4 + 1;
      _DAT_fe8203d8 = uVar2;
    } while (uVar1 < *(byte *)(in_ECX + 100));
  }
  FUN_00311923();
  return;
}

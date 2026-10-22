/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A34A43E8322B08998462777FD1308BA62792F3D9FC48D9261B0C5B3EEED71711
 * Entry: 0x00318e5b, Ghidra index: 12213, label: FUN_00318e5b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe8202fc;
extern uint32_t _DAT_fe820304;
extern uint32_t _DAT_fe8203a0;
extern uint32_t _DAT_fe8203a4;
extern uint32_t _DAT_fe8203d8;
extern uint32_t _DAT_fe8203dc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00318e5b(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  ushort *puVar3;
  int iVar4;
  undefined4 local_8;
  
  FUN_003118f0();
  if ((param_1 & 1) == 0) {
    *(byte *)((int)in_ECX + 0x17) = *(byte *)((int)in_ECX + 0x17) & 0xfd;
    local_8 = 0;
    iVar1 = FUN_003166f1(*(undefined4 *)(in_ECX[0x22] + 0xc4));
    FUN_003174e3();
  }
  else {
    *(byte *)((int)in_ECX + 0x17) = *(byte *)((int)in_ECX + 0x17) | 2;
    iVar1 = in_ECX[0x22];
    iVar4 = *(int *)(iVar1 + 200);
    local_8 = FUN_003166f1(iVar4);
    iVar1 = FUN_003166f1(*(int *)(iVar1 + 0xcc) + iVar4);
    FUN_00318d9f();
  }
  do {
  } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 0x19) << 3);
  uVar2 = 0;
  if (*(byte *)(in_ECX + 0x19) != 0) {
    iVar4 = 0;
    puVar3 = (ushort *)(in_ECX + 3);
    do {
      _DAT_fe8202f8 = (uint)*puVar3;
      _DAT_fe820304 = in_ECX[5];
      if (uVar2 != 0) {
        _DAT_fe820304 = _DAT_fe820304 | 0x400000;
      }
      _DAT_fe8203a0 = in_ECX[0x57] + iVar4;
      _DAT_fe8203a4 = local_8;
      if ((param_1 & 2) != 0) {
        _DAT_fe8203d8 = 0;
      }
      iVar4 = iVar4 + (int)(((ulonglong)*(byte *)(in_ECX[0x22] + 0xf) << 1) / 8);
      _DAT_fe8202fc = 0;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
      _DAT_fe8203dc = iVar1 + -1;
    } while (uVar2 < *(byte *)(in_ECX + 0x19));
  }
  FUN_00311923();
  FUN_00318bb6();
  (**(code **)(*in_ECX + 0x1c))(1);
  return;
}

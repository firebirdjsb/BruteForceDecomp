/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8909AE66179486C0137902DE040180A0C335660F2F6DF07A4CB65D350187ECC
 * Entry: 0x00318bb6, Ghidra index: 12208, label: FUN_00318bb6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe820120;
extern uint32_t _DAT_fe820124;
extern uint32_t _DAT_fe820140;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe8202fc;
extern uint32_t _DAT_fe820304;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00318bb6(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int *piVar4;
  ushort *puVar5;
  int local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  puVar5 = (ushort *)(in_ECX + 0x12);
  if ((*(byte *)puVar5 & 2) == 0) {
    FUN_00318786();
    FUN_00318d9f();
    if ((*(byte *)(*(int *)(in_ECX + 0x78) + 8) & 0x10) != 0) {
      DSOUND__CMcpxVoiceClient_Commit3dSettings();
    }
    iVar2 = *(int *)(*(int *)(in_ECX + 0x78) + 0xb0);
    if (((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x20), iVar2 != 0)) &&
       ((*(uint *)(*(int *)(iVar2 + 0x88) + 8) & 0x82000) != 0)) {
      DSOUND__CMcpxBuffer_Play(0);
    }
    FUN_003118f0();
    do {
    } while ((_DAT_fe820010 & 0xfffffffc) < 0x80);
    piVar1 = (int *)(*(int *)(in_ECX + 8) + 700);
    *piVar1 = *piVar1 + 1;
    FUN_003174e7();
    if ((*(byte *)puVar5 & 0x10) == 0) {
      *(byte *)(in_ECX + 0x16) = *(byte *)(in_ECX + 0x16) & 0x7f;
    }
    else {
      *(byte *)(in_ECX + 0x16) = *(byte *)(in_ECX + 0x16) | 0x80;
    }
    FUN_00317aec(&local_5,&local_14);
    if (local_14 == 0) {
      local_10 = (local_5 + 1 & 3) << 0x10 | 0xffff;
    }
    else {
      local_10 = (uint)*(ushort *)(local_14 + 10 + (uint)*(byte *)(local_14 + 100) * 2);
    }
    uVar3 = -(uint)((*puVar5 & 0x444) != 0) & 0x40000;
    do {
    } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 7);
    local_c = *(byte *)(in_ECX + 100) - 1;
    if (-1 < local_c) {
      puVar5 = (ushort *)(in_ECX + 0xc + local_c * 2);
      do {
        _DAT_fe8202f8 = (uint)*puVar5;
        _DAT_fe820124 = *(uint *)(in_ECX + 0x40) & 0xffff0000 | _DAT_fe8202f8;
        uVar3 = uVar3 & 0xffff0000 | _DAT_fe8202f8;
        _DAT_fe820304 = *(uint *)(in_ECX + 0x14);
        if (local_c != 0) {
          _DAT_fe820304 = _DAT_fe820304 | 0x400000;
        }
        local_c = local_c + -1;
        puVar5 = puVar5 + -1;
        _DAT_fe8202fc = 0;
        _DAT_fe820120 = local_10;
        _DAT_fe820140 = uVar3;
      } while (-1 < local_c);
    }
    piVar1 = (int *)(in_ECX + 0x4c);
    if (local_14 == 0) {
      piVar4 = (int *)(*(int *)(in_ECX + 8) + 0x6c0 + (uint)local_5 * 8);
    }
    else {
      piVar4 = (int *)(local_14 + 0x4c);
    }
    *piVar1 = *piVar4;
    *(int **)(in_ECX + 0x50) = piVar4;
    *(int **)(*piVar1 + 4) = piVar1;
    **(int **)(in_ECX + 0x50) = (int)piVar1;
    *(byte *)(in_ECX + 0x65) = local_5;
    do {
    } while ((_DAT_fe820010 & 0xfffffffc) < 0x80);
    piVar1 = (int *)(*(int *)(in_ECX + 8) + 700);
    *piVar1 = *piVar1 + -1;
    FUN_00311923();
  }
  return;
}

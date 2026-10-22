/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93C78F5A19C3D440B30FE766AECB71E0E7E3076B25A86304FC75F4F22CC15A0C
 * Entry: 0x00318204, Ghidra index: 12193, label: CMcpxVoiceClient_SetFilter
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
extern uint32_t _DAT_fe820318;
extern uint32_t _DAT_fe820374;
extern uint32_t _DAT_fe820378;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DSOUND__CMcpxVoiceClient_SetFilter(uint *param_1)

{
  ushort *puVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_003118f0();
  if (param_1 == (uint *)0x0) {
    local_24[3] = (uint)*(ushort *)(in_ECX + 0x3a);
    local_24[2] = *(uint *)(in_ECX + 0x38) & 0xffff;
    local_24[0] = *(byte *)(in_ECX + 0x1a) & 3;
    local_24[1] = *(uint *)(in_ECX + 0x18) >> 0x12 & 7;
    local_14 = *(uint *)(in_ECX + 0x3c) & 0xffff;
    local_10 = (uint)*(ushort *)(in_ECX + 0x3e);
  }
  else {
    puVar5 = local_24;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  uVar4 = local_24[0];
  if (((*(byte *)(*(int *)(in_ECX + 0x78) + 8) & 0x10) != 0) && (local_24[0] == 0)) {
    uVar4 = 3;
  }
  *(uint *)(in_ECX + 0x18) =
       ((local_24[1] & 7) << 2 | uVar4 & 3) << 0x10 | *(uint *)(in_ECX + 0x18) & 0xffe0ffff;
  *(uint *)(in_ECX + 0x38) = local_24[3] << 0x10 | local_24[2] & 0xffff;
  if ((*(byte *)(*(int *)(in_ECX + 0x78) + 8) & 0x10) == 0) {
    uVar3 = local_14 & 0xffff;
    uVar4 = local_10;
  }
  else {
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x78) + 0xb4) + 0x3c) == 2) {
      *(undefined4 *)(in_ECX + 0x3c) = 0;
      goto LAB_003182e8;
    }
    iVar2 = *(int *)(in_ECX + 0x74);
    uVar3 = *(uint *)(iVar2 + 0xc) & 0xffff;
    *(uint *)(in_ECX + 0x3c) = uVar3;
    if (*(int *)(*(int *)(in_ECX + 0x70) + 0x44) == 0) {
      uVar4 = *(uint *)(iVar2 + 0x10);
    }
    else {
      uVar4 = *(uint *)(iVar2 + 0xc);
    }
  }
  *(uint *)(in_ECX + 0x3c) = uVar4 << 0x10 | uVar3;
LAB_003182e8:
  if ((*(byte *)(in_ECX + 0x12) & 1) != 0) {
    do {
    } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 6);
    uVar4 = 0;
    if (*(byte *)(in_ECX + 100) != 0) {
      puVar1 = (ushort *)(in_ECX + 0xc);
      do {
        _DAT_fe8202f8 = (uint)*puVar1;
        _DAT_fe820318 = *(undefined4 *)(in_ECX + 0x18);
        _DAT_fe820374 = *(undefined4 *)(in_ECX + 0x38);
        _DAT_fe820378 = *(undefined4 *)(in_ECX + 0x3c);
        _DAT_fe8202fc = 0;
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar4 < *(byte *)(in_ECX + 100));
    }
  }
  FUN_00311923();
  return 0;
}

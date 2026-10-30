/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 664A9D51D4B7EE57FDAF8BA78361927D5D3944832BEFA303F5573A1445A1FEC6
 * Entry: 0x00316a44, Ghidra index: 12154, label: FUN_00316a44
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe820320;
extern uint32_t _DAT_fe82035c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00316a44(int param_1)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  ushort *puVar3;
  uint local_8;
  
  do {
  } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 0x19) * 2);
  local_8 = 0;
  if (*(byte *)(in_ECX + 0x19) != 0) {
    puVar3 = (ushort *)(in_ECX + 3);
    do {
      _DAT_fe8202f8 = (uint)*puVar3;
      uVar2 = (param_1 + _DAT_fe8202f8 * 2 & 0xfff) << 0xc | in_ECX[param_1 * 4 + 0x26] & 0xffU;
      if (param_1 == 0) {
        _DAT_fe820320 = uVar2;
        uVar2 = _DAT_fe82035c;
      }
      _DAT_fe82035c = uVar2;
      local_8 = local_8 + 1;
      puVar3 = puVar3 + 1;
    } while (local_8 < *(byte *)(in_ECX + 0x19));
  }
  *(undefined1 *)(in_ECX[0x1a] + 0xf + param_1 * 0x10) = 0x80;
  iVar1 = in_ECX[0x67];
  in_ECX[0x67] = iVar1 + 1;
  if (iVar1 == 0) {
    in_ECX[0x66] = param_1;
  }
  if ((*(byte *)(in_ECX[0x22] + 0xb) & 0x40) == 0) {
    (**(code **)(*in_ECX + 0x18))(2,0,0,0);
  }
  FUN_00318bb6();
  FUN_00317e87(*(ushort *)((int)in_ECX + 0x12) & 0xfbff);
  return;
}

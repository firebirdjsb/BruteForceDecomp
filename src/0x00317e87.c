/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0442275AB0D2A49CBD67158770C3883669D59CFB4F5EB3AFF664835A402B177
 * Entry: 0x00317e87, Ghidra index: 12190, label: FUN_00317e87
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe820140;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00317e87(ushort param_1)

{
  ushort uVar1;
  int in_ECX;
  ushort *puVar2;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_003118f0();
  puVar2 = (ushort *)(in_ECX + 0x12);
  uVar1 = param_1 & 0x444;
  if ((*puVar2 & 0x444) != uVar1) {
    if ((param_1 & 0x40) != (*(byte *)puVar2 & 0x40)) {
      if ((param_1 & 0x40) == 0) {
        FUN_003161b3(in_ECX);
      }
      else {
        local_8 = FUN_0031618c(in_ECX);
      }
    }
    if ((((*puVar2 & 0x444) != 0) != (uVar1 != 0)) && ((*(byte *)puVar2 & 3) == 3)) {
      do {
      } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100));
      uVar3 = 0;
      if (*(byte *)(in_ECX + 100) != 0) {
        puVar2 = (ushort *)(in_ECX + 0xc);
        do {
          _DAT_fe820140 = (uint)*puVar2 | -(uint)(uVar1 != 0) & 0x40000;
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar3 < *(byte *)(in_ECX + 100));
      }
    }
    FUN_003174e3();
    FUN_00318d9f();
  }
  FUN_00311923();
  return local_8;
}

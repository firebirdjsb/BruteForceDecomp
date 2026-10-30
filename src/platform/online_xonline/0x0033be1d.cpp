/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E568B9969986EFF99603CF9DF2F2C0CF0CF3C9AA78E70D1A54594F22A4E5BD47
 * Entry: 0x0033be1d, Ghidra index: 12538, label: FUN_0033be1d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b094c;
undefined4 FUN_0033be1d(uint param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  if (param_1 < *(uint *)in_ECX[5]) {
    local_8 = in_ECX[6];
    uVar4 = *(ushort *)(&DAT_004b094c + *in_ECX * 10) + 5;
    local_c = uVar4 * param_1;
    uVar2 = 500 - local_8 % 500;
    uVar3 = uVar2;
    if (uVar2 < local_c) {
      do {
        local_8 = local_8 + uVar3;
        local_c = local_c + (uVar3 % uVar4 - uVar3);
        uVar2 = 500;
        uVar3 = 500;
      } while (500 < local_c);
    }
    if (uVar4 <= uVar2 - local_c) {
      uVar2 = local_c;
    }
    local_8 = local_8 + uVar2;
    uVar4 = (local_8 - 1) + uVar4;
    in_ECX[0x20b] = local_8 / 500;
    in_ECX[0x20c] = local_8 % 500;
    in_ECX[0x20a] = (uVar4 - local_8) + 1;
    in_ECX[0x20d] = uVar4 / 500;
    in_ECX[0x209] = param_1;
    in_ECX[0x20e] = uVar4 % 500;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

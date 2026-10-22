/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2564ABBD257A668247ED063AA8619AAEF0F47751F7022A952F4031B5433D6AEB
 * Entry: 0x003783c0, Ghidra index: 13470, label: FUN_003783c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_0037a420;
undefined ** FUN_003783c0(void)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined **local_8;
  
  uVar2 = D3D8LTCG__CMiniport_GetDisplayCapabilities();
  uVar3 = 0;
  uVar4 = 0;
  ppuVar1 = &PTR_DAT_0037a420;
  do {
    local_8 = ppuVar1;
    if (((uint)*local_8 & 0xff00) == (uVar2 & 0xff00)) break;
    uVar4 = uVar4 + 0xc;
    uVar3 = uVar3 + 1;
    ppuVar1 = local_8 + 3;
  } while (uVar4 < 0x8ac);
  if (uVar3 < 0xb9) {
    ppuVar1 = &PTR_DAT_0037a420 + uVar3 * 3;
    do {
      local_8 = ppuVar1;
      if (((uint)*local_8 & 0xff) == 0) {
        return local_8;
      }
      if (((uint)*local_8 & 0xff) == (uVar2 & 0xff)) {
        return local_8;
      }
      uVar3 = uVar3 + 1;
      ppuVar1 = local_8 + 3;
    } while (uVar3 < 0xb9);
  }
  return local_8;
}

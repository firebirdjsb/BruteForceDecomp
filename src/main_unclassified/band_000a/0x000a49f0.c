/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE3F6D2E00B8C5F9800F1CF1538B2504525C41D50F99B7BDB07C1E68E8A06389
 * Entry: 0x000a49f0, Ghidra index: 1959, label: FUN_000a49f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7c50;
extern uint32_t DAT_003f7c54;
extern uint32_t PTR_DAT_003e23c8;
extern uint32_t PTR_DAT_003e23cc;
extern uint32_t PTR_DAT_003e2530;
extern uint32_t _DAT_00469ac4;
extern uint32_t _DAT_00469ac8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a49f0(void)

{
  undefined **ppuVar1;
  
  _DAT_00469ac4 = (uint)*(ushort *)(PTR_DAT_003e23c8 + 2);
  DAT_003f7c50 = 0x88 - _DAT_00469ac4;
  _DAT_00469ac8 = (uint)*(ushort *)(PTR_DAT_003e23cc + 2);
  DAT_003f7c54 = (0x88 - _DAT_00469ac8) - _DAT_00469ac4;
  ppuVar1 = &PTR_DAT_003e2530;
  do {
    FUN_000a47b0(*ppuVar1);
    ppuVar1 = ppuVar1 + 0x131;
  } while ((int)ppuVar1 < 0x3f7c50);
  return 1;
}

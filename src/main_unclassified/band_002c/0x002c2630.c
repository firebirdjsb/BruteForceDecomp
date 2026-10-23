/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D5F52FD15743AB7A3EC0E6014DDC5527AD4E4C06D747774382C4EA3755C3C2B
 * Entry: 0x002c2630, Ghidra index: 10038, label: FUN_002c2630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443de8;
extern uint32_t DAT_00443dec;
extern uint32_t DAT_00443df0;
extern uint32_t DAT_00443df4;
extern uint32_t DAT_00443df8;
extern uint32_t DAT_00443dfc;
extern uint32_t DAT_00443e00;
extern uint32_t DAT_00443e04;
extern uint32_t UNK_002c2050;
extern uint32_t UNK_002c2290;
extern uint32_t UNK_002c23b0;
extern uint32_t UNK_002c23d0;
extern uint32_t _DAT_00443e08;
extern uint32_t _DAT_00443e0c;
extern uint32_t _DAT_00443e10;
extern uint32_t _DAT_00443e14;
extern uint32_t _DAT_00443e18;
extern uint32_t _DAT_00443e1c;
extern uint32_t _DAT_00443e20;
extern uint32_t _DAT_00443e24;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c2630(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00443dec;
  do {
    puVar1[-1] = &LAB_002c2620;
    *puVar1 = &LAB_002c2620;
    puVar1[1] = &LAB_002c2620;
    puVar1[2] = &LAB_002c2620;
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < 0x443e2c);
  DAT_00443de8 = &UNK_002c2050;
  DAT_00443dec = &UNK_002c2050;
  DAT_00443df0 = &UNK_002c2050;
  DAT_00443dfc = &UNK_002c2050;
  _DAT_00443e10 = &UNK_002c2050;
  DAT_00443df4 = &UNK_002c2290;
  DAT_00443df8 = &UNK_002c23b0;
  DAT_00443e00 = &LAB_002c2620;
  DAT_00443e04 = &UNK_002c2290;
  _DAT_00443e08 = &UNK_002c23b0;
  _DAT_00443e0c = &LAB_002c2620;
  _DAT_00443e14 = &UNK_002c2290;
  _DAT_00443e18 = FUN_002c22c0;
  _DAT_00443e1c = FUN_002c22c0;
  _DAT_00443e20 = FUN_002c22c0;
  _DAT_00443e24 = &UNK_002c23d0;
  return;
}

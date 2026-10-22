/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46379E7DD16EF224E1C1D8123C3304C0606F8ADC0DD38C18E0F07AB194901A82
 * Entry: 0x00315d02, Ghidra index: 12118, label: FUN_00315d02
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fddc;
extern uint32_t *DAT_0032ff38;
extern uint32_t DAT_0032ff3c;
extern uint32_t _DAT_fe801324;
extern uint32_t _DAT_fe801334;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00315d02(void)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = DAT_0032ff38;
  DAT_0032fddc = DAT_0032fddc + 1;
  *DAT_0032ff38 = ~DAT_0032fddc;
  FUN_0031b901(1);
  _DAT_fe801324 = DAT_0032ff3c;
  _DAT_fe801334 = DAT_0032fddc;
  FUN_0031b901(0);
  iVar2 = 100;
  while ((*puVar1 != DAT_0032fddc && (iVar2 != 0))) {
    KeStallExecutionProcessor(1);
    iVar2 = iVar2 + -1;
  }
  return;
}

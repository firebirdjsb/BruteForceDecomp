/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E5D82D46E905E1375D315E518BCE427C4DDD5673F290F9965331F977912568C
 * Entry: 0x0031bae8, Ghidra index: 12308, label: FUN_0031bae8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f764;
extern uint32_t _DAT_00330018;
extern uint32_t _DAT_fe802008;
extern uint32_t _DAT_fe80200c;
extern uint32_t _DAT_fe802010;
extern uint32_t _DAT_fe802014;
extern uint32_t _DAT_fe802018;
extern uint32_t _DAT_fe80201c;
extern uint32_t _DAT_fe802020;
extern uint32_t _DAT_fe802024;
extern uint32_t _DAT_fe802028;
extern uint32_t _DAT_fe80402c;
extern uint32_t _DAT_fe80403c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031bae8(void)

{
  if ((_DAT_00330018 & 1) == 0) {
    _DAT_00330018 = _DAT_00330018 | 1;
    DAT_0032f764 = 0x800;
  }
  _DAT_fe802008 = DAT_0032f764;
  _DAT_fe80200c = 0;
  _DAT_fe802010 = DAT_0032f764;
  _DAT_fe802014 = DAT_0032f764 >> 1;
  _DAT_fe802018 = DAT_0032f764 - 1;
  _DAT_fe80201c = 0;
  _DAT_fe802020 = 0x600;
  _DAT_fe802024 = 0x100;
  _DAT_fe802028 = 0x100;
  _DAT_fe80402c = 0x600;
  _DAT_fe80403c = 0x3800;
  return;
}

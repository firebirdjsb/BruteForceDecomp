/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F234FA0A338B9D927D485212F266D5A9BB179F481CBAB6AF192E7E660D0AA584
 * Entry: 0x0031b993, Ghidra index: 12304, label: FUN_0031b993
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe802000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031b993(int param_1)

{
  FUN_003118f0();
  if (param_1 == 0) {
    _DAT_fe802000 = _DAT_fe802000 & 0xffffffe7;
  }
  else if (param_1 == 1) {
    _DAT_fe802000 = _DAT_fe802000 & 0xffffffef | 8;
  }
  else if (param_1 == 2) {
    _DAT_fe802000 = _DAT_fe802000 & 0xfffffff7 | 0x10;
  }
  else if (param_1 == 3) {
    _DAT_fe802000 = _DAT_fe802000 | 0x18;
  }
  else if (param_1 == 4) {
    _DAT_fe802000 = _DAT_fe802000 | 7;
  }
  else if (param_1 == 5) {
    _DAT_fe802000 = _DAT_fe802000 & 0xfffffff8;
  }
  FUN_00311923();
  return;
}

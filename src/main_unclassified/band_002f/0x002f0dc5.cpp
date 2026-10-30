/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5255B99513FF22BED46AD0A7B68F8230699C9DACCAB057C6C5D79779E6D3CE8C
 * Entry: 0x002f0dc5, Ghidra index: 10761, label: FUN_002f0dc5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002f0dc5(undefined1 *param_1,ushort param_2)

{
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  if (0xff < param_2) {
    _DAT_0040f4d8 = 0x2a;
    return 0xffffffff;
  }
  *param_1 = (char)param_2;
  return 1;
}

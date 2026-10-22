/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A19F45D3AD4A4A2B9F5FA131A10175168D216D0ABD999E821F6B90A7686E8F5D
 * Entry: 0x002ee40e, Ghidra index: 10697, label: __dosmaperr
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6f78;
extern uint32_t DAT_0040f4dc;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Release */

void __dosmaperr(uint param_1)

{
  uint uVar1;
  
  DAT_0040f4dc = param_1;
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_003b6f78)[uVar1 * 2]) {
      _DAT_0040f4d8 = *(undefined4 *)(uVar1 * 8 + 0x3b6f7c);
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_0040f4d8 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_0040f4d8 = 8, 0xca < param_1)) {
    _DAT_0040f4d8 = 0x16;
  }
  return;
}

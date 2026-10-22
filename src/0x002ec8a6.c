/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C78CA3D3A28C9C340AAA9296144381BFA01E5E8FFF9BDFC05F0A0D85E2E44C20
 * Entry: 0x002ec8a6, Ghidra index: 10661, label: __set_errno
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __set_errno
   
   Library: Visual Studio 2003 Release */

void __set_errno(int param_1)

{
  if (param_1 == 1) {
    _DAT_0040f4d8 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    _DAT_0040f4d8 = 0x22;
    return;
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E84096A80820B76E387767A677630B2799074BB6457E3FE44CD42068A243552
 * Entry: 0x002ff361, Ghidra index: 11058, label: FUN_002ff361
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f518;
uint FUN_002ff361(uint param_1)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0xffff;
  uVar2 = (ushort)param_1;
  if (uVar2 != 0xffff) {
    if (DAT_0040f518 == 0) {
      if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
        return (param_1 & 0xffff) + 0x20;
      }
      return param_1 & 0xffff;
    }
    if (uVar2 < 0x100) {
      FUN_002ee46d(param_1,1);
    }
    uVar1 = param_1 & 0xffff;
  }
  return uVar1;
}

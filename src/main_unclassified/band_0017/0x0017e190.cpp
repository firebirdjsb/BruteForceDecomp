/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F8D006D350D35CA84BA6CB8471405C9AFD27A78D875E36F33687BAD2877A54E
 * Entry: 0x0017e190, Ghidra index: 5100, label: FUN_0017e190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f640;
undefined4 FUN_0017e190(float param_1)

{
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  return *(undefined4 *)(&DAT_0041f640 + (int)(param_1 * 100.0) * 4);
}

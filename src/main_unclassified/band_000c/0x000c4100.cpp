/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83C1443948D63942C37839DC8FE859FD782F17456F4D5F50F7F6C0B395563241
 * Entry: 0x000c4100, Ghidra index: 2402, label: FUN_000c4100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040d6b0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c4100(float param_1)

{
  float fVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x4c) != '\0') &&
     (fVar1 = _DAT_0040d6b0 * param_1 + *(float *)(in_ECX + 0x48), *(float *)(in_ECX + 0x48) = fVar1
     , 1.0 < fVar1)) {
    *(undefined1 *)(in_ECX + 0x4c) = 0;
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  return;
}

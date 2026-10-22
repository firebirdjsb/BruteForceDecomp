/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E76263317428DBB1034D69FD09F04F4B065194F020B8B5B61FA89C6416FECD8F
 * Entry: 0x0009e9a0, Ghidra index: 1880, label: FUN_0009e9a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003c0284;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0009e9a0(void)

{
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0x94) & 0x20) != 0) {
    return (float10)*(float *)(in_EAX + 0x8c);
  }
  return (float10)_DAT_003c0284 * (float10)*(float *)(in_EAX + 0x8c);
}

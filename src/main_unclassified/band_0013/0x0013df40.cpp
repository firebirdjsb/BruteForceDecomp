/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39D02EAF1AC30844A831B0E8DDBE41F0BAF8829FE5B62D11543DED3DF498A49E
 * Entry: 0x0013df40, Ghidra index: 4025, label: FUN_0013df40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039cc18;
void FUN_0013df40(void)

{
  undefined4 *in_EAX;
  
  in_EAX[0x41] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x45] = 0;
  *in_EAX = PTR_LAB_0039cc18;
  in_EAX[0x44] = 0xfffffffb;
  in_EAX[0x43] = 0xfffffffa;
  return;
}

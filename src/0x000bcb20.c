/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5B8659320D17D3F36009991594E56DCFA045461596C1FFBB20D84455C3857B4
 * Entry: 0x000bcb20, Ghidra index: 2298, label: FUN_000bcb20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000bcb20(void)

{
  int in_EAX;
  
  if (*(short *)(in_EAX + 0x20) < 600) {
    return (*(short *)(in_EAX + 0x22) < 400) + '\x02';
  }
  return *(short *)(in_EAX + 0x22) < 400;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 763A608A927BF849ABCC46D1254B2C6C11430516415A313343931E739760A27F
 * Entry: 0x003166d3, Ghidra index: 12145, label: FUN_003166d3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_003166d3(int param_1)

{
  int *in_ECX;
  
  return *(char *)(param_1 * 0x10 + 0xf + *in_ECX) == '\x01';
}

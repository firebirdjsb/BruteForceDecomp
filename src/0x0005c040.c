/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 452E19D89FFCE13F18B879284A259D54A7CA8AD563AD74FF6E093CC84C887AEE
 * Entry: 0x0005c040, Ghidra index: 940, label: FUN_0005c040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005c040(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  *in_EAX = 1;
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  if (*(int *)(in_ECX + 4) == 0) {
    return uRam00000004;
  }
  return *(undefined4 *)(**(int **)(in_ECX + 8) + 4);
}

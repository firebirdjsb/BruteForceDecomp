/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B7EAA93F300773596DE0C2DC15C303040AAAA9EE4B0E7B16730B26B751D7A21
 * Entry: 0x0012ac00, Ghidra index: 3773, label: FUN_0012ac00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012ac00(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != in_EAX) {
    FUN_0008f6a0();
  }
  return;
}

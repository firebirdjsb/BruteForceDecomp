/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0AF32419943C74E1BBDA15E5B3CFE974156A0BC1735C2C62B02ABE17B6A8880E
 * Entry: 0x001e8fd0, Ghidra index: 6852, label: FUN_001e8fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e8fd0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0xc) != 0) {
    FUN_001e9000();
  }
  *(undefined2 *)(in_EAX + 6) = 0;
  *(undefined2 *)(in_EAX + 4) = 0;
  return;
}

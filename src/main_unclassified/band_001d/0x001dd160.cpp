/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 250D525637BFC496642B7DE1C4A7168078E671BCE1B9A83DD3E1524722407EDB
 * Entry: 0x001dd160, Ghidra index: 6615, label: FUN_001dd160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd160(void)

{
  int in_EAX;
  int in_ECX;
  
  if (in_ECX != 0) {
    FUN_001ca050();
    *(undefined4 *)(in_ECX + 0x140) = 0xf;
    *(undefined4 *)(in_ECX + 0x13c) = 0;
    *(undefined1 *)(in_ECX + 300) = 0;
    FUN_0001f4f0(in_EAX + 0x128,0,0xffffffff);
  }
  return;
}

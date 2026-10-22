/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41AB36010E97386C310B8098FFE955B0209781415306636DC4D0B6BD1759E0E1
 * Entry: 0x00129410, Ghidra index: 3737, label: FUN_00129410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00129410(void)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0x834);
  if (((bVar1 & 0x10) != 0) && (*(byte *)(in_EAX + 0x834) = bVar1 & 0xef, (bVar1 & 0xd) == 0)) {
    FUN_00129530();
    return;
  }
  return;
}

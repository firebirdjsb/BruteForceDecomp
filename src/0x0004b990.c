/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 666068F8AEFAE437096A7E218635035B54B4EEDFC8351937DBCF49C0C38122AB
 * Entry: 0x0004b990, Ghidra index: 621, label: FUN_0004b990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0004b990(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if ((*(int *)(in_EAX + 0x59c) != 0) && (in_EAX = 0, *(int *)(in_ECX + 0x59c) != 0)) {
    uVar1 = FUN_0005beb0();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

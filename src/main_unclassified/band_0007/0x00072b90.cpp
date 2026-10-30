/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86E0FE07F57D4361D6171AE3EBE3C15AAB335A806D5B1301DD0C48BCC3EDE6A6
 * Entry: 0x00072b90, Ghidra index: 1287, label: FUN_00072b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00072b90(void)

{
  int in_ECX;
  char cVar1;
  
  cVar1 = *(int *)(in_ECX + 0x38) != 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(in_ECX + 0x48) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(in_ECX + 0x50) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(in_ECX + 0x58) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(in_ECX + 0x60) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(in_ECX + 0x68) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

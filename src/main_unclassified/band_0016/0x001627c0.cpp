/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA7CA3D38B7FF7693E4C19D82E6D9CE18C4175AECAD065F90F2E35FAC2FE448D
 * Entry: 0x001627c0, Ghidra index: 4643, label: FUN_001627c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001627c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1a8;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 871288F365D942D8ACFC7E1A6EAB53FC2EB4E7A0B5B6A6EA96D8C9D8FECBB0FD
 * Entry: 0x00101080, Ghidra index: 3233, label: FUN_00101080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original x86 guest ABI remains ABI_UNVERIFIED. */
extern void FUN_001010d0(void);
undefined4 FUN_00101080(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  if ((*(byte *)(in_ECX + 0x28) & 2) != 0) {
    *(byte *)(in_ECX + 0x66) = *(byte *)(in_ECX + 0x66) | 1;
    FUN_001010d0();
    if (*(int **)(in_ECX + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x94) + 0x14))();
    }
  }
  return 1;
}

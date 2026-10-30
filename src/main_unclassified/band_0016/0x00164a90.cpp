/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FE8114CEDACDF0319722ED5F4C6410596C7D8D4399C7AC5A10483C709CA2AAE
 * Entry: 0x00164a90, Ghidra index: 4685, label: FUN_00164a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original guest32 free-dispatch argument; caller ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00164a90(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}

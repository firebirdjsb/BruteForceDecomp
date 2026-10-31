/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 467089E7C90F738D37039972A3D59B82C6EB1F6A141B0BEA639BCB9CDDBEC915
 * Entry: 0x0018c140, Ghidra index: 5273, label: FUN_0018c140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_001a9a20(byte param_1);
undefined4 FUN_0018c140(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_001a9a20(1);
  }
  return 0;
}

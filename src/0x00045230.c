/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 023DFB34FC2D7DBEA2A5BB9E9355F1088559657E3DBBAAAAF1B1E08BAB0F0CB6
 * Entry: 0x00045230, Ghidra index: 537, label: FUN_00045230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00045230(void)

{
  int iVar1;
  
  iVar1 = FUN_000120f0();
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x1b4) + 8))();
  return (float10)*(float *)(iVar1 + 0x38);
}

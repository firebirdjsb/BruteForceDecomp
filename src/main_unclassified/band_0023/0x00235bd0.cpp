/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FC939C039563FDCBBFC73801D6694726AA49940644421AAB68094F734AFB87D
 * Entry: 0x00235bd0, Ghidra index: 7820, label: FUN_00235bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox register/stack ABI_UNVERIFIED. */
extern undefined4 FUN_00253570(void);
/* WARNING: Removing unreachable block (ram,0x00235be1) */

undefined4 FUN_00235bd0(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (*(int *)(in_EAX + 0x58) != 0) {
    return CONCAT31((int3)((uint)*(int *)(in_EAX + 0x58) >> 8),1);
  }
  uVar1 = FUN_00253570();
  return uVar1;
}

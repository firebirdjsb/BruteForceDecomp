/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6742D54520AA6FA7F7A582E4EA89A93BA5C4B54B445924FF9FB5BF2FE28805A3
 * Entry: 0x00347cb2, Ghidra index: 12881, label: FUN_00347cb2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347cb2(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    KeSetEvent(*(int *)(param_1 + 0x10),1,0);
    ObfDereferenceObject();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

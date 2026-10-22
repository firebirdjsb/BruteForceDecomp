/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 216CB2B6D16201BCB96B940A03CA9F96FAF0F5E4C27CA32FCC1875EA65C80EC6
 * Entry: 0x00066ae0, Ghidra index: 1121, label: FUN_00066ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00066ae0(int *param_1,int *param_2)

{
  if (param_1[0x1e] == 0) {
    (**(code **)(*param_1 + 0xc0))();
  }
  *param_2 = param_1[0x1e];
  (**(code **)(*(int *)param_1[0x1e] + 4))((int *)param_1[0x1e]);
  return 0;
}

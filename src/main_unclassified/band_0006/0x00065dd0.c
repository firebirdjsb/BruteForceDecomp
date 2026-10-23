/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 898627B1ACC3A53D5E9FE71BE30126454B2BE4A5ECCAC14BE3F92B22C76BDE28
 * Entry: 0x00065dd0, Ghidra index: 1108, label: FUN_00065dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00065dd0(int *param_1,int *param_2)

{
  if (param_1[0x1e] == 0) {
    (**(code **)(*param_1 + 0xb8))();
  }
  *param_2 = param_1[0x1e];
  (**(code **)(*(int *)param_1[0x1e] + 4))((int *)param_1[0x1e]);
  return 0;
}

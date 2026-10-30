/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F76A439363DE2EF573253FFD159FA2040E9B14D4A7F8DD6B96967F4871CA59C0
 * Entry: 0x00061240, Ghidra index: 1016, label: FUN_00061240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00061240(int *param_1,int *param_2)

{
  if (param_1[0x1e] == 0) {
    (**(code **)(*param_1 + 0xec))();
  }
  *param_2 = param_1[0x1e];
  (**(code **)(*(int *)param_1[0x1e] + 4))((int *)param_1[0x1e]);
  return 0;
}

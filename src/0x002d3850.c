/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A730CCC9971348E442723A53475046887555DACC10CF14C07DDD413EBEEAC2F
 * Entry: 0x002d3850, Ghidra index: 10203, label: FUN_002d3850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d3850(int param_1)

{
  if ((**(byte **)(param_1 + 0xec) & 0xc) == 0) {
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 100);
    *(ulonglong *)(param_1 + 0x28) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) -
                  (float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x28) - (float)*(undefined8 *)(param_1 + 0x68));
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x84);
    *(ulonglong *)(param_1 + 0x48) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20) -
                  (float)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x48) - (float)*(undefined8 *)(param_1 + 0x88));
  }
  if ((**(byte **)(param_1 + 0xf0) & 0xc) == 0) {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x74);
    *(ulonglong *)(param_1 + 0x38) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20) -
                  (float)((ulonglong)*(undefined8 *)(param_1 + 0x78) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x38) - (float)*(undefined8 *)(param_1 + 0x78));
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x94);
    *(ulonglong *)(param_1 + 0x58) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) -
                  (float)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x58) - (float)*(undefined8 *)(param_1 + 0x98));
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 350DEF69CB0BB0ECCB272E48F89FC496832EC188B7550C1BA5A1405812A35154
 * Entry: 0x002d4800, Ghidra index: 10209, label: FUN_002d4800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d4800(int param_1,float param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  undefined4 local_4;
  
  local_4 = 0;
  local_14 = 0;
  local_20 = *(float *)(param_1 + 0xb4) * param_2;
  local_1c = *(float *)(param_1 + 0xb8) * param_2;
  local_18 = *(float *)(param_1 + 0xbc) * param_2;
  if ((**(byte **)(param_1 + 0xec) & 0xc) == 0) {
    FUN_002b73d0(*(undefined4 *)(param_1 + 0x1c),&local_20,local_10);
    FUN_002bae30(*(undefined4 *)(param_1 + 0xec));
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 100);
    *(ulonglong *)(param_1 + 0x28) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x28) + (float)*(undefined8 *)(param_1 + 0x68));
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x84);
    *(ulonglong *)(param_1 + 0x48) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x48) + (float)*(undefined8 *)(param_1 + 0x88));
  }
  if ((**(byte **)(param_1 + 0xf0) & 0xc) == 0) {
    local_20 = local_20 * -1.0;
    local_1c = local_1c * -1.0;
    local_18 = local_18 * -1.0;
    FUN_002b73d0(*(undefined4 *)(param_1 + 0x20),&local_20,local_10);
    FUN_002bae30(*(undefined4 *)(param_1 + 0xf0));
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x74);
    *(ulonglong *)(param_1 + 0x38) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(param_1 + 0x78) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x38) + (float)*(undefined8 *)(param_1 + 0x78));
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x94);
    *(ulonglong *)(param_1 + 0x58) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x58) + (float)*(undefined8 *)(param_1 + 0x98));
  }
  return;
}

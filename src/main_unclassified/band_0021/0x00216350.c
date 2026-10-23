/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16B8732EDB1CFBAC944D0B8EBEEDA4C062E5BCB961BCC6F5708993390CD97C59
 * Entry: 0x00216350, Ghidra index: 7458, label: FUN_00216350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00216350(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  uint uVar1;
  undefined4 local_4;
  
  if (param_2 <= param_1) {
    if (param_3 <= param_2) {
      param_2 = param_3;
    }
    uVar1 = (uint)(ushort)((ushort)(param_2 < param_5) << 8 |
                           (ushort)(isnan(param_2) || isnan(param_5)) << 10 |
                          (ushort)(param_2 == param_5) << 0xe);
    if (param_2 < param_5 == 0 && (param_2 == param_5) == 0) goto LAB_0021641b;
    local_4 = param_1;
    if (param_1 <= param_3) {
      local_4 = param_3;
    }
  }
  else {
    if (param_3 <= param_1) {
      param_1 = param_3;
    }
    uVar1 = (uint)(ushort)((ushort)(param_1 < param_5) << 8 |
                           (ushort)(isnan(param_1) || isnan(param_5)) << 10 |
                          (ushort)(param_1 == param_5) << 0xe);
    if (param_1 < param_5 == 0 && (param_1 == param_5) == 0) goto LAB_0021641b;
    local_4 = param_2;
    if (param_2 <= param_3) {
      local_4 = param_3;
    }
  }
  uVar1 = (uint)(ushort)((ushort)(local_4 < param_4) << 8 |
                         (ushort)(isnan(local_4) || isnan(param_4)) << 10 |
                        (ushort)(local_4 == param_4) << 0xe);
  if (local_4 >= param_4) {
    return uVar1;
  }
LAB_0021641b:
  return CONCAT31((int3)(uVar1 >> 8),1);
}

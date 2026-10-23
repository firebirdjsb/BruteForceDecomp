/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76D6709EDEEF5E252B16402D65A17AAA098E6CEE1114537F12AD1D087E919C12
 * Entry: 0x000d1bf0, Ghidra index: 2608, label: FUN_000d1bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined2 FUN_000d1bf0(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  float local_c;
  float local_8;
  float local_4;
  
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  *param_3 = 0.0;
  FUN_000d1a90(param_2,param_3,param_4);
  if (0.0 < *param_3) {
    auVar2 = rcpss(ZEXT416((uint)*param_3),ZEXT416((uint)*param_3));
    fVar1 = auVar2._0_4_;
    *param_2 = *param_2 * fVar1;
    *(ulonglong *)(param_2 + 1) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(param_2 + 1) * fVar1);
    FUN_000a0c60();
    *param_2 = local_c;
    param_2[1] = local_8;
    param_2[2] = local_4;
    return 1;
  }
  return 0;
}

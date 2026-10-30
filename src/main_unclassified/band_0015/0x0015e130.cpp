/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84C99C330714C5DB0CF3CCD05EC6D74EC8138BC4DEC41F4CF3A09E5331D82520
 * Entry: 0x0015e130, Ghidra index: 4542, label: FUN_0015e130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0015e130(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  
  *param_1 = *in_EAX;
  param_1[1] = in_EAX[1];
  FUN_0015e760();
  if (in_EAX[2] != 0) {
    FUN_0003d730(param_1[2],in_EAX[2]);
  }
  FUN_00242480();
  puVar1 = (undefined4 *)in_EAX[3];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  return param_1;
}

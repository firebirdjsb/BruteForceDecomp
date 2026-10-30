/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5246D38B6455DB3D4B1C4552AD6EE2F8CA1538DFC1297BF3A08956A779211232
 * Entry: 0x0013c710, Ghidra index: 4004, label: FUN_0013c710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013c710(undefined4 param_1)

{
  int *in_ECX;
  float10 fVar1;
  
  in_ECX[8] = 0;
  FUN_00210880(*(undefined4 *)(in_ECX[6] + 0x54c),in_ECX + 8);
  fVar1 = (float10)(**(code **)(*in_ECX + 0xe4))();
  FUN_00210950((float)fVar1);
  FUN_0013c770(in_ECX,param_1);
  FUN_0010e500(param_1);
  return;
}

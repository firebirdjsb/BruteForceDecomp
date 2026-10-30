/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5324E296410EF0E9EF34B556B66D93CCAF7E3084AB8DED560F29EDD99CC67A9
 * Entry: 0x001d1d40, Ghidra index: 6291, label: FUN_001d1d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d1d40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  
  *param_1 = *in_EAX;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(in_EAX + 1);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)in_EAX + 5);
  FUN_001ac210();
  puVar1 = (undefined4 *)in_EAX[2];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[2];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
  }
  FUN_0015e760();
  if (in_EAX[3] != 0) {
    FUN_0003d730(param_1[3],in_EAX[3]);
  }
  return param_1;
}

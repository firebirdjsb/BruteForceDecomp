/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40C9E5A4495B662A62ADB9A59C911AFCAD7B84A28BB35EF9EABF31009D359B65
 * Entry: 0x0017f540, Ghidra index: 5128, label: FUN_0017f540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017f540(undefined4 param_1,float param_2)

{
  undefined4 uVar1;
  int *in_ECX;
  int unaff_ESI;
  
  if (in_ECX != (int *)0x0) {
    if (0.0 < param_2) {
      if (unaff_ESI == 0) {
        uVar1 = (**(code **)(*in_ECX + 0x18))(param_2);
        return uVar1;
      }
      *(float *)(unaff_ESI + 0x38) = param_2;
      return 1;
    }
  }
  return 0;
}

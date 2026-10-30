/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7955FCE482ADB3D6D3B53C95FC44C611F05B71BC56572DADD8D8D7879288AFD
 * Entry: 0x0031aeb7, Ghidra index: 12282, label: FUN_0031aeb7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031aeb7(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_0031aa8e();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}

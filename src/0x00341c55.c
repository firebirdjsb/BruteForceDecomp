/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF2FD30BF7C830AF0E48230ABC7BE1D579BB1B9FC9EB2C4C41B28EAE18126A3E
 * Entry: 0x00341c55, Ghidra index: 12680, label: FUN_00341c55
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00341c55(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0x1500f0) {
    uVar1 = *(undefined2 *)(param_1 + 0x3e);
  }
  else {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return *(undefined4 *)(param_1 + 0xc);
}

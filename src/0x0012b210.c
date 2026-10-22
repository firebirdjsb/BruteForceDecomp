/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0423AA24BD58F6B0FF4F09361D5ECC3292C52E1BFF4D908B058FB1FFD2BC4FE
 * Entry: 0x0012b210, Ghidra index: 3784, label: FUN_0012b210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012b210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  in_EAX[4] = in_ECX;
  in_EAX[5] = in_EDX;
  *in_EAX = param_1;
  in_EAX[1] = param_2;
  in_EAX[2] = param_3;
  in_EAX[6] = 0x3f800000;
  in_EAX[7] = 0;
  in_EAX[0x18] = param_4;
  in_EAX[0x19] = param_5;
  return;
}

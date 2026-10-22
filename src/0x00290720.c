/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73CAAE2CE0EEA629FC1DB2AE195C3DD9C073A4E212BBDA4C0B957A09B2A76701
 * Entry: 0x00290720, Ghidra index: 9227, label: FUN_00290720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00290720(undefined4 param_1,float param_2)

{
  float fVar1;
  float *in_EAX;
  float *unaff_EBX;
  float *unaff_EDI;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  FUN_00290690(&param_2);
  FUN_00290690(&param_2);
  fVar1 = 1.0 - param_2;
  *in_EAX = param_2 * *unaff_EDI + fVar1 * *unaff_EBX;
  in_EAX[1] = param_2 * unaff_EDI[1] + fVar1 * unaff_EBX[1];
  in_EAX[2] = param_2 * unaff_EDI[2] + fVar1 * unaff_EBX[2];
  FUN_00233b10(in_EAX + 3,local_10,local_20,param_2);
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95D1EF63CC1D4819391B2138642A2DEA9FA8CFADCA49C303DC0A7733BB166C77
 * Entry: 0x000cfcc0, Ghidra index: 2567, label: FUN_000cfcc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cfcc0(undefined4 *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *in_EDX;
  undefined4 *unaff_EBX;
  
  pfVar1 = (float *)*unaff_EBX;
  pfVar2 = (float *)*in_EDX;
  if ((*param_2 - *pfVar2) * (*param_2 - *pfVar2) +
      (param_2[2] - pfVar2[1]) * (param_2[2] - pfVar2[1]) <
      (*param_2 - *pfVar1) * (*param_2 - *pfVar1) +
      (param_2[2] - pfVar1[1]) * (param_2[2] - pfVar1[1])) {
    *in_EDX = pfVar1;
    *unaff_EBX = pfVar2;
  }
  pfVar1 = (float *)*param_1;
  pfVar2 = (float *)*in_EDX;
  if ((*param_2 - *pfVar1) * (*param_2 - *pfVar1) +
      (param_2[2] - pfVar1[1]) * (param_2[2] - pfVar1[1]) <
      (*param_2 - *pfVar2) * (*param_2 - *pfVar2) +
      (param_2[2] - pfVar2[1]) * (param_2[2] - pfVar2[1])) {
    *param_1 = pfVar2;
    *in_EDX = pfVar1;
  }
  pfVar1 = (float *)*in_EDX;
  pfVar2 = (float *)*unaff_EBX;
  if ((*param_2 - *pfVar1) * (*param_2 - *pfVar1) +
      (param_2[2] - pfVar1[1]) * (param_2[2] - pfVar1[1]) <
      (*param_2 - *pfVar2) * (*param_2 - *pfVar2) +
      (param_2[2] - pfVar2[1]) * (param_2[2] - pfVar2[1])) {
    *in_EDX = pfVar2;
    *unaff_EBX = pfVar1;
  }
  return;
}

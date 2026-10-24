/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA3039AF27C59DBDAA591E55E48EDA8A2F19E18CABE9BF2E346C549B2943AFFA
 * Entry: 0x0035614e, Ghidra index: 13136, label: FUN_0035614e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern void FUN_00355d8a(undefined4 param_1);
int FUN_0035614e(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_0034d726(param_1);
  if (-1 < iVar1) {
    FUN_00352ebc(0x8000);
    KeInitializeDpc(in_ECX + 0x278,(uintptr_t)0x00356142U);
    *(int *)(in_ECX + 0x298) = in_ECX + 0x29c;
    *(undefined4 *)(in_ECX + 0x89c) = 0;
    *(undefined4 *)(in_ECX + 0x8a4) = 0xffffffff;
    *(code **)(in_ECX + 0x8a8) = FUN_00355d8a;
    iVar1 = 0;
  }
  return iVar1;
}

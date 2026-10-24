/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6CABE372FD85A9D1ED97BB5A4B4FAFC7011BED63333ABB690A15E857541FC43
 * Entry: 0x0033dc41, Ghidra index: 12597, label: FUN_0033dc41
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern void FUN_0033c55b(int param_1);
void FUN_0033dc41(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = in_ECX;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_ECX[4] = param_1;
  in_ECX[0xc] = param_3;
  FUN_00330c2d(in_ECX);
  *in_ECX = (uintptr_t)0x0033db9eU;
  in_ECX[1] = FUN_0033c55b;
  in_ECX[2] = param_2;
  return;
}

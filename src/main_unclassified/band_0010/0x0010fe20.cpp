/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 560D290095DA8BE07EF2100B2AC79772BDFFADE16A90671EBE5A732B4D16482B
 * Entry: 0x0010fe20, Ghidra index: 3542, label: FUN_0010fe20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee-draft-matched declaration for C++17 name lookup only; Xbox ABI_UNVERIFIED. */
extern int FUN_000388b0(int param_1);
int FUN_0010fe20(void)

{
  undefined4 in_EAX;
  int iVar1;
  
  iVar1 = FUN_000388b0(in_EAX);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 100) != 1)) || ((*(uint *)(iVar1 + 0x80) >> 2 & 1) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

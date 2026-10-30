/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFA6CECEBA9EF3739832CA342A5DECE7CC73098A0073A5F6E53D58C0F423BE73
 * Entry: 0x000e3b50, Ghidra index: 2826, label: FUN_000e3b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3b50(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (*(uint *)(*param_2 + 4) < *(uint *)(*param_1 + 4)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  if (*(uint *)(*param_3 + 4) < *(uint *)(*param_2 + 4)) {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  if (*(uint *)(*param_2 + 4) < *(uint *)(*param_1 + 4)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}

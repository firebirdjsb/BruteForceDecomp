/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8A697216DD3BCD9916DF42B220A475C48760782C97E7074845126F56A6B8B39
 * Entry: 0x00333315, Ghidra index: 12407, label: FUN_00333315
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00333315(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00330c53(param_1 + 0x38);
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0x4c);
  if (iVar1 != -1) {
    FUN_003450fe(iVar1);
  }
  if (*(int *)(param_1 + 0x68c) != 0) {
    FUN_0033ea20(*(int *)(param_1 + 0x68c));
  }
  if (*(int *)(param_1 + 0x690) != 0) {
    FUN_0033ea20(*(int *)(param_1 + 0x690));
  }
  if (*(int *)(param_1 + 0x694) != 0) {
    FUN_0033ea20(*(int *)(param_1 + 0x694));
  }
  FUN_003476db(param_1 + 0x20,0,0xffffffff);
  FUN_0033ea20(param_1);
  return;
}

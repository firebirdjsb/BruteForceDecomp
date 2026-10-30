/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99AFF032F3BF3DD6C314AF920EF2BEC8CB723668258737A23DA8CB9C6F7B53BB
 * Entry: 0x00272300, Ghidra index: 8832, label: FUN_00272300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00272300(byte param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x104);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x104) = 0;
  }
  FUN_00271260();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

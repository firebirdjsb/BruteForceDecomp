/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10CEDE436CF9D543C922368563FF626B033D49C316221E0CB10166854739A01A
 * Entry: 0x0027a600, Ghidra index: 8947, label: FUN_0027a600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_0027a650(void);
void FUN_0027a600(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  if (in_EDX != in_ECX) {
    FUN_0027a650();
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) - in_EAX;
  }
  **(int **)(param_2 + 4) = param_3;
  **(int **)(param_3 + 4) = param_1;
  **(int **)(param_1 + 4) = param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}

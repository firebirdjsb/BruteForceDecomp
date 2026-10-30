/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F73E561F3C2A63A9241C18C6D2C1E97F206C5F496CCD8B1E74D260C3E7273C26
 * Entry: 0x00299c50, Ghidra index: 9392, label: FUN_00299c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_parameters_0040400c[];
void FUN_00299c50(int param_1)

{
  int *piVar1;
  int in_EAX;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 8);
  piVar1[5] = piVar1[5] + in_EAX;
  FUN_00299250(s_parameters_0040400c);
  if (param_1 == 0) {
    *(char *)(*(int *)(*piVar1 + 0x10) + 1) = (char)piVar1[5];
    FUN_00299360();
    return;
  }
  *(char *)(*(int *)(*piVar1 + 0x10) + 1) = (char)piVar1[5] + -0x80;
  FUN_00299360();
  FUN_00294810();
  FUN_00299880();
  return;
}

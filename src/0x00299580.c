/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FFA6DBAA692A9EF16722545BAB521EA235C372B89281F2A610069E854E48D0A
 * Entry: 0x00299580, Ghidra index: 9376, label: FUN_00299580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
void FUN_00299580(undefined4 param_1,int param_2)

{
  int *piVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 < 0x100) {
    iVar3 = 2;
  }
  else {
    iVar3 = (uint)(0xffff < param_2) * 2 + 3;
  }
  piVar1 = *(int **)(in_EAX + 8);
  uVar2 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*piVar1 + 0x10) = uVar2;
  FUN_002993f0();
  *(int *)(*(int *)(in_EAX + 8) + 8) = *(int *)(*(int *)(in_EAX + 8) + 8) + iVar3;
  return;
}

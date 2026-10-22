/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5744A386230EAD70DB39EC7CDB7C0D47CEB7056E797928EE320D3BCFAB8B4FD6
 * Entry: 0x0029ac60, Ghidra index: 9416, label: FUN_0029ac60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
void FUN_0029ac60(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00296110();
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_0029ae00(param_1);
  FUN_0029a990();
  if (*(int *)(param_1 + 4) != 0x111) {
    FUN_0029a130();
  }
  uVar2 = FUN_00296110();
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_0029aa10();
  piVar1 = *(int **)(param_1 + 8);
  uVar2 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*piVar1 + 0x10) = uVar2;
  piVar1 = (int *)(*(int *)(param_1 + 8) + 8);
  *piVar1 = *piVar1 + 2;
  if (*(int *)(param_1 + 4) == 0x107) {
    FUN_0029ac60(param_1,param_2);
    FUN_00299e50();
    return;
  }
  if (*(int *)(param_1 + 4) == 0x106) {
    uVar2 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar2;
    FUN_0029aa10();
  }
  FUN_0029a360(param_2);
  FUN_00299e50();
  return;
}

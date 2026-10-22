/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2799E1DE683050265D1FD694276A459A7F7F777C1C6E6FB1F19635691CE6C948
 * Entry: 0x001f3aa0, Ghidra index: 7027, label: FUN_001f3aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efc8;
float10 FUN_001f3aa0(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined **in_stack_00000028;
  int in_stack_0000007c;
  float fVar3;
  
  FUN_002ebea0();
  fVar3 = -3.4028235e+38;
  FUN_002b7970(&stack0x00000028,&stack0x00000000);
  in_stack_00000028 = &PTR_FUN_0039efc8;
  FUN_002b8d60();
  puVar1 = (undefined4 *)&stack0x00000098;
  iVar2 = 0x100;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(extraout_ECX + 8) == 0) {
    FUN_001f35b0(0x3f800000);
  }
  if (*(int *)(extraout_ECX + 8) != 0) {
    FUN_002b8c60();
  }
  if ((*(int *)(in_stack_0000007c + 4) != 0) &&
     (iVar2 = *(int *)(*(int *)(in_stack_0000007c + 4) + 0xc), iVar2 != 0)) {
    fVar3 = (*(float *)(*(int *)(extraout_ECX + 0x38) + 4) + 1.0) - *(float *)(iVar2 + 0x1c);
  }
  in_stack_00000028 = &PTR_FUN_0039efc8;
  FUN_002b8de0();
  return (float10)fVar3;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7342DF08952A10ADA91E85EAA58784CB299E110EBC9110627DC6E9B444620C72
 * Entry: 0x000e46f0, Ghidra index: 2850, label: FUN_000e46f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efb0;
void FUN_000e46f0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_0039efb0;
  puVar1 = (undefined4 *)in_ECX[0x2d6];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_001298b0(local_4,uVar3,puVar1);
  piVar2 = (int *)in_ECX[0x2d8];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0x2d8] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x2d6];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_001298b0(local_4,uVar3,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x2d6]);
}

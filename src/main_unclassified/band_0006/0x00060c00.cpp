/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6673925AA772CEF1CF46AA72DF6F66AA0B103B2F8C18B2EAD91ACF0CC64536ED
 * Entry: 0x00060c00, Ghidra index: 1010, label: FUN_00060c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3e90;
void FUN_00060c00(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  undefined1 auStack_4 [4];
  
  *in_ECX = PTR_FUN_003a3e90;
  piVar1 = (int *)in_ECX[0xf];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xf] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0xd];
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_001298b0(auStack_4,uVar3,puVar2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0xd]);
}

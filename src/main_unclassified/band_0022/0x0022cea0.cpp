/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 802F490279FBAEE3F16D1F9AD8445BEB387C71974CDFE943D6D2CC962F794214
 * Entry: 0x0022cea0, Ghidra index: 7700, label: FUN_0022cea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: two caller DWORDs, original EAX result, RET 8; guest ECX/EDX unbound. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0022cea0(int param_1,undefined4 param_2)

{
  char in_AL;
  int *piVar1;
  int in_ECX;
  int in_EDX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_0046d064;
  iVar3 = *(int *)(in_ECX + 0x254);
  iVar4 = *(int *)(in_ECX + 0x250);
  if (in_AL != '\0') {
    piVar1 = *(int **)(in_ECX + 0x25c);
    piVar2 = (int *)0x0;
    if (piVar1 != *(int **)(in_ECX + 0x260)) {
      do {
        if (*piVar1 == in_EDX) {
          piVar2 = piVar1;
        }
        piVar1 = piVar1 + 3;
      } while (piVar1 != *(int **)(in_ECX + 0x260));
      if (piVar2 != (int *)0x0) {
        if (piVar2[1] != DAT_0046d064) {
          iVar4 = piVar2[1];
        }
        if (piVar2[2] != DAT_0046d064) {
          iVar3 = piVar2[2];
        }
      }
    }
  }
  if (((iVar4 != DAT_0046d064) && (piVar1 = (int *)FUN_00160da0(0xffffffff,1), piVar1 != (int *)0x0)
      ) && (piVar1 = (int *)(**(code **)(*piVar1 + 8))(param_1), iVar5 = DAT_0046d064,
           piVar1 != (int *)0x0)) {
    FUN_000da880(param_1,piVar1,1);
    FUN_000da8f0(param_1);
    iVar5 = DAT_0046d064;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x38))(param_2);
      iVar5 = DAT_0046d064;
    }
  }
  if (iVar3 != iVar5) {
    FUN_0003f010();
    FUN_00179250(*(undefined4 *)(param_1 + 0x208),iVar3,6);
  }
  return;
}

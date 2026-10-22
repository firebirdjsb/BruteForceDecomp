/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7A2C72196E5ABA1C090E8A621F76629A9C9D2AED0A0B834F710A64F7F098C7B
 * Entry: 0x00260b50, Ghidra index: 8627, label: FUN_00260b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b258;
void FUN_00260b50(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_retaddr;
  
  RtlEnterCriticalSection(&DAT_0046b258);
  piVar1 = *(int **)(unaff_retaddr + 0xc);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar3 = (int *)*piVar1;
  }
  if (piVar3 != piVar1) {
    do {
      if (*param_1 == *(int *)piVar3[2]) break;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar1);
  }
  if (piVar3 != piVar1) {
    iVar2 = piVar3[2];
    if (iVar2 != 0) {
      FUN_002606e0(iVar2);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
    if (piVar3 != *(int **)(unaff_retaddr + 0xc)) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar3);
    }
  }
  RtlLeaveCriticalSection(&DAT_0046b258);
  return;
}

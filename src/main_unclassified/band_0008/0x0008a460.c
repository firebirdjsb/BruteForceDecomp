/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF421D6ED47EC40541FB1CEDEACEE94627A0E9DA81B2D98F996518080D9117EF
 * Entry: 0x0008a460, Ghidra index: 1657, label: FUN_0008a460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
undefined4 FUN_0008a460(void)

{
  int iVar1;
  int guest_first_call_result;
  uint32_t guest_out_word;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(*(undefined4 *)(unaff_ESI + 4));
  guest_first_call_result = iVar1;
  if (((iVar1 != 0) &&
      (iVar1 = *(int *)(*(int *)(DAT_00469948 + 0x22c + *(int *)(unaff_ESI + 4) * 4) + 0xc4),
      iVar1 != 0)) && (*(int *)(iVar1 + 0xbc) != 4)) {
    /* 0x0008A49F reads EDX from [first-call EAX + 0x0c];
     * 0x0008A4A7 writes EDX into the saved guest ECX DWORD [ESP+4].
     * 0x0008A4B0 passes that DWORD by address to virtual slot 0x18c.
     * TODO: guest memory translation and vtable ABI remain unverified. */
    guest_out_word = *(uint32_t *)(uintptr_t)((uint32_t)guest_first_call_result + UINT32_C(0x0c));
    uVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))(&guest_out_word);
    return uVar2;
  }
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBE273BE551D509F3BFA7897AE779E8178C2A978237E7A275FF5AF5A4B66D43B
 * Entry: 0x00282310, Ghidra index: 9058, label: FUN_00282310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00282310(undefined4 param_1,int *param_2)

{
  /* Original PUSH ECX reserves one four-byte guest stack out-parameter.
   * The next virtual call receives &guest_acquired_object, and its result is
   * then read from that same guest stack DWORD at 0x00282328. */
  uint32_t guest_acquired_object = 0;
  uint32_t guest_selector_word = (uint32_t)(uintptr_t)param_2;
  int *acquired_object;

  (**(code **)(*param_2 + 0x10))(param_2,&guest_acquired_object);
  acquired_object = (int *)(uintptr_t)guest_acquired_object;

  /* LEA EDX,[ESP+0x0c] at 0x0028232E targets the original
   * second incoming argument stack slot, not the acquired interface. */
  (**(code **)(*acquired_object + 0x20))(acquired_object,&guest_selector_word);
  if (guest_selector_word == UINT32_C(0xf435e223)) {
    /* MOV EAX,[ESP+8] then MOV DWORD [EAX+0x2c],0: first incoming pointer. */
    *(uint32_t *)(uintptr_t)(param_1 + UINT32_C(0x2c)) = 0;
  }
  if (acquired_object != (int *)0) {
    (**(code **)(*acquired_object + 8))(acquired_object);
  }
  return 0;
}

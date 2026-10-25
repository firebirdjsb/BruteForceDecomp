/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8876C10A84B3B6541E2FFA416E4FF32C7434630495DDFFA4089E2FF07827437
 * Entry: 0x0029df00, Ghidra index: 9468, label: FUN_0029df00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469880;
extern uint32_t PTR_LAB_003910c0;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0029df00(void)

{
  /* Original x86: SUB ESP,0x14 (0x0029DF00). The output interface
   * is the DWORD at entry_ESP-0x14, initialized by MOV [ESP+0x10],0
   * at 0x0029DF25 and passed via LEA [ESP+4] at 0x0029DF1D.
   * The two other callback output words are entry_ESP-0x10/-0x0c.
   * They are distinct guest storage, not addresses into a host FILE
   * or C argument list. Native x86 register inputs remain ABI_UNVERIFIED.
   */
  int *unaff_ESI;
  undefined4 *unaff_EBX;
  uint32_t guest_interface_word = 0;
  uint32_t guest_secondary_word = 0;
  uint32_t guest_tertiary_word = 0;
  uint32_t *guest_object;
  int *guest_interface;
  int query_result;

  *unaff_EBX = (undefined4)(uintptr_t)unaff_ESI;
  (**(code **)(*unaff_ESI + 4))(unaff_ESI);
  query_result = (**(code **)(*unaff_ESI + 0x38))(unaff_ESI);
  if (query_result == 1) {
    (**(code **)(*unaff_ESI + 0x24))(unaff_ESI,0,&guest_interface_word);
    guest_interface = (int *)(uintptr_t)guest_interface_word;
    query_result = (**(code **)(*guest_interface + 0x14))(guest_interface);
    if (query_result < 2) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      (**(code **)(*guest_interface + 0x1c))(guest_interface,&guest_secondary_word);
      if (query_result == 1) {
        /* The original stores three zero DWORDs before CALL +0x30. */
        uint32_t guest_aux_word_1 = 0;
        uint32_t guest_aux_word_2 = 0;
        (**(code **)(*guest_interface + 0x30))
            (guest_interface,0,&guest_tertiary_word,
             &guest_aux_word_1,&guest_aux_word_2);
        guest_secondary_word = guest_tertiary_word;
      }
      guest_object = (uint32_t *)(uintptr_t)FUN_002ea01d(0x0c);
      if (guest_object != (uint32_t *)0) {
        guest_object[0] = UINT32_C(0x003910c0);
        guest_object[2] = 1;
      }
      /* The original stores to EAX+4 even if allocation returned zero. */
      guest_object[1] = guest_secondary_word;
      DAT_00469880 = DAT_00469880 + 1;
      *unaff_EBX = (undefined4)(uintptr_t)guest_object;
    }
    if (guest_interface != (int *)0) {
      (**(code **)(*guest_interface + 8))(guest_interface);
    }
  }
  return 0;
}

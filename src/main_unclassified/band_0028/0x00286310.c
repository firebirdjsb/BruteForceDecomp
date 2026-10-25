/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5078F6A83BFD92A50FA8F864E2AC44422CB98DD6B11D5F3B4DC9F7F5CC7DA095
 * Entry: 0x00286310, Ghidra index: 9078, label: FUN_00286310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
undefined4 FUN_00286310(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  /* Entry RET 0x0c at 0x002863C4: three incoming guest stack DWORDs.
   * EBP saves argument 2 before MOV [ESP+0x2c],ESI overwrites the
   * guest argument word at entry_ESP+8 with a temporary interface.
   *
   * Independently reconstructed guest frame:
   *   entry_ESP-0x08: 32-bit count from callback +0x3c
   *   entry_ESP-0x0c: received output interface from callback +0x24
   *   entry_ESP-0x04: DWORD read through the original guest EBX
   *   entry_ESP+0x08: temporary interface reused by callback +0x40
   * Original callback ABI, EBX delivery and guest->host pointer
   * translation remain unverified; no PC runtime equivalence is claimed.
   */
  int *in_EBX;                 /* original implicit guest EBX, ABI_UNVERIFIED */
  int32_t guest_count = 0;
  uint32_t guest_current_interface_word = 0;
  uint32_t guest_received_interface_word = 0;
  uint32_t guest_record_word;
  int *guest_current_interface;
  int *guest_received_interface;
  int index;
  int result;

  (void)param_1; /* original first stack word is not loaded in this body */
  result = (**(code **)(*DAT_004432fc + 0x3c))
      (DAT_004432fc,2,&guest_count);
  if (result >= 0 && guest_count > 0) {
    for (index = 0; index < guest_count; ++index) {
      guest_current_interface =
          (int *)(uintptr_t)guest_current_interface_word;
      if (guest_current_interface != (int *)0) {
        (**(code **)(*guest_current_interface + 8))(guest_current_interface);
        guest_current_interface_word = 0;
      }
      result = (**(code **)(*DAT_004432fc + 0x40))
          (DAT_004432fc,2,index,&guest_current_interface_word,0);
      if (result >= 0) {
        /* 0x0028636B: MOV EDX,[EBX]; 0x00286372 stores it into
         * the guest DWORD at entry_ESP-4 before the callback. */
        guest_record_word = (uint32_t)*in_EBX;
        guest_received_interface_word = 0;
        result = (**(code **)(*DAT_004432fc + 0x24))
            (DAT_004432fc,2,&guest_record_word,1,
             &guest_received_interface_word,guest_current_interface_word);
        guest_received_interface =
            (int *)(uintptr_t)guest_received_interface_word;
        if (result >= 0) {
          if (param_2 != (undefined4 *)0) {
            *param_2 = guest_current_interface_word;
            guest_current_interface =
                (int *)(uintptr_t)guest_current_interface_word;
            (**(code **)(*guest_current_interface + 4))
                (guest_current_interface);
          }
          if (param_3 != (undefined4 *)0) {
            *param_3 = guest_received_interface_word;
            (**(code **)(*guest_received_interface + 4))
                (guest_received_interface);
          }
          if (guest_received_interface != (int *)0) {
            (**(code **)(*guest_received_interface + 8))
                (guest_received_interface);
          }
          guest_current_interface =
              (int *)(uintptr_t)guest_current_interface_word;
          if (guest_current_interface != (int *)0) {
            (**(code **)(*guest_current_interface + 8))
                (guest_current_interface);
          }
          return 1;
        }
        if (guest_received_interface != (int *)0) {
          (**(code **)(*guest_received_interface + 8))
              (guest_received_interface);
        }
      }
    }
  }
  guest_current_interface = (int *)(uintptr_t)guest_current_interface_word;
  if (guest_current_interface != (int *)0) {
    (**(code **)(*guest_current_interface + 8))(guest_current_interface);
  }
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C91FEC44485A9C0E71DC5A8F62D50313A48DAE8EC2BD6E6E45BCB355B1A9AE3B
 * Entry: 0x002a81d0, Ghidra index: 9610, label: FUN_002a81d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a81d0(int *param_1)

{
  /* Guest EAX supplies the destination writer; the host register ABI is
   * not reconstructed. The guest uses distinct one-byte header slots,
   * one DWORD payload slot and one separate 32-bit child pointer slot.
   * Original x86 operand evidence is in verify_outer_guest_serializers.py. */
  int *in_EAX;
  int *guest_writer = in_EAX;
  uint8_t guest_header_a = (uint8_t)(**(code **)(*param_1 + 0x34))(param_1);
  uint8_t guest_header_b = (uint8_t)(**(code **)(*param_1 + 0x3c))(param_1);

  (**(code **)(*guest_writer + 0x14))(guest_writer,&guest_header_a,1,0);
  (**(code **)(*guest_writer + 0x14))(guest_writer,&guest_header_b,1,0);
  for (uint8_t index = 0; index < guest_header_b; index++) {
    uint32_t guest_payload_word;
    uint32_t guest_child_word = 0;
    (**(code **)(*param_1 + 0x24))(param_1,(uint32_t)index,&guest_payload_word);
    if (guest_child_word != 0) {
      int *old_child = (int *)(uintptr_t)guest_child_word;
      (**(code **)(*old_child + 8))(old_child);
      guest_child_word = 0;
    }
    (**(code **)(*param_1 + 0x28))(param_1,(uint32_t)index,&guest_child_word);
    (**(code **)(*guest_writer + 0x14))(guest_writer,&guest_payload_word,4,0);
    /* Guest register transfer ESI=child and EDI=writer still needs a
     * verified explicit native ABI bridge; this remains a C11 draft. */
    FUN_002a8070();
    if (guest_child_word != 0) {
      int *child = (int *)(uintptr_t)guest_child_word;
      (**(code **)(*child + 8))(child);
    }
  }
  return;
}

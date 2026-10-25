/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC44ACAACCABFEFEFDC26E42FAFC75E3D29BD9F4C8E96B4480EA36275D7E2989
 * Entry: 0x001e4bb0, Ghidra index: 6787, label: FUN_001e4bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
extern char s_z__cacheinfo_bin_00407558[];
/* WARNING: Removing unreachable block (ram,0x001e4c21) */
/* WARNING: Removing unreachable block (ram,0x001e4c29) */
/* WARNING: Removing unreachable block (ram,0x001e4c2f) */

/* XBE 0x001E4BB0: file/cacheinfo resource open and 0x34-byte read.
 * Three distinct original stack DWORDs live at offsets +4 (interface),
 * +8 (read byte count), and +0x0c (auxiliary open context) relative
 * to ESP immediately after PUSH ESI. These are *guest* addresses/words,
 * not native C object pointers for a cross-platform port.
 */
undefined1 FUN_001e4bb0(void)

{
  int unaff_EDI;
  int open_result;
  int read_result;
  uint32_t guest_acquired_interface = 0;
  uint32_t guest_read_count = UINT32_C(0xe0c43d05);
  uint32_t guest_open_context;
  int *guest_interface_ptr;

  *(uint32_t *)(uintptr_t)((uint32_t)unaff_EDI + UINT32_C(0x0c)) = 0;
  *(uint32_t *)(uintptr_t)((uint32_t)unaff_EDI + UINT32_C(0x0c)) =
      (uint32_t)FUN_00238370();

  /* Original arguments are pushed: &interface, &open_context,
   * 0x40000001, address of the cache filename, then 'this'.
   * 0x001E4BE1 initializes the interface out-word to 0;
   * 0x001E4BE9 initializes the read-count word to 0xe0c43d05.
   * Keep the three guest words separate from one another.
   */
  open_result = (**(code **)(*DAT_004432f8 + 0x0c))(
      DAT_004432f8, s_z__cacheinfo_bin_00407558, UINT32_C(0x40000001),
      &guest_open_context, &guest_acquired_interface);

  guest_interface_ptr = (int *)(uintptr_t)guest_acquired_interface;
  if (open_result >= 0) {
    /* Original 0x001E4C00 passes &guest_read_count, followed by
     * requested byte count 0x34 and the object at guest EDI.
     * Original 0x001E4C08 zeros the same count word just before
     * the read vtable call at offset +0x14.
     */
    guest_read_count = 0;
    read_result = (**(code **)(*guest_interface_ptr + 0x14))(
        guest_interface_ptr, (void *)(uintptr_t)(uint32_t)unaff_EDI,
        UINT32_C(0x34), &guest_read_count);

    if (read_result >= 0 && guest_read_count == UINT32_C(0x34)) {
      if (guest_interface_ptr != (int *)0) {
        (**(code **)(*guest_interface_ptr + 0x08))(guest_interface_ptr);
      }
      return 1;
    }
  }

  if (guest_interface_ptr != (int *)0) {
    (**(code **)(*guest_interface_ptr + 0x08))(guest_interface_ptr);
  }
  return 0;
}

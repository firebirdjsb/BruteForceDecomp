/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C62AB4DAD70BA9AF253F04B604033624FA3F47BBD8982818E9B0C2BD59689C8
 * Entry: 0x00257860, Ghidra index: 8458, label: FUN_00257860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"

/* XBE 0x00257860-0x002578B7: five adjacent guest stack DWORDs.
 * The virtual call receives &vtable_result at [initial ESP-0x14].
 * At 0x00257883/87 the two key words occupy [initial ESP-0x10/-0x0c].
 * The implicit EDI output at [initial ESP-0x08] is a DWORD plus a byte at
 * [initial ESP-0x04] (written at 0x00135473/75, 0x001354B1/B3 or
 * 0x001354C1/C3). The remaining three bytes have no proven value.
 * The guest EBX input is ESI+0x24. These implicit register bindings and the
 * virtual target are NOT represented by a working host-C calling convention.
 */
typedef struct {
  uint32_t vtable_result;
  uint32_t lookup_key[2];
  uint32_t result_node;
  uint8_t result_inserted;
  uint8_t result_unknown[3];
} bf_00257860_guest_frame;
_Static_assert(sizeof(bf_00257860_guest_frame) == 20, "guest frame width");
_Static_assert(offsetof(bf_00257860_guest_frame, lookup_key) == 4, "guest key offset");
_Static_assert(offsetof(bf_00257860_guest_frame, result_node) == 12, "guest output offset");
_Static_assert(offsetof(bf_00257860_guest_frame, result_inserted) == 16, "guest flag offset");

undefined4 FUN_00257860(void)
{
  int *in_EAX;
  int iVar1;
  int unaff_ESI;
  bf_00257860_guest_frame guest_frame;

  /* XBE 0x00257867-0x0025786D pushes output address and object pointer.
   * The virtual dispatch ABI and actual target remain unverified. */
  (**(code **)(*in_EAX + 0x14))(in_EAX, &guest_frame.vtable_result);
  guest_frame.lookup_key[0] = guest_frame.vtable_result;
  guest_frame.lookup_key[1] = *(uint32_t *)(unaff_ESI + 0x30);
  /* XBE 0x0025787C sets EBX=ESI+0x24, 0x0025787F sets EDI to
   * &guest_frame.result_node; 0x00135410 consumes both as guest registers.
   * This call is SYNTAX-ONLY until those register inputs are bound. */
  FUN_00135410(guest_frame.lookup_key);
  if ((guest_frame.result_inserted == 1) &&
     (iVar1 = *(int *)(unaff_ESI + 0x30) + 1, *(int *)(unaff_ESI + 0x30) = iVar1, 0xffe < iVar1)) {
    return 0x80004005;
  }
  return 0;
}

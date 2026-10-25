/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6EB10CDF096227CED44786B44789BAFF8237970AB4F215F6EFBEB77E9843F51
 * Entry: 0x00254ed0, Ghidra index: 8419, label: FUN_00254ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"

/* Original XBE: SUB ESP,0x10C reserves one output DWORD followed by
 * 264 bytes of temporary data. The first virtual call receives ESP+4;
 * the later +0x34 call receives ESP+8 (buffer+4), after three pushes.
 * This layout does not prove native guest32 address translation or ABI. */
typedef struct {
  uint32_t guest_interface_word;
  uint8_t temporary_bytes[264];
} bf_00254ed0_guest_frame;
_Static_assert(sizeof(bf_00254ed0_guest_frame) == 0x10c,
               "original guest stack allocation");
_Static_assert(offsetof(bf_00254ed0_guest_frame, temporary_bytes) == 4,
               "original guest temporary buffer offset");

undefined4 FUN_00254ed0(void)

{
  int iVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  bf_00254ed0_guest_frame guest_frame;

  *unaff_EDI = 0;
  (**(code **)(*unaff_ESI + 0xc))(unaff_ESI, guest_frame.temporary_bytes);
  if ((guest_frame.temporary_bytes[0] & 0x10) != 0) {
    *unaff_EDI = 0;
    iVar1 = (**(code **)(*unaff_ESI + 0x1c))(unaff_ESI, unaff_EDI);
    if ((iVar1 < 0) || (*unaff_EDI == 0)) {
      /* XBE 0x00254F0C clears the output DWORD before virtual +0x10.
       * 0x00254F17 reloads that word; it is not the original ESI object. */
      guest_frame.guest_interface_word = 0;
      (**(code **)(*unaff_ESI + 0x10))(unaff_ESI, &guest_frame.guest_interface_word);
      /* TODO: map the 32-bit guest object address to host memory.
       * The original code does not guard this dereference before +0x34.
       * Its 0x200 length argument exceeds the remaining 260 local bytes;
       * the callee's actual write bound is not yet verified. */
      int *guest_interface = (int *)(uintptr_t)guest_frame.guest_interface_word;
      (**(code **)(*guest_interface + 0x34))
          (guest_interface, guest_frame.temporary_bytes + 4, 0x200, 0, 0);
      if (guest_frame.guest_interface_word != 0) {
        (**(code **)(*guest_interface + 8))(guest_interface);
      }
      return 0x80004005;
    }
  }
  return 0;
}

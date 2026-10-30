/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2F24405CE94AC8095D8823541380F0A123E38B41A3D67DA576C2BB558CCF28B
 * Entry: 0x0023a790, Ghidra index: 7902, label: FUN_0023a790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Original frame reserves exactly two adjacent 32-bit guest locals.
 * No initialization is invented for the second output word. */
typedef struct {
  int32_t first_word;
  uint32_t second_word;
} bf_0023a790_guest_locals;
_Static_assert(sizeof(bf_0023a790_guest_locals) == 8, "two DWORD guest locals");
_Static_assert(offsetof(bf_0023a790_guest_locals, second_word) == 4, "second guest DWORD offset");

int FUN_0023a790(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  bf_0023a790_guest_locals guest_locals;
  char cStack_4;
  /* XBE 0x0023A7BE: LEA EDX,[ESP+0x0C] points to the second
   * local guest DWORD at entry ESP-4 (after callee stack cleanup).
   * The first call uses a distinct DWORD at entry ESP-8, guest_locals.first_word.
   * Output contents are unknown before the second virtual call.
   * Host C does not bind the Xbox's implicit register/call ABI. */
  
  guest_locals.first_word = 0;
  iVar1 = (**(code **)*in_ECX)();
  if (iVar1 < 0) {
LAB_0023a868:
    if (&guest_locals.first_word != (int *)0x0) {
      (**(code **)(guest_locals.first_word + 8))(&guest_locals.first_word);
    }
    return 0;
  }
  piVar2 = (int *)(**(code **)(guest_locals.first_word + 0xc))(&guest_locals.first_word,&guest_locals.second_word);
  if ((*piVar2 == unaff_ESI) &&
     ((in_EAX != 0 || (in_EAX = (**(code **)(*in_ECX + 0x10))(in_ECX), in_EAX != 0)))) {
    iVar1 = (**(code **)(*in_ECX + 0x18))(in_ECX,in_EAX,unaff_EBX);
    if (-1 < iVar1) {
      (**(code **)(*unaff_EDI + 0x18))();
      (**(code **)(*in_ECX + 0x18))();
      iVar1 = (**(code **)(*unaff_EDI + 0x24))();
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*unaff_EDI + 0x28))();
      }
      FUN_00239dc0();
      if (-1 < iVar1) {
        if (&guest_locals.first_word != (int *)0x0) {
          (**(code **)(guest_locals.first_word + 8))(&guest_locals.first_word);
        }
        return in_EAX;
      }
      if (cStack_4 == '\0') {
        (**(code **)(guest_locals.first_word + 0x14))(&guest_locals.first_word,in_EAX);
      }
      goto LAB_0023a868;
    }
    if ((char)unaff_EBX == '\0') {
      (**(code **)(*in_ECX + 0x14))(in_ECX,in_EAX);
    }
  }
  if (in_ECX != (int *)0x0) {
    (**(code **)(*in_ECX + 8))(in_ECX);
  }
  return 0;
}
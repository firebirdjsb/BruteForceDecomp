/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70E334E750C3A9DA7DD27C51E7C703686A8965069150FF88C38654CADF9EE1B7
 * Entry: 0x00126320, Ghidra index: 3705, label: FUN_00126320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00126320(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int *unaff_ESI;
  /* XBE 0x001263A3/0x001263C6/0x001263CB: three adjacent guest
   * DWORDs at original entry ESP-0x78/-0x74/-0x70. FUN_0017BEB0
   * reads the first; FUN_00178E50 receives the second on the guest
   * stack, and its 0x00178E59/0x00178EB8 reads access offsets +0/+4.
   * EAX independently points to the first. Do not invent initial
   * values for any guest words on the false/early-return path. The implicit
   * EAX/ESI guest register ABI is still UNVERIFIED for host calls. */
  uint32_t guest_stack_words[3];
  _Static_assert(sizeof(guest_stack_words) == 12, "three guest DWORDs");
  undefined1 local_6c [16];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 local_24;
  undefined1 local_20;
  
  if (in_EAX != 0) {
    cVar1 = FUN_00112790();
    if (cVar1 != '\0') {
      FUN_0003f010();
      local_20 = 1;
      local_24 = 0x3f000000;
      iVar2 = (**(code **)(*unaff_ESI + 0x40))();
      guest_stack_words[0] = *(undefined4 *)(iVar2 + 0x28);
      uStack_54 = *(undefined4 *)(iVar2 + 0x2c);
      uStack_5c = *(undefined4 *)(iVar2 + 0x24);
      uStack_50 = 1;
      uStack_58 = guest_stack_words[0];
      FUN_0017c020(local_6c);
      return;
    }
    iVar2 = FUN_0017beb0(&guest_stack_words[0]);
    if ((iVar2 != 0) && (unaff_ESI != (int *)0x0)) {
      FUN_00178e50(&guest_stack_words[1]);
    }
  }
  return;
}
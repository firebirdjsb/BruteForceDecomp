/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EFF549B60CD68C29497A90104DF7D7B5583314CA6EC65180C74E669DB7B39B8
 * Entry: 0x002345e0, Ghidra index: 7802, label: FUN_002345e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00234685) */

void FUN_002345e0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int *unaff_ESI;
  int *guest_out;
  /* EBP captures incoming guest DWORD #2 (entry ESP+8) before
   * 0x002345ED zeros that same slot. Both +0x1c callbacks receive
   * its address, and both releases plus final cleanup read it.
   * This local models only the 32-bit guest word. Caller-visible
   * stack aliasing, ESI/EBX and host/guest pointer translation,
   * as well as indirect-call ABI, remain unverified. */
  uint32_t guest_second_word = 0;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_2);
    piVar1 = (int *)*unaff_ESI;
    guest_out = (int *)(uintptr_t)guest_second_word;
    if (guest_out != (int *)0x0) {
      (**(code **)(*guest_out + 8))(guest_out);
      guest_second_word = 0;
    }
    cVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,&guest_second_word);
    if (cVar2 == '\0') {
      FUN_002347d0(param_1);
    }
  }
  piVar1 = (int *)unaff_ESI[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_2);
    piVar1 = (int *)unaff_ESI[1];
    guest_out = (int *)(uintptr_t)guest_second_word;
    if (guest_out != (int *)0x0) {
      (**(code **)(*guest_out + 8))(guest_out);
      guest_second_word = 0;
    }
    cVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,&guest_second_word);
    if (cVar2 == '\0') {
      FUN_002347d0(param_1);
    }
  }
  guest_out = (int *)(uintptr_t)guest_second_word;
  if (guest_out != (int *)0x0) {
    (**(code **)(*guest_out + 8))(guest_out);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E82BB7C73AAF2197FDBB2195F7B3B8A7A5DC64AF2FD81F1CE39DCA69D5C0CB9B
 * Entry: 0x0035a960, Ghidra index: 13178, label: FUN_0035a960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035a960(void)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  /* XBE 0x0035A960-0x0035A976: SUB ESP,8 reserves two guest DWORDs.
   * LEA [ESP+8] (after two pushes) passes the base to the wait API;
   * MOV [ESP+0x10],EDI and MOV [ESP+0x14],ESI (after four pushes)
   * populate DWORD[0]=EDI and DWORD[1]=ESI. This is guest 32-bit
   * storage only. Incoming ESI/EDI, Xbox HANDLE values and native
   * API/guest-memory translation remain ABI_UNVERIFIED.
   */
  undefined4 guest_wait_handles[2];
  guest_wait_handles[0] = unaff_EDI;
  guest_wait_handles[1] = unaff_ESI;
  iVar1 = XAPILIB__WaitForMultipleObjects(2,guest_wait_handles,0,0xffffffff);
  if (iVar1 == 0) {
    XAPILIB__WaitForSingleObject(unaff_ESI,0xffffffff);
  }
  else if (iVar1 == 1) {
    XAPILIB__WaitForSingleObject(unaff_EDI,0xffffffff);
    return;
  }
  return;
}

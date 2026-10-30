/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B8B566DC6A2C48755F69DBB66C9FD445F9E89F5F7ECFA862B764C6E0DFE43C3
 * Entry: 0x0023bd70, Ghidra index: 7920, label: FUN_0023bd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* This is the existing Ghidra callee's C++ draft signature, not a verified
 * Xbox guest-register ABI. The original call operands remain unchanged. */
extern void FUN_0001f4f0(int guest_string, uint start, uint count);
void FUN_0023bd70(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_EAX;
  unaff_ESI[1] = in_ECX;
  unaff_ESI[8] = 0xf;
  unaff_ESI[7] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  FUN_0001f4f0(in_EDX,0,0xffffffff);
  return;
}

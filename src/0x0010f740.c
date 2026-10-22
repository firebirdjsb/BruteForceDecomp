/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEC952398AFB7ED516E0AB925A5B2C2F0A102E49B23E297CF7015AD6D70CF798
 * Entry: 0x0010f740, Ghidra index: 3531, label: FUN_0010f740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010f740(undefined1 param_1)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_EAX;
  unaff_ESI[1] = in_ECX;
  unaff_ESI[2] = in_EDX;
  FUN_0010f770(unaff_ESI + 3);
  *(undefined1 *)(unaff_ESI + 9) = param_1;
  *(undefined1 *)((int)unaff_ESI + 0x25) = 0;
  return;
}

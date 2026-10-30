/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67BBF92684953B97898A36C4CC1D5780FC390724E0EEC3434AA6378E2C4C3733
 * Entry: 0x001267b0, Ghidra index: 3712, label: FUN_001267b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001267b0(void)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EDI;
  
  uVar1 = 0;
  if ((*(byte *)(in_EAX + 0x26) & 8) != 0) {
    *(undefined4 *)(in_EAX + 0x81c) = in_ECX;
    if (*(int *)(in_EAX + 0x5b8) != 0) {
      uVar1 = FUN_001435d0(unaff_EDI,in_EAX,in_EDX);
      return uVar1;
    }
    FUN_00126690(in_ECX,in_EDX);
    uVar1 = 1;
  }
  return uVar1;
}

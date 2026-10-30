/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03BBF2E9E3D1647D8522AEB30B49210877E0AABF9AC64DA35EB8DD57D85A77BE
 * Entry: 0x001f2cb0, Ghidra index: 7015, label: FUN_001f2cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f2cb0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 4) = 0;
  if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 8))(1);
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  if (*(int *)(in_ECX + 0xc0) != 0) {
    XAPILIB__XInputClose(*(int *)(in_ECX + 0xc0));
    *(undefined4 *)(in_ECX + 0xc0) = 0;
  }
  return 1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C8FA3A7F2B1642ED3707BC178C2F1FC1098F4537CD272100A2B18FBC8358451
 * Entry: 0x00126ac0, Ghidra index: 3720, label: FUN_00126ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00126ac0(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x1f8);
  if ((((iVar1 != 0xf) && (iVar1 != 0x10)) && (iVar1 != 0x11)) && (iVar1 != 0x12)) {
    return 0;
  }
  return 1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FD5D47C2B1E2ACF77C5C445620A0C68A0C64565993FB6DAB7FDA8932B49393E
 * Entry: 0x0037450e, Ghidra index: 13425, label: FUN_0037450e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0037450e(void)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  *(undefined4 *)(iVar1 + 0x1830) = 0;
  *(undefined4 *)(iVar1 + 0x180c) = 0xf800;
  FUN_00378d30();
  in_EAX[0x2d] = 1;
  *(undefined4 *)(iVar1 + 0x9200) = 0xde86;
  *(undefined4 *)(iVar1 + 0x9210) = 0x1dcd;
  *(undefined4 *)(iVar1 + 0x9420) = 0xffffffff;
  FUN_00378e93();
  FUN_00378f93();
  FUN_0037462e();
  FUN_00379062();
  in_EAX[0x4d] = 2;
  FUN_00379098();
  FUN_003790c8();
  return 1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E56982547F6B1154C309F0F9DB0FD6E3816592E7F8B5165FBE28353A2344182D
 * Entry: 0x000216b0, Ghidra index: 187, label: FUN_000216b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000216b0(undefined1 *param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_000120f0();
  *(undefined4 *)(in_EAX + 0x6ac) = 0xe;
  *(undefined4 *)(iVar1 + 0x578) = 0x41a00000;
  FUN_0003f0e0(1);
  *param_1 = 1;
  return 1;
}

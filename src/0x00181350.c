/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A79206779EC2C30FF8C9300286E591C48D159BBC1C62F19482FA936B56289F9
 * Entry: 0x00181350, Ghidra index: 5149, label: FUN_00181350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00181350(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = param_1;
  in_EAX[2] = param_2;
  in_EAX[3] = *in_ECX;
  in_EAX[4] = in_ECX[1];
  *(undefined1 *)(in_EAX + 5) = param_3;
  *(undefined1 *)((int)in_EAX + 0x15) = 0;
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B52D23BF3C4516C9CF56B6BE44DC44F34DD6E1EE19AFD38FD6DB4B64AAC1B467
 * Entry: 0x002bbd20, Ghidra index: 9912, label: FUN_002bbd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ushort FUN_002bbd20(undefined4 param_1)

{
  ushort uVar1;
  ushort *in_EAX;
  
  if (*in_EAX <= in_EAX[1]) {
    FUN_002ccf80();
  }
  *(undefined4 *)(*(int *)(in_EAX + 2) + (uint)in_EAX[1] * 4) = param_1;
  uVar1 = in_EAX[1];
  in_EAX[1] = uVar1 + 1;
  return uVar1;
}

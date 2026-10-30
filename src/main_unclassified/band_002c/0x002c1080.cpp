/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 022F655CAA2098390A117202941AEA6FE3DAD4C199D5D4A995A60CDC810E3558
 * Entry: 0x002c1080, Ghidra index: 10023, label: FUN_002c1080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ushort FUN_002c1080(void)

{
  ushort uVar1;
  ushort *in_EAX;
  int unaff_EDI;
  
  if (*in_EAX <= in_EAX[1]) {
    FUN_002ccf80();
  }
  *(int *)(*(int *)(in_EAX + 2) + (uint)in_EAX[1] * 4) = unaff_EDI;
  if (*(int *)(unaff_EDI + 0xc) == -1) {
    *(uint *)(unaff_EDI + 0xc) = (uint)in_EAX[1];
    uVar1 = in_EAX[1];
    in_EAX[1] = uVar1 + 1;
    return uVar1;
  }
  *(uint *)(unaff_EDI + 0x10) = (uint)in_EAX[1];
  uVar1 = in_EAX[1];
  in_EAX[1] = uVar1 + 1;
  return uVar1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BA9C317254464C05006234449F80E776C7AF2E1F0A3238147056A0F724E2F47
 * Entry: 0x0027cae0, Ghidra index: 8988, label: FUN_0027cae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027cae0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = param_1;
  in_EAX[2] = param_2;
  in_EAX[3] = *in_ECX;
  uVar1 = in_ECX[3];
  uVar2 = in_ECX[2];
  in_EAX[4] = in_ECX[1];
  in_EAX[5] = uVar2;
  in_EAX[6] = uVar1;
  *(undefined1 *)(in_EAX + 7) = param_3;
  *(undefined1 *)((int)in_EAX + 0x1d) = 0;
  return;
}

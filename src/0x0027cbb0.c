/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F84C2E603EB3D8C74F0C37C8FEDE703ED1689C35049FFA33850CA983672600B
 * Entry: 0x0027cbb0, Ghidra index: 8992, label: FUN_0027cbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027cbb0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = param_1;
  in_EAX[2] = param_2;
  in_EAX[3] = *in_ECX;
  uVar1 = in_ECX[4];
  uVar2 = in_ECX[3];
  uVar3 = in_ECX[2];
  in_EAX[4] = in_ECX[1];
  in_EAX[5] = uVar3;
  in_EAX[6] = uVar2;
  in_EAX[7] = uVar1;
  *(undefined1 *)(in_EAX + 8) = param_3;
  *(undefined1 *)((int)in_EAX + 0x21) = 0;
  return;
}

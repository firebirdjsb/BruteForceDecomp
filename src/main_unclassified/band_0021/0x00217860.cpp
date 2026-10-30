/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B0441AE48C0D9B0B33001EE1D589270CED3D9D476A00799D2DC65069BCE922B
 * Entry: 0x00217860, Ghidra index: 7467, label: FUN_00217860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00217860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  *in_EAX = *param_1;
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  in_EAX[3] = *param_2;
  in_EAX[4] = uVar2;
  in_EAX[5] = uVar1;
  uVar1 = param_3[2];
  uVar2 = param_3[1];
  in_EAX[6] = *param_3;
  in_EAX[7] = uVar2;
  in_EAX[8] = uVar1;
  uVar1 = in_EDX[2];
  uVar2 = in_EDX[1];
  in_EAX[9] = *in_EDX;
  in_EAX[10] = uVar2;
  in_EAX[0xb] = uVar1;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  in_EAX[0xc] = *in_ECX;
  in_EAX[0xd] = uVar2;
  in_EAX[0xe] = uVar1;
  in_EAX[0xf] = param_4;
  return;
}

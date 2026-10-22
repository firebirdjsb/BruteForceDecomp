/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 741E758FA4D80DA400085D682B209FB6962B5DBABD24AB476310AA3D1291AAD0
 * Entry: 0x001327c0, Ghidra index: 3852, label: FUN_001327c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001327c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[4];
  in_EAX[3] = in_ECX[3];
  in_EAX[4] = uVar2;
  in_EAX[5] = uVar1;
  in_EAX[6] = in_ECX[6];
  uVar1 = in_ECX[9];
  uVar2 = in_ECX[8];
  in_EAX[7] = in_ECX[7];
  in_EAX[8] = uVar2;
  in_EAX[9] = uVar1;
  uVar1 = in_ECX[0xc];
  uVar2 = in_ECX[0xb];
  in_EAX[10] = in_ECX[10];
  in_EAX[0xb] = uVar2;
  in_EAX[0xc] = uVar1;
  in_EAX[0xd] = in_ECX[0xd];
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3D0662092158518B94BE77B68CC7AAC61A2935A43BAAFB3DE9687CDAB77B6B4
 * Entry: 0x001c9400, Ghidra index: 5826, label: FUN_001c9400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c9400(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  in_EAX[3] = in_ECX[3];
  in_EAX[4] = in_ECX[4];
  uVar1 = in_ECX[7];
  uVar2 = in_ECX[6];
  in_EAX[5] = in_ECX[5];
  in_EAX[6] = uVar2;
  in_EAX[7] = uVar1;
  uVar1 = in_ECX[10];
  uVar2 = in_ECX[9];
  in_EAX[8] = in_ECX[8];
  in_EAX[9] = uVar2;
  in_EAX[10] = uVar1;
  return;
}

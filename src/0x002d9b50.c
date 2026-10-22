/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB4934CADD98997A77B265E619E96B1F4DEA0A55F9A1EC48D73FFC8C5E7D0CAE
 * Entry: 0x002d9b50, Ghidra index: 10255, label: FUN_002d9b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d9b50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  undefined4 in_ECX;
  int iVar1;
  int in_EDX;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  *unaff_ESI = in_ECX;
  unaff_ESI[1] = in_EAX;
  unaff_ESI[2] = param_3;
  if (in_EAX == 0) {
    unaff_ESI[0x35] = 0;
  }
  else {
    puVar2 = unaff_ESI + 0x35;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    unaff_ESI[0x43] = 0;
    unaff_ESI[0x42] = 0;
  }
  unaff_ESI[0x41] = 0;
  if (in_EDX != 0) {
    FUN_002d96b0(unaff_ESI,param_2,in_EDX,unaff_ESI + 3,unaff_ESI + 0x1d,0x3f800000);
  }
  if (param_1 != 0) {
    FUN_002d96b0(unaff_ESI,param_2,param_1,unaff_ESI + 0xf,unaff_ESI + 0x29,0xbf800000);
  }
  return;
}

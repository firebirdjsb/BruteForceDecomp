/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F5C53F89E48712714158999D4901DE968A4CBABA557484F6FD923670931088C
 * Entry: 0x002d9be0, Ghidra index: 10256, label: FUN_002d9be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d9be0(int param_1)

{
  float fVar1;
  int in_EAX;
  undefined4 *in_ECX;
  float *unaff_ESI;
  
  if (in_EAX != 0) {
    fVar1 = *(float *)(in_EAX + 0x40);
    FUN_002b8d10(in_EAX + 0xac,*in_ECX,fVar1 * *unaff_ESI);
    FUN_002b8d10(in_EAX + 0xac,in_ECX[1],fVar1 * unaff_ESI[1]);
    FUN_002b8d10(in_EAX + 0x9c,in_ECX + 0x1d,*unaff_ESI);
    FUN_002b8d10(in_EAX + 0x9c,in_ECX + 0x21,unaff_ESI[1]);
  }
  if (param_1 != 0) {
    fVar1 = *(float *)(param_1 + 0x40);
    FUN_002b8d10(param_1 + 0xac,*in_ECX,-(fVar1 * *unaff_ESI));
    FUN_002b8d10(param_1 + 0xac,in_ECX[1],-(fVar1 * unaff_ESI[1]));
    FUN_002b8d10(param_1 + 0x9c,in_ECX + 0x29,-*unaff_ESI);
    FUN_002b8d10(param_1 + 0x9c,in_ECX + 0x2d,-unaff_ESI[1]);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35B9561B204D486D23DDCB1C495C7D4A81BC2A265EC3B8343B2575B92D0B0FA8
 * Entry: 0x0017aa30, Ghidra index: 5019, label: FUN_0017aa30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callee; x86 CALL/RET4 and x87 return observed in retail XBE.
 * Host C++ ABI and guest ECX object layout remain ABI_UNVERIFIED. */
extern float10 FUN_0017aa70(float param_1);
void FUN_0017aa30(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  float10 fVar4;
  /* 0x0017AA49 PUSH EBP passes the raw IEEE754 DWORD, not its numeric
   * integer value. 0x0017AA94 FLD DWORD PTR [ESP+8] consumes those bits.
   * Preserve the guest word exactly without a host pointer conversion. */
  float bf_original_float_argument;
  memcpy(&bf_original_float_argument, &param_1, sizeof bf_original_float_argument);
  
  iVar1 = *(int *)(in_EAX + 0x10);
  for (iVar3 = *(int *)(in_EAX + 0xc); iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
    iVar2 = *(int *)(iVar3 + 0x14);
    if (-1 < iVar2) {
      fVar4 = (float10)FUN_0017aa70(bf_original_float_argument);
      *(float *)(*(int *)(param_2 + 4) + iVar2 * 4) = (float)fVar4;
    }
  }
  return;
}

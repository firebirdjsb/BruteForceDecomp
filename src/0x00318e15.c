/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 440E096195C3085B16C3241D0EA86F6C602864180B8885F8B2F8FA90367AC01F
 * Entry: 0x00318e15, Ghidra index: 12212, label: FUN_00318e15
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00318e15(void)

{
  int iVar1;
  int in_ECX;
  
  DSOUND__CMcpxBuffer_Stop(0);
  FUN_00318786();
  if ((*(ushort *)(in_ECX + 0x12) & 0x100) != 0) {
    FUN_003174e3();
    iVar1 = *(int *)(in_ECX + 0x8c);
    if (iVar1 != 0) {
      FUN_0031b071(iVar1);
      *(int *)(in_ECX + 0x8c) = 0;
    }
  }
  return;
}

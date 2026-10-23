/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5F6771D58EDEE053EEEB19481FEB59D37E7777FE5524A4094EB2C4270A55C48
 * Entry: 0x0003f370, Ghidra index: 476, label: FUN_0003f370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003f370(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_000120f0();
  (**(code **)(*in_ECX + 0x358))();
  in_ECX[0x21c] = 0;
  *(undefined1 *)(in_ECX + 0x21d) = 0;
  in_ECX[0x21e] = 0x1e;
  in_ECX[0x220] = 7;
  if (*(int *)(iVar1 + 0x1f8) == 0x30) {
    *(undefined1 *)(in_ECX + 0x21d) = 1;
  }
  return;
}

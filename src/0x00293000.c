/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 400D0FB455D402B5CC7BC7A9142A3268CD2FCDC2933CE5E61470AE631499FDDA
 * Entry: 0x00293000, Ghidra index: 9265, label: FUN_00293000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00293000(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int in_EDX;
  
  if (in_EDX < 0) {
    in_EDX = 0;
  }
  uVar1 = FUN_00293d60();
  iVar2 = 0;
  in_ECX[2] = uVar1;
  *in_ECX = 0xfffffffd;
  if (0 < in_EDX) {
    do {
      iVar2 = iVar2 + 1;
      FUN_00293f40();
    } while (iVar2 < in_EDX);
  }
  FUN_002927e0(uVar1,in_EDX);
  return;
}

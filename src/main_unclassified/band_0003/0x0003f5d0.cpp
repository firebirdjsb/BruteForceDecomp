/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 292E9A2AD106B6090937CA043037782D102FB6EAC5556C942DCEAA6F676D70C9
 * Entry: 0x0003f5d0, Ghidra index: 477, label: FUN_0003f5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003f5d0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_000120f0();
  *(undefined4 *)(in_ECX + 0x880) = 1;
  *(undefined4 *)(in_ECX + 0x87c) = 0x25;
  *(undefined1 *)(in_ECX + 0x874) = 0;
  iVar1 = *(int *)(iVar1 + 0x1f8);
  if ((((iVar1 == 0x25) || (iVar1 == 0x26)) || (iVar1 == 0x27)) ||
     ((iVar1 == 0x29 || (iVar1 == 0x28)))) {
    *(undefined1 *)(in_ECX + 0x874) = 1;
  }
  return;
}

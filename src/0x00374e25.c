/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 639E5D193581B609124967D27101A1D838E2736748BC19C5E8A112FBD4967450
 * Entry: 0x00374e25, Ghidra index: 13438, label: FUN_00374e25
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00374e25(void)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  
  iVar3 = *in_ECX;
  if (((byte)XboxHardwareInfo_exref[1] & 2) == 0) {
    cVar2 = *(char *)((int)in_ECX + 10);
    if (cVar2 == '\x0f') {
      uVar4 = 0xdaebc;
    }
    else if (cVar2 == '\x10') {
      uVar4 = 0xe2194;
    }
    else {
      if (cVar2 != '\x12') {
        return;
      }
      uVar4 = 0x108e48;
    }
    *(undefined4 *)(iVar3 + 0x680680) = uVar4;
    puVar1 = (uint *)(iVar3 + 0x6806a0);
    *puVar1 = ~*puVar1 & 1;
  }
  return;
}

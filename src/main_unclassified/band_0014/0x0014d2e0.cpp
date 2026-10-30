/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B2F9520B8DFC84FB981AEA5BA18BF9167FD61660D2746307BADA2E2801EF124
 * Entry: 0x0014d2e0, Ghidra index: 4357, label: FUN_0014d2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014d2e0(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  
  cVar1 = (**(code **)(*(int *)(unaff_ESI + 0x144) + 0x20))();
  if (((cVar1 == '\0') || (iVar2 = *(int *)(unaff_ESI + 0x164), iVar2 == 0)) ||
     (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 0x14)) {
    iVar2 = 0;
  }
  return iVar2;
}

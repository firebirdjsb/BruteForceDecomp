/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C409B8D32B29FC2E6BC64B0901269429D42758C451460936B1C3E5FF3369740E
 * Entry: 0x00384994, Ghidra index: 13653, label: FUN_00384994
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00384994(void)

{
  int iVar1;
  code *pcVar2;
  int *in_ECX;
  uint *puVar3;
  uint uVar4;
  uint local_8;
  
  puVar3 = (uint *)(*in_ECX + 0x54);
  for (uVar4 = (uint)*(byte *)(in_ECX + 0x118); uVar4 != 0; uVar4 = uVar4 - 1) {
    local_8 = *puVar3;
    if ((local_8 & 0x100000) != 0) {
      iVar1 = in_ECX[0x11d];
      pcVar2 = (code *)in_ECX[0x11c];
      if (pcVar2 != (code *)0x0) {
        KeCancelTimer(in_ECX + 0x11e);
        in_ECX[0x11c] = 0;
        in_ECX[0x11d] = 0;
        (*pcVar2)((local_8 & 0x200) << 0xf,iVar1);
      }
    }
    local_8 = local_8 & 0xffff0000;
    *puVar3 = local_8;
    puVar3 = puVar3 + 1;
  }
  FUN_00384870();
  return;
}

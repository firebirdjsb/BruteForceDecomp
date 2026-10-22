/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 788B2F8C817EF4247776BE50FCA2CB08B23A734A61739C83EB3633E74FBB8C73
 * Entry: 0x0036c6a0, Ghidra index: 13278, label: FUN_0036c6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0036c6a0(void)

{
  uint *puVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar2 = *unaff_ESI;
  if ((uVar2 & 0x780000) == 0x80000) {
    if ((((uVar2 & 0x70000) == 0x50000) && (puVar1 = (uint *)unaff_ESI[5], puVar1 != (uint *)0x0))
       && (uVar2 = *puVar1, *puVar1 = uVar2 - 0x80000, (uVar2 - 0x80000 & 0x78ffff) == 0)) {
      D3D8LTCG__D3D_DestroyResource__LTCG();
    }
    uVar2 = *unaff_ESI;
    if ((uVar2 & 0xffff) == 0) {
      D3D8LTCG__D3D_DestroyResource__LTCG();
      return;
    }
  }
  *unaff_ESI = uVar2 - 0x80000;
  return;
}

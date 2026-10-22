/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DF5852FADA8AFCE10EE319D1018E67752D87B5644E734F065AC44734EF2EF1F
 * Entry: 0x00372180, Ghidra index: 13393, label: FUN_00372180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00372180(void)

{
  int iVar1;
  
  iVar1 = *(int *)(D3D8__D3D_g_pDevice + 0x17c8);
  *(uint *)(iVar1 + 0x100410) = *(uint *)(iVar1 + 0x100410) | 0x10000;
  do {
  } while ((*(uint *)(iVar1 + 0x100410) & 0x10000) != 0);
  return;
}

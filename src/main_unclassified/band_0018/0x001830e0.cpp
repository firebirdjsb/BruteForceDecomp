/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B29DE7BD8145F8BBF27F81CF267E8B9C86B070C1E1F8EDBA8D54A5278CC50557
 * Entry: 0x001830e0, Ghidra index: 5194, label: FUN_001830e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_001830e0(void)

{
  int iVar1;
  int in_ECX;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(in_ECX + 0x74) != 0) {
    iVar1 = DSOUND__IDirectSoundStream_SetMode
                      (*(int *)(in_ECX + 0x74),*(undefined4 *)(in_ECX + 0x24),0);
    bVar2 = -1 < iVar1;
    if (bVar2) {
      FUN_00183af0(*(undefined4 *)(in_ECX + 0x74));
    }
  }
  return bVar2;
}

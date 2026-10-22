/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 334FF6DFC29DE97F782C689424022650644CE571AEBA3BAFE5C9102D4624EDC7
 * Entry: 0x00181a40, Ghidra index: 5166, label: FUN_00181a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00181a40(void)

{
  int iVar1;
  int in_ECX;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(in_ECX + 0x68) != 0) {
    iVar1 = DSOUND__IDirectSoundBuffer_SetMode
                      (*(int *)(in_ECX + 0x68),*(undefined4 *)(in_ECX + 0x24),0);
    bVar2 = -1 < iVar1;
    if (bVar2) {
      FUN_00182c80(*(undefined4 *)(in_ECX + 0x68));
    }
  }
  return bVar2;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57F65B754C5CBF61972273494D583BD086BEDE45D8182745C6B48FA7D8AB9DDA
 * Entry: 0x003198e3, Ghidra index: 12234, label: FUN_003198e3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003198e3(void)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0x12);
  if ((bVar1 & 1) != 0) {
    iVar2 = DSOUND__CMcpxBuffer_Stop(0);
    if (iVar2 < 0) {
      return;
    }
    FUN_00318786();
    if ((char)((char)((int)(*(byte *)(*(int *)(in_ECX + 0x88) + 0xe) - 1) >> 1) + '\x01') !=
        *(char *)(in_ECX + 100)) {
      FUN_00319896();
    }
  }
  iVar2 = FUN_003175fd();
  if ((-1 < iVar2) && ((bVar1 & 1) != 0)) {
    FUN_00319589();
    return;
  }
  return;
}

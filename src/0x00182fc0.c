/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C561F1AD250F065301F66690A7072DC8B6863C2921CBC8747633433EA5F5F16
 * Entry: 0x00182fc0, Ghidra index: 5192, label: FUN_00182fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00182fc0(void)

{
  uint *puVar1;
  uint uVar2;
  int unaff_EDI;
  
  puVar1 = (uint *)(unaff_EDI + 0xa4);
  *puVar1 = 0;
  (**(code **)(**(int **)(unaff_EDI + 0x74) + 0xc))(*(int **)(unaff_EDI + 0x74),puVar1);
  uVar2 = *puVar1;
  if ((uVar2 & 0x40000) == 0) {
    if (*(char *)(unaff_EDI + 0xac) == '\0') {
      *(byte *)(unaff_EDI + 0xac) = (byte)(uVar2 >> 0x10) & 1;
    }
    else {
      if ((uVar2 & 0x30000) != 0) {
        *(undefined1 *)(unaff_EDI + 0xa8) = 1;
        return;
      }
      if ((uVar2 & 0x80000) != 0) {
        *(undefined1 *)(unaff_EDI + 0xa8) = 0;
        DSOUND__IDirectSoundStream_FlushEx(*(undefined4 *)(unaff_EDI + 0x74),0,0,1);
        return;
      }
    }
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70EB1AFC691711B1DB210D4E6480C82BCF4E0BC24BAE9D95C8D9B2DC39888FC8
 * Entry: 0x002ef12e, Ghidra index: 10705, label: __getstream
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fb0;
extern uint32_t DAT_004a8fb4;
/* Library Function - Single Match
    __getstream
   
   Library: Visual Studio 2003 Release */

undefined4 * __getstream(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  if (0 < DAT_004a8fb4) {
    do {
      iVar1 = *(int *)(DAT_004a8fb0 + iVar2 * 4);
      if (iVar1 == 0) {
        uVar3 = thunk_FUN_00237ea0(0x20);
        *(undefined4 *)(iVar2 * 4 + DAT_004a8fb0) = uVar3;
        puVar4 = *(undefined4 **)(iVar2 * 4 + DAT_004a8fb0);
        if (puVar4 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
LAB_002ef184:
        if (puVar4 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        puVar4[4] = 0xffffffff;
        puVar4[1] = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        puVar4[7] = 0;
        return puVar4;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        puVar4 = *(undefined4 **)(DAT_004a8fb0 + iVar2 * 4);
        goto LAB_002ef184;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_004a8fb4);
  }
  return (undefined4 *)0x0;
}

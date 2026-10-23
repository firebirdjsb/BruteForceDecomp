/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADB6E29CF4A052A279EDFE5EA86FC84BDA1929A272CB0A1A85B6A6DB72434999
 * Entry: 0x002f0e3c, Ghidra index: 10764, label: FUN_002f0e3c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8e98;
extern uint32_t DAT_004a8ea0;
int FUN_002f0e3c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = -1;
  iVar6 = 0;
  iVar4 = 0;
  piVar3 = &DAT_004a8ea0;
  do {
    puVar2 = (undefined4 *)*piVar3;
    puVar1 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)thunk_FUN_00237ea0(0x100);
      if (puVar2 != (undefined4 *)0x0) {
        DAT_004a8e98 = DAT_004a8e98 + 0x20;
        (&DAT_004a8ea0)[iVar6] = puVar2;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x40; puVar2 = puVar2 + 2) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar1 = (undefined4 *)(&DAT_004a8ea0)[iVar6];
        }
        iVar5 = iVar6 << 5;
      }
      return iVar5;
    }
    for (; puVar2 < puVar1 + 0x40; puVar2 = puVar2 + 2) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        *puVar2 = 0xffffffff;
        iVar5 = ((int)puVar2 - *piVar3 >> 3) + iVar4;
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    piVar3 = piVar3 + 1;
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 0x20;
    if (0x4a8f9f < (int)piVar3) {
      return iVar5;
    }
  } while( true );
}

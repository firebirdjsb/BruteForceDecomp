/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EABBB79997A5A9A34A4901FAFA40B92CB3AC69D1B1A52BF7837C1781D7F4EA48
 * Entry: 0x002ece36, Ghidra index: 10676, label: __fcloseall
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
    __fcloseall
   
   Library: Visual Studio 2003 Release */

int __fcloseall(void)

{
  uint32_t guest_stream; /* 32-bit Xbox CRT stream address */
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 3;
  iVar3 = 0;
  if (3 < DAT_004a8fb4) {
    do {
      guest_stream = *(uint32_t *)(uintptr_t)(DAT_004a8fb0 + iVar2 * 4);
      if (guest_stream != 0) {
        /* TEST BYTE PTR [eax+0x0c],0x83 at 0x002ECE51. */
        if ((*(uint8_t *)(uintptr_t)(guest_stream + 0x0c) & 0x83) != 0) {
          iVar1 = _fclose((void *)(uintptr_t)guest_stream);
          if (iVar1 != -1) {
            iVar3 = iVar3 + 1;
          }
        }
        if (0x13 < iVar2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(uintptr_t)(DAT_004a8fb0 + iVar2 * 4));
          /* AND DWORD PTR [table+index*4],0 at 0x002ECE7B. */
          *(uint32_t *)(uintptr_t)(DAT_004a8fb0 + iVar2 * 4) = 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_004a8fb4);
  }
  return iVar3;
}

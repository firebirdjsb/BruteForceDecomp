/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 510E9FD864919E45E6F3253AE370CF75E4DDF6E26ED8C1DFDB4E6A9C2F41B652
 * Entry: 0x001b1a10, Ghidra index: 5608, label: FUN_001b1a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original 0x001b1a10 pushes ECX, ESI, EDI. At 0x001b1a3c,
 * LEA EDX,[ESP+10h] addresses entry ESP+4, the first guest word.
 * 0x001b1a82 reads [ESP+24h], which is entry ESP+18h;
 * 0x001b1a96 RET 20h establishes eight incoming DWORDs.
 * Guest record only: EAX/ECX and native host ABI remain unverified. */
typedef struct {
  undefined4 word_04, word_08, word_0c, word_10;
  undefined4 word_14, word_18, word_1c, word_20;
} bf_001b1a10_guest_words;
_Static_assert(sizeof(bf_001b1a10_guest_words) == 32, "eight incoming guest DWORDs");
_Static_assert(offsetof(bf_001b1a10_guest_words, word_18) == 20, "guest word 0x18 offset");
void FUN_001b1a10(bf_001b1a10_guest_words guest_words)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 5;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 5;
    }
    FUN_001b6a50(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&guest_words.word_04);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 5)) {
      FUN_001b6a00(local_4,in_EAX * 0x20 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (guest_words.word_18 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_stack_00000018);
  }
  return;
}

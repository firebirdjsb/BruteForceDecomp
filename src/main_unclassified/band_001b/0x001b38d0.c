/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53DBA20A3F3E74473602DFD5BA9A44B558C3F0857A2E35AE2DAB50D22BA1A01E
 * Entry: 0x001b38d0, Ghidra index: 5646, label: FUN_001b38d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original Xbox x86 0x001b38d0: LEA at 0x001b3923 addresses entry ESP+4.
 * Verified return cleanup is RET 20 (0x14).
 * This models guest stack storage, not implicit register inputs or host ABI. */
typedef struct {
  undefined4 word_04;
  undefined4 word_08;
  undefined4 word_0c;
  undefined4 word_10;
  undefined4 word_14;
} bf_001b38d0_guest_words;
_Static_assert(sizeof(bf_001b38d0_guest_words) == 20, "guest stack size");
void FUN_001b38d0(bf_001b38d0_guest_words guest_words)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(in_ECX + 8) - iVar1) / 0x14;
  }
  if (uVar2 < in_EAX) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar1) / 0x14;
    }
    FUN_0001c630(*(undefined4 *)(in_ECX + 8),in_EAX - iVar1);
    return;
  }
  if (iVar1 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar1) / 0x14)) {
      FUN_002633d0(in_ECX,&guest_words.word_04,*(int *)(in_ECX + 4) + in_EAX * 0x14,*(int *)(in_ECX + 8)
                  );
    }
  }
  return;
}

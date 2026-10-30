/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F789465E6B1855E0526A8A7C9DB0B7AC7C858FD624C5DF7437653584B7AD5A5E
 * Entry: 0x001b2540, Ghidra index: 5622, label: FUN_001b2540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Incoming guest stack record: original x86 uses the first argument's
 * address and returns with RET 34h (13 four-byte stack words).
 * Register inputs and native host ABI are not established here. */
typedef struct {
  undefined4 word_04;
  undefined4 word_08;
  undefined4 word_0c;
  undefined4 word_10;
  undefined4 word_14;
  undefined4 word_18;
  undefined4 word_1c;
  undefined4 word_20;
  undefined4 word_24;
  undefined4 word_28;
  undefined4 word_2c;
  undefined4 word_30;
  undefined4 word_34;
} bf_001b2540_guest_words;
_Static_assert(sizeof(bf_001b2540_guest_words) == 52, "guest stack record size");
void FUN_001b2540(bf_001b2540_guest_words guest_words)

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
    uVar2 = (*(int *)(in_ECX + 8) - iVar1) / 0x34;
  }
  if (uVar2 < in_EAX) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar1) / 0x34;
    }
    FUN_001b9a10(*(undefined4 *)(in_ECX + 8),in_EAX - iVar1);
    return;
  }
  if (iVar1 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar1) / 0x34)) {
      FUN_001b99c0(in_ECX,&guest_words.word_04,in_EAX * 0x34 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8)
                  );
    }
  }
  return;
}

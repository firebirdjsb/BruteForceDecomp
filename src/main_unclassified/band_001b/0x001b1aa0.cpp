/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5AF159D80B27D6057C8FBEE1CC31FE1F616DB8744CE7899AD2DDD49357AB175
 * Entry: 0x001b1aa0, Ghidra index: 5609, label: FUN_001b1aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox x86 0x001b1aa0: LEA at 0x001b1af3 and 0x001b1b37 computes
 * entry ESP+4 after accounting for saved registers and temporary pushes.
 * RET 0x28 establishes 10 incoming DWORDs. These are guest words;
 * implicit x86 register inputs and native host ABI remain unverified. */
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
} bf_001b1aa0_guest_words;
_Static_assert(sizeof(bf_001b1aa0_guest_words) == 40, "incoming guest stack width");
void FUN_001b1aa0(bf_001b1aa0_guest_words guest_words)

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
    uVar2 = (*(int *)(in_ECX + 8) - iVar1) / 0x28;
  }
  if (uVar2 < in_EAX) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar1) / 0x28;
    }
    FUN_0008ee10(*(undefined4 *)(in_ECX + 8),in_EAX - iVar1);
    return;
  }
  if (iVar1 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar1) / 0x28)) {
      FUN_001b6d40(in_ECX,&guest_words.word_04,*(int *)(in_ECX + 4) + in_EAX * 0x28,*(int *)(in_ECX + 8)
                  );
    }
  }
  return;
}

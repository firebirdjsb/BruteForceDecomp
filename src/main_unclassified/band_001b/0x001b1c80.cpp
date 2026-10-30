/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4DD61865D9E37B9CB6AD4F3153EDD73D94ED4F9DD55CA528A95C7C1F3BA7066
 * Entry: 0x001b1c80, Ghidra index: 5611, label: FUN_001b1c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox x86 0x001b1c80: LEA at 0x001b1cb2 and 0x001b1ce6 computes
 * entry ESP+4 after accounting for saved registers and temporary pushes.
 * RET 0x20 establishes 8 incoming DWORDs. These are guest words;
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
} bf_001b1c80_guest_words;
_Static_assert(sizeof(bf_001b1c80_guest_words) == 32, "incoming guest stack width");
void FUN_001b1c80(bf_001b1c80_guest_words guest_words)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  
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
    FUN_001b76b0(*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
    return;
  }
  if ((iVar2 != 0) && (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 5))) {
    FUN_001b7660(in_ECX,&guest_words.word_04,in_EAX * 0x20 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
  }
  return;
}

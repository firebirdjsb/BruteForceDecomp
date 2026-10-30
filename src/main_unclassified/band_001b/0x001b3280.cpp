/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 428C8CD85462E8569114C43B1BBA46DD2E68BC315EFD863D82FE0BE6CF32B7CF
 * Entry: 0x001b3280, Ghidra index: 5637, label: FUN_001b3280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Guest incoming argument storage, 20 DWORDs (RET 50h in original x86).
 * The address of entry ESP+4 is passed to the element-copy routine.
 * Native host ABI and implicit x86 registers remain unverified. */
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
  undefined4 word_38;
  undefined4 word_3c;
  undefined4 word_40;
  undefined4 word_44;
  undefined4 word_48;
  undefined4 word_4c;
  undefined4 word_50;
} bf_001b3280_guest_words;
_Static_assert(sizeof(bf_001b3280_guest_words) == 80, "guest stack record size");
void FUN_001b3280(bf_001b3280_guest_words guest_words)

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
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x50;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x50;
    }
    FUN_001bdef0(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&guest_words.word_04);
    FUN_0006a3d0();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x50)) {
      FUN_001bde90(in_ECX,local_4,in_EAX * 0x50 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  FUN_0006a3d0();
  return;
}

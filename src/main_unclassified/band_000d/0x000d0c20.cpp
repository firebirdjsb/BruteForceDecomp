/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71D8C7BB9D95913384304E77FE83833A2DFCF86074E7F9705FF48011548B9F2E
 * Entry: 0x000d0c20, Ghidra index: 2584, label: FUN_000d0c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x000d0c20: three register saves; 0x000d0c4c LEA EDX,[ESP+10h]
 * therefore addresses the first incoming DWORD (entry ESP+4).
 * 0x000d0c92 reads the fourth DWORD (entry ESP+10h); RET 10h.
 * 0x000d0d41..0x000d0d59 reads words +0,+4,+12 through this
 * record's address. A 16-byte by-value record models those guest
 * words ONLY, not the unverified host/Xbox calling convention, EAX,
 * ECX, or any caller-visible stack writeback. */
extern void FUN_000d0d20(int param_1,int param_2,uint param_3,int param_4);
extern void FUN_000d0cb0(int *param_1,int param_2,int param_3);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

typedef struct {
  undefined4 word_04;
  undefined4 word_08;
  undefined4 word_0c;
  undefined4 word_10;
} bf_000d0c20_incoming_words;
_Static_assert(sizeof(bf_000d0c20_incoming_words) == 16, "guest stack record width");
_Static_assert(offsetof(bf_000d0c20_incoming_words, word_10) == 12, "fourth word offset");
void FUN_000d0c20(bf_000d0c20_incoming_words guest_words)

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
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 4;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 4;
    }
    FUN_000d0d20(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&guest_words);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 4)) {
      FUN_000d0cb0(local_4,in_EAX * 0x10 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (guest_words.word_10 != 0) {
    FUN_0008f6e0();
  }
  return;
}
